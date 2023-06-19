clear all
clc
i=1;
uno = serialport("COM5",9600);
t = linspace(0,2*pi,100);
X=[6,0,-6,0];
Y=[0,-6,0,6];
r=4;
Z=zeros(1,100);
colorbar
caxis([0,300])


figure
for kk = 1:4
  patch(r*sin(t)+X(kk),r*cos(t)+Y(kk),'w')
  hold on
end
axis square
box on

while(1)
    Str = readline(uno);
    pat = ', ';
    data = str2double(split(Str,pat));
    disp(i);
    i=i+1;
    for k=1:4
        Z=Z+data(k);
        patch(r*sin(t)+X(k),r*cos(t)+Y(k),Z)
        Z=zeros(1,100);
        caxis([0,300])
        colorbar
        hold on
    end
    drawnow
end

clear uno