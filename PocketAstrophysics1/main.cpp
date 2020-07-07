
#include <stdio.h>
#include <graphics.h>//c++图形库，需要自己安装

int main()
{
	//创建窗口
	initgraph(800, 600);
	//定义图片变量
	IMAGE img;
	//使用相对路径加载图片
	loadimage(&img, "Textures\\Skybox\\bkg1_bot.png", 800, 600);
	//显示图片
	putimage(0, 0, &img);
	//窗口悬停
	system("pause");
	return 0;


}
