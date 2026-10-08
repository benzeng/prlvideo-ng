
undefined8 FUN_10024b4d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0x3f0) {
    if (iVar1 == 0x3ee) {
      return 0x3000000b;
    }
    uVar2 = 0x3000000c;
    if (iVar1 != 0x3ef) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0x3f0) {
      return 0;
    }
    uVar2 = 0x30000006;
  }
  return uVar2;
}

