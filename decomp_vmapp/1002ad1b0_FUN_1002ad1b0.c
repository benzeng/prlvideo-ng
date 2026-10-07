
undefined4 FUN_1002ad1b0(uint param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  char *local_38;
  char *local_30;
  undefined8 local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = 
  "#version 110\n#extension GL_ARB_texture_rectangle : enable\n#define IN_VS attribute\n#define OUT_VS_FLAT varying\n#define OUT_VS varying\n#define IN_PS varying\n#define IN_PS_FLAT varying\n#define TEXTURE2D texture2D\n#define TEXTURE2DLOD texture2DLod\n#define TEXTURE2DRECT texture2DRect\n#define OUT_COLOR gl_FragData[0]\n"
  ;
  if (param_1 < 0xd3) {
    local_30 = "";
  }
  else {
    local_38 = 
    "#version 150\n#define IN_VS in\n#define OUT_VS_FLAT flat out\n#define OUT_VS out\n#define IN_PS in\n#define IN_PS_FLAT flat in\n#define TEXTURE2D texture\n#define TEXTURE2DLOD textureLod\n#define TEXTURE2DRECT texture\n#define OUT_COLOR fragData\n"
    ;
    local_30 = "";
    if (param_2 == 0x8b30) {
      local_30 = "out vec4 OUT_COLOR;\n";
    }
  }
  local_28 = param_3;
  local_20 = lVar1;
  uVar2 = (*DAT_1011c5af8)(param_2);
  (*DAT_1011c6af8)(uVar2,3,&local_38,0);
  (*DAT_1011c59f0)(uVar2);
  if (lVar1 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

