hold off;
clear;

 t = 0:0.01:(10*pi);
a = 5;

x = a* cos(t).^3;
y = a* sin(t).^3;
subplot(1,2,1), plot(x, y);
subplot(1,2,2), plot3(x, y, t);