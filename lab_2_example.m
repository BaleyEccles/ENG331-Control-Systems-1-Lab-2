close all
% load the workspace from the prac first.
data = load("matlab.mat");



OP_1 = data.simOut_20250812_143153; % replace with your simout struct for operating point 1

OP_2 = data.simOut_20250812_141648; % replace with your simout struct for operating point 2

OP_3 = data.simOut_20250812_142257; % replace with your simout struct for operating point 3

time_op1 = OP_1.tout; % time
h1_op1 = OP_1.measurements.Tank_1_Level__m_.Data; % tank 1 height 
h2_op1 = OP_1.measurements.Tank_2_Level__m_.Data; % tank 2 height
step_op1 = OP_1.ref_signal.Data; % input voltage

time_op2 = OP_2.tout;
h1_op2 = OP_2.measurements.Tank_1_Level__m_.Data;
h2_op2 = OP_2.measurements.Tank_2_Level__m_.Data;
step_op2 = OP_2.ref_signal.Data;

time_op3 = OP_3.tout;
h1_op3 = OP_3.measurements.Tank_1_Level__m_.Data;
h2_op3 = OP_3.measurements.Tank_2_Level__m_.Data;
step_op3 = OP_3.ref_signal.Data;


Fig_1 = figure
plot(time_op1, smooth(h1_op1)); % may need smoothing - depending on how noisy the signal is
hold on;
plot(time_op1, smooth(h2_op1));
hold on;
plot(time_op1, step_op1);
title("op 1")
legend("h1", "h2", "step")
saveas(gcf, 'Fig_1.png'); % matlab crashes if i render it. So save it to a png

Fig_2 = figure
plot(time_op2, smooth(h1_op2));
hold on;
plot(time_op2, smooth(h2_op2));
hold on;
plot(time_op2, step_op2);
title("op 2")
legend("h1", "h2", "step")
saveas(gcf, 'Fig_2.png');

Fig_3 = figure
plot(time_op3, smooth(h1_op3));
hold on;
plot(time_op3, smooth(h2_op3));
hold on;
plot(time_op3, step_op3);
title("op 3")
legend("h1", "h2", "step")
saveas(gcf, 'Fig_3.png');

% find final value, gain, settling time, rise time ....


[Final_Value_op1_h1, Gain_op1_h1, Settling_Time_op1_h1] = find_vals(smooth(h1_op1), step_op1, time_op1)
[Final_Value_op2_h1, Gain_op2_h1, Settling_Time_op2_h1] = find_vals(smooth(h1_op2), step_op2, time_op2)
[Final_Value_op3_h1, Gain_op3_h1, Settling_Time_op3_h1] = find_vals(smooth(h1_op3), step_op3, time_op3)

[Final_Value_op1_h2, Gain_op1_h2, Settling_Time_op1_h2] = find_vals(smooth(h2_op1), step_op1, time_op1)
[Final_Value_op2_h2, Gain_op2_h2, Settling_Time_op2_h2] = find_vals(smooth(h2_op2), step_op2, time_op2)
[Final_Value_op3_h2, Gain_op3_h2, Settling_Time_op3_h2] = find_vals(smooth(h2_op3), step_op3, time_op3)

function [FV_array, G_array, ST_array] = find_vals(h, step, time)
    dif = diff(step);
    FV_array = [];
    G_array = [];
    ST_array = [];
    for i = 1:length(dif)
        if (dif(i) ~= 0)
            start_pos = i;
            end_pos = length(dif);
            for j = (start_pos + 1):length(dif)
                if (dif(j) ~= 0)
                    end_pos = j;
                    break;
                end
            end
            i = end_pos - 1;
            ST_pos = settling_time(h, start_pos, end_pos);
            FV = final_value(h, ST_pos, end_pos);
            G = (FV - h(start_pos))/(step(end_pos) - step(start_pos));
            
            FV_array = [FV_array, FV];
            G_array = [G_array, G];
            ST_array = [ST_array, ST_pos];            
        end
    end
    ST_array = time(ST_array);
    
end

function ST = settling_time(h, start_pos, end_pos) % This function isnt great
    percent = 2/100;
    IV = h(start_pos);
    FV = final_value(h, start_pos, end_pos);
    tol = percent*FV;
    LB = FV - tol;
    UB = FV + tol;
    ST = NaN;
    for i = start_pos:end_pos
        if (h(i) >= LB && h(i) <= UB)
            ST = i;
            break;
            %if (all(h(i:end_pos) >= LB & h(i:end_pos) <= LB))
            %    ST = i;
            %    break;
            %end
        end
    end
end

function FV = final_value(h, ST_pos, end_pos)
    FV = mean(h(ST_pos:end_pos));
end
