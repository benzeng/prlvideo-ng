
undefined8 FUN_100cb91e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 == 0x16) {
    uVar2 = 0;
    if (param_1[1] != 0) {
      uVar2 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    FUN_100c62ee0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
    uVar2 = 0;
  }
  return uVar2;
}

