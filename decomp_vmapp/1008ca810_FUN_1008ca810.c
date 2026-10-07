
undefined8 FUN_1008ca810(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = FUN_1008b7110();
  uVar4 = FUN_1008b6ee0(param_2);
  iVar2 = FUN_1008b6ba0(uVar3,uVar4);
  if (iVar2 != 0) {
    return 0x1d;
  }
  FUN_1008c9c90(param_1);
  FUN_1008c9c90(param_2);
  if ((*(long *)(param_2 + 0x70) != 0) && (uVar3 = FUN_1008ca8b0(param_1), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar5 = *(ulong *)(param_1 + 0x48) & 2;
  if ((*(byte *)(param_2 + 0x49) & 4) == 0) {
    if (uVar5 == 0) {
      return 0;
    }
    uVar3 = 0x20;
    bVar1 = *(byte *)(param_1 + 0x50) & 4;
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar3 = 0x27;
    bVar1 = *(byte *)(param_1 + 0x50) & 0x80;
  }
  if (bVar1 != 0) {
    return 0;
  }
  return uVar3;
}

