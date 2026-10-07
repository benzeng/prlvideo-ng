
undefined4
FUN_1002ad260(uint param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int local_5c;
  char *local_58;
  char *local_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = (*DAT_1011c5ae8)();
  pcVar6 = 
  "#version 110\n#extension GL_ARB_texture_rectangle : enable\n#define IN_VS attribute\n#define OUT_VS_FLAT varying\n#define OUT_VS varying\n#define IN_PS varying\n#define IN_PS_FLAT varying\n#define TEXTURE2D texture2D\n#define TEXTURE2DLOD texture2DLod\n#define TEXTURE2DRECT texture2DRect\n#define OUT_COLOR gl_FragData[0]\n"
  ;
  if (0xd2 < param_1) {
    pcVar6 = 
    "#version 150\n#define IN_VS in\n#define OUT_VS_FLAT flat out\n#define OUT_VS out\n#define IN_PS in\n#define IN_PS_FLAT flat in\n#define TEXTURE2D texture\n#define TEXTURE2DLOD textureLod\n#define TEXTURE2DRECT texture\n#define OUT_COLOR fragData\n"
    ;
  }
  local_50 = "";
  pcVar4 = "out vec4 OUT_COLOR;\n";
  if (param_1 < 0xd3) {
    pcVar4 = "";
  }
  local_58 = pcVar6;
  local_48 = param_2;
  uVar2 = (*DAT_1011c5af8)(0x8b31);
  (*DAT_1011c6af8)(uVar2,3,&local_58,0);
  (*DAT_1011c59f0)(uVar2);
  local_58 = pcVar6;
  local_50 = pcVar4;
  local_48 = param_3;
  uVar3 = (*DAT_1011c5af8)(0x8b30);
  (*DAT_1011c6af8)(uVar3,3,&local_58,0);
  (*DAT_1011c59f0)(uVar3);
  local_5c = 0;
  (*DAT_1011c56c8)(uVar1,uVar2);
  (*DAT_1011c56c8)(uVar1,uVar3);
  if (0xd2 < param_1) {
    (*DAT_1011c74c0)(uVar1,0,"fragData");
  }
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_5 + 8);
    do {
      (*DAT_1011c56f8)(uVar1,*(undefined4 *)(puVar5 + -1),*puVar5);
      puVar5 = puVar5 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  (*DAT_1011c6418)(uVar1);
  (*DAT_1011c6110)(uVar1,0x8b82,&local_5c);
  (*DAT_1011c5b78)(uVar2);
  (*DAT_1011c5b78)(uVar3);
  uVar2 = 0;
  if (local_5c != 0) {
    uVar2 = uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

