close all
data = load("matlab.mat");
datas = [data.simOut_20250812_141100, data.simOut_20250812_141648, data.simOut_20250812_142257, data.simOut_20250812_143153];

for i = 1:length(datas)
    t1  = datas(i).logsout{3}.Values.Time;
    t2  = datas(i).logsout{4}.Values.Time;
    t3  = datas(i).logsout{5}.Values.Time;

    d1  = datas(i).logsout{3}.Values.Data;
    d2  = datas(i).logsout{4}.Values.Data;
    d3  = datas(i).logsout{5}.Values.Data;

    figure;
    t = sprintf("1, %i\n", i);
    plot(t1, d1);
    title(t)
    
    figure;
    t = sprintf("2, %i\n", i);
    plot(t2, d2);
    title(t)
    
    figure;
    t = sprintf("3, %i\n", i);
    plot(t3, d3);
    title(t)
end
