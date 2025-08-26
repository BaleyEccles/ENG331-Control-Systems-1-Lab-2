
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


Fig_1 = figure('Visible', 'off');
plot(time_op1, smooth(h1_op1)); % may need smoothing - depending on how noisy the signal is
hold on;
plot(time_op1, smooth(h2_op1));
hold on;
plot(time_op1, step_op1);
title("op 1")
saveas(gcf, 'Fig_1.png'); % matlab crashes if i render it. So save it to a png

Fig_2 = figure('Visible', 'off');
plot(time_op2, smooth(h1_op2));
hold on;
plot(time_op2, smooth(h2_op2));
hold on;
plot(time_op2, step_op2);
title("op 2")
saveas(gcf, 'Fig_2.png');

Fig_3 = figure('Visible', 'off');
plot(time_op3, smooth(h1_op3));
hold on;
plot(time_op3, smooth(h2_op3));
hold on;
plot(time_op3, step_op3);
title("op 3")
saveas(gcf, 'Fig_3.png');

% find final value, gain, settling time, rise time ....

