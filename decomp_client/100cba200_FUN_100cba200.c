
undefined8 FUN_100cba200(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 == 0x17) {
    uVar2 = 0;
    if (param_1[1] != 0) {
      uVar2 = *(undefined8 *)(param_1[1] + 0x10);
    }
  }
  else {
    FUN_100c62ee0(0x2e,0x83,0x6b,"cms_env.c",0x4f);
    uVar2 = 0;
  }
  return uVar2;
}

