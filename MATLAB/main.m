% Set directory of current file as working directory
% Get the current file's directory
currentDir = fileparts(mfilename('fullpath'));
cd(currentDir);

% Recursively add subdirectories to path
addpath(genpath(currentDir));

% Open simulink model
combined_mdl_wpanel

% Ensure sldrt is configrued for this version of MATLAB
sldrtkernel -setup

% Open app
rtgui