
void FUN_10032fa70(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_1002a6dc0();
  *param_1 = &PTR_FUN_100bbbaa0;
  param_1[2] = param_2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = param_1 + 5;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  iVar2 = FUN_1007da300("video.validate_gl",1);
  DAT_1011c812c = iVar2 != 0;
  iVar2 = FUN_1007da300("video.validate_dx",1);
  DAT_1011c812d = iVar2 != 0;
  lVar1 = param_1[2];
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(lVar1 + 0x840);
  FUN_1002adb30(lVar1,*(undefined8 *)(lVar1 + 0x868));
  FUN_10038ec20(param_1[2]);
  plVar3 = operator_new(0x18);
  plVar3[2] = 0;
  plVar3[1] = 0;
  *plVar3 = (long)(plVar3 + 1);
  param_1[7] = plVar3;
  FUN_1002a50a0(param_1[2],0x400,0x41f,param_1);
  uVar4 = FUN_10070e6f0("I@video.dx_reqs");
  param_1[3] = uVar4;
  return;
}

