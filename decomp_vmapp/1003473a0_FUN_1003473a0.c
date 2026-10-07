
undefined8 FUN_1003473a0(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (*(uint *)(param_2 + 4) < 0xc) {
    return 9;
  }
  uVar2 = *(uint *)(param_2 + 8);
  lVar4 = 0;
  if (uVar2 != 0) {
    if (*(byte **)(param_1 + 0x27c0) == (byte *)0x0) {
      return 7;
    }
    pbVar3 = *(byte **)(param_1 + 0x27c0);
    pbVar6 = param_1 + 0x27c0;
    do {
      while (pbVar5 = pbVar3, *(uint *)(pbVar5 + 0x20) < uVar2) {
        pbVar1 = pbVar5 + 8;
        pbVar5 = pbVar6;
        pbVar3 = *(byte **)pbVar1;
        if (*(byte **)pbVar1 == (byte *)0x0) goto LAB_100347400;
      }
      pbVar3 = *(byte **)pbVar5;
      pbVar6 = pbVar5;
    } while (*(byte **)pbVar5 != (byte *)0x0);
LAB_100347400:
    if (pbVar5 == param_1 + 0x27c0) {
      return 7;
    }
    if (uVar2 < *(uint *)(pbVar5 + 0x20)) {
      return 7;
    }
    lVar4 = *(long *)(pbVar5 + 0x28);
  }
  if (*(long *)(param_1 + 0x48) != lVar4) {
    *(long *)(param_1 + 0x48) = lVar4;
    *param_1 = *param_1 | 4;
  }
  return 0;
}

