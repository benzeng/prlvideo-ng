
undefined8 FUN_1002a54f0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if (param_2 < 0x10000) {
    iVar6 = 0;
    uVar3 = *(uint *)(param_1 + 0x18);
    while (uVar2 = uVar3, uVar2 != 0) {
      uVar3 = uVar2 >> 1;
      lVar5 = (ulong)(uVar3 + iVar6) * 0x10;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + lVar5);
      if (param_2 > uVar1 || uVar1 == param_2) {
        if (param_2 <= uVar1) {
          return *(undefined8 *)(*(long *)(param_1 + 0x20) + 8 + lVar5);
        }
        iVar6 = uVar3 + iVar6 + 1;
        uVar3 = (uVar2 - 1) - uVar3;
      }
    }
    uVar4 = 0;
    if (iVar6 != 0) {
      lVar5 = (ulong)(iVar6 - 1) * 0x10;
      uVar4 = 0;
      if (param_2 <= *(uint *)(*(long *)(param_1 + 0x20) + 4 + lVar5)) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8 + lVar5);
      }
    }
  }
  else {
    uVar4 = 0;
    if (param_2 - 0x10000 < *(uint *)(param_1 + 0x2c)) {
      return *(undefined8 *)(*(long *)(param_1 + 0x30) + 8 + (ulong)(param_2 - 0x10000) * 0x10);
    }
  }
  return uVar4;
}

