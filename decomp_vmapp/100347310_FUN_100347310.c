
undefined8 FUN_100347310(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (*(uint *)(param_2 + 4) < 0x10) {
    return 9;
  }
  uVar2 = *(uint *)(param_2 + 8);
  lVar4 = 0;
  if (uVar2 != 0) {
    if (*(byte **)(param_1 + 0x27a8) == (byte *)0x0) {
      return 7;
    }
    pbVar3 = *(byte **)(param_1 + 0x27a8);
    pbVar6 = param_1 + 0x27a8;
    do {
      while (pbVar5 = pbVar3, *(uint *)(pbVar5 + 0x20) < uVar2) {
        pbVar1 = pbVar5 + 8;
        pbVar5 = pbVar6;
        pbVar3 = *(byte **)pbVar1;
        if (*(byte **)pbVar1 == (byte *)0x0) goto LAB_100347370;
      }
      pbVar3 = *(byte **)pbVar5;
      pbVar6 = pbVar5;
    } while (*(byte **)pbVar5 != (byte *)0x0);
LAB_100347370:
    if (pbVar5 == param_1 + 0x27a8) {
      return 7;
    }
    if (uVar2 < *(uint *)(pbVar5 + 0x20)) {
      return 7;
    }
    lVar4 = *(long *)(pbVar5 + 0x28);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0xc)) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0xc);
    *param_1 = *param_1 | 2;
  }
  if (*(long *)(param_1 + 0x38) != lVar4) {
    *(long *)(param_1 + 0x38) = lVar4;
    *param_1 = *param_1 | 2;
  }
  return 0;
}

