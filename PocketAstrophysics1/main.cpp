
#include <stdio.h>
#include <graphics.h>//c++ͼ�ο⣬��Ҫ�Լ���װ

int main()
{
	//��������
	initgraph(800, 600);
	//����ͼƬ����
	IMAGE img;
	//ʹ�����·������ͼƬ
	loadimage(&img, "Textures\\Skybox\\bkg1_bot.png", 800, 600);
	//��ʾͼƬ
	putimage(0, 0, &img);
	//������ͣ
	system("pause");
	return 0;


}
