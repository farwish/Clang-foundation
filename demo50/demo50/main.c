//
//  main.c
//  demo50
//
//  Created by weichen on 15/7/7.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     Windows API:
     
     从第一个32位的Windows开始就出现了，就叫做Win32API.
     它是一个纯C的函数库，就和C标准库一样，使你可以写Windows应用程序
     过去很多Windows程序是用这个方式做出来的
     
     main():
     
     main()成为C语言的入口函数其实和C语言本身无关，你的代码是被一小段叫做启动代码的程序所调用的，它需要一个叫做main的地方
     操作系统把你的可执行程序装载到内存里，启动运行，然后调用你的main函数
     
     WinMain():
     
     As main() is the entry function of an ordinary C program, WinMain() is the one Win32API program.
     Windows applications have a different "startup" code that needs a function "WinMain()".
     
     #include <windows.h>
     int WINAPI WinMain(
     HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)   //参数
     {
        MessageBox(NULL, "Goodbye, cruel world!", "Note", MB_OK);
        return 0;
     }
     
     
     // 创建ACLlib程序
     
     #include "acllib.h"
     #include <stdio.h>
     
     int Setup()
     {
        initConsole();
     
        printf("输入宽度：");
     
        int width;
        scanf("%d", &width);
        initWindow("test", 100, 100, width, width);
     
        beginPaint();
        line(20, 20, width - 20, width - 20);
        putPixel(100,150,RGB(255,255,0));
        endPaint();
     
        return 0;
    
     
     // 基本绘图函数
     
     创建图形窗口
     void initWindow(const char title[], int left, int top, int width, int height);
     
     坐标系
     在windows/unix中，坐标是以像素点得数字来定义的。对于你创建出来的窗口，左上角是(0,0), x轴自左向右增长，而y轴自上向下增长
     
     终端窗口
     如果需要用scanf和printf, 则需要首先initConsole();
     然后就可以在那个窗口上使用scanf和printf了
     
     启动/结束绘图
     void beginPaint();
     void endPaint();
     任何绘图函数的调用必须在这一对函数调用之间
     
     点
     void putPixel(int x, int y, ACL_Color color);
     ACL_Color getPixel(int x, int y);
     
     颜色
     RGB(r,g,b);
     红色 -> RGB(255,0,0);
     BLACK,RED,GREEN,BLUE,CYAN,MAGENTA,YELLOW,WHITE
     
     线
     void moveTo(int x, int y);
     void moveRel(int dx, int dy);
     void line(int x0, int y0, int x1, int y1);
     void lineTo(int x, int y);
     void lineRel(int dx, int dy);
     void arc(int nLeftRect, int nTopRect, int nRightRect, int nBottomRect, int nXStartArc, int nYStartArc, int nXEndArc, int nYEndArc);
     
     画笔
     void setPenColor(ACL_Color color);
     void setPenWidth(int width);
     void setPenStyle(ACL_Pen_Style style);
        PEN_STYLE_SOLID,
        PEN_STYLE_DASH,         // ----
        PEN_STYLE_DOT,          // ....
        PEN_STYLE_DASHDOT,      // _._._.
        PEN_STYLE_DASHDOTDOT,   // _.._.._..
        PEN_STYLE_NULL,
     
     面
     void chrod();
     void ellipse();
     void pie();
     void rectangle();
     void roundrect();
     
     刷子
     画笔负责线及面的边缘，刷子负责面的内部
     void setBrushColor(ACL_Color color);
     void setBrushStyle(ACL_Brush_Style style);
        BRUSH_STYLE_SOLID = -1,
        BRUSH_STYLE_HORIZONTAL, // ----
        BRUSH_STYLE_VERTICAL,   // ||||
        BRUSH_STYLE_FDIAGONAL,  // \\\\
        BRUSH_STYLE_BDIAGONAL,  // ////
        BRUSH_STYLE_CROSS,      // ++++
        BRUSH_STYLE_DIAGCROSS,  // xxxx
     
     文字
     void setTextColor(ACL_Color color);
     void setTextBkColor(ACL_Color color);
     void setTextSize(int size);
     void setTextFont(char *pFontName);
     
     void paintText(int x, int y, const char *pStr);
     
     */
    printf("Hello, World!\n");
    return 0;
}
