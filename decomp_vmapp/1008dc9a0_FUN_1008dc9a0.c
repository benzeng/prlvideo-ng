
undefined8 FUN_1008dc9a0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100821ab0(*param_1);
  if (iVar1 == 0x16) {
    uVar2 = 0;
    if (param_1[1] != 0) {
      uVar2 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    FUN_100887ce0(0x2e,0x85,0x6c,"cms_sd.c",0x47);
    uVar2 = 0;
  }
  return uVar2;
}

