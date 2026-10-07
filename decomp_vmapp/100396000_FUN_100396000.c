
void FUN_100396000(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  FUN_10038e8e0(param_2,"gl_FrontColor = out_color_0;\n");
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_10038e8e0(param_2,"gl_FrontSecondaryColor = out_color_1;\n");
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_10038e8e0(param_2,"gl_FogFragCoord = fogCoord;\n");
  }
  if ((*(int *)(*(long *)(param_1 + 0xa8) + 0x60) == 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78), uVar1 != 0)) {
    if ((uVar1 & 1) != 0) {
      FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",0,0);
      uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
    }
    if ((int)uVar1 >> 1 != 0) {
      if (((int)uVar1 >> 1 & 1U) != 0) {
        FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",1,1);
        uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
      }
      if ((int)uVar1 >> 2 != 0) {
        if (((int)uVar1 >> 2 & 1U) != 0) {
          FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",2,2);
          uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
        }
        if ((int)uVar1 >> 3 != 0) {
          if (((int)uVar1 >> 3 & 1U) != 0) {
            FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",3,3);
            uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
          }
          if ((int)uVar1 >> 4 != 0) {
            if (((int)uVar1 >> 4 & 1U) != 0) {
              FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",4,4);
              uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
            }
            if ((int)uVar1 >> 5 != 0) {
              if (((int)uVar1 >> 5 & 1U) != 0) {
                FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",5,5);
                uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
              }
              if ((int)uVar1 >> 6 != 0) {
                if (((int)uVar1 >> 6 & 1U) != 0) {
                  FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",6,6);
                  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
                }
                if ((uVar1 & 0x80) != 0) {
                  FUN_10038e8e0(param_2,"gl_TexCoord[%u] = out_tex_%u;\n",7,7);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

