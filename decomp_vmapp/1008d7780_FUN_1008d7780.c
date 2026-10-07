
undefined8 FUN_1008d7780(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100821ab0(*param_1);
  uVar2 = 0;
  if (iVar1 == 0x98) {
    iVar1 = FUN_100821ab0(*(undefined8 *)param_1[1]);
    uVar2 = 0;
    if (iVar1 == 0x9e) {
      uVar2 = FUN_1008b1220(*(undefined8 *)(param_1[1] + 8),&DAT_100be1970);
    }
  }
  return uVar2;
}

