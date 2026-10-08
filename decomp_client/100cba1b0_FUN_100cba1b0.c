
undefined8 FUN_100cba1b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 == 0x17) {
    uVar2 = param_1[1];
  }
  else {
    FUN_100c62ee0(0x2e,0x83,0x6b,"cms_env.c",0x4f);
    uVar2 = 0;
  }
  return uVar2;
}

