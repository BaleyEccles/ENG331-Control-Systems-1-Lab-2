

% load the workspace from the prac first.

OP_1 = simOut_XXXXXXXX_XXXXXX; % replace with your simout struct for operating point 1

OP_2 = simOut_XXXXXXXX_XXXXXX; % replace with your simout struct for operating point 2

OP_3 = simOut_XXXXXXXX_XXXXXX; % replace with your simout struct for operating point 3

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


figure;
plot(time_op1, smooth(h1_op1)); % may need smoothing - depending on how noisy the signal is
hold on;
plot(time_op1, h2_op1);
hold on;
plot(time_op1, step_op1);


figure;
plot(time_op2, smooth(h1_op2));
hold on;
plot(time_op2, h2_op2);
hold on;
plot(time_op2, step_op2);


figure;
plot(time_op3, smooth(h1_op3));
hold on;
plot(time_op3, h2_op3);
hold on;
plot(time_op3, step_op3);

% find final value, gain, settling time, rise time ....

