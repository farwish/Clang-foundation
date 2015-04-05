//
//  cmd.c
//  demo15
//
//  Created by weichen on 15/1/17.
//  Copyright (c) 2015年 weichen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cmd[128];
    
    while(1)
    {
        scanf("%s", cmd);
        
        if( ! strcmp(cmd, "help"))
        {
            printf("This is a help cmd !\n");
        }
        else if( ! strcmp(cmd, "quit"))
        {
            exit(0);
        }
        else
        {
            printf("No such cmd !\n");
        }
    }
    
    return 0;
    
}