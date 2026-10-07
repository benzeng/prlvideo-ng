
undefined8 FUN_1003468d0(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (*(uint *)(param_2 + 4) < 0x20) {
    return 9;
  }
  uVar2 = *(uint *)(param_2 + 8);
  lVar6 = 0;
  if (uVar2 != 0) {
    if (*(byte **)(param_1 + 0x2790) == (byte *)0x0) {
      return 7;
    }
    pbVar4 = *(byte **)(param_1 + 0x2790);
    pbVar8 = param_1 + 0x2790;
    do {
      while (pbVar7 = pbVar4, *(uint *)(pbVar7 + 0x20) < uVar2) {
        pbVar1 = pbVar7 + 8;
        pbVar7 = pbVar8;
        pbVar4 = *(byte **)pbVar1;
        if (*(byte **)pbVar1 == (byte *)0x0) goto LAB_100346940;
      }
      pbVar4 = *(byte **)pbVar7;
      pbVar8 = pbVar7;
    } while (*(byte **)pbVar7 != (byte *)0x0);
LAB_100346940:
    if (pbVar7 == param_1 + 0x2790) {
      return 7;
    }
    if (uVar2 < *(uint *)(pbVar7 + 0x20)) {
      return 7;
    }
    lVar6 = *(long *)(pbVar7 + 0x28);
  }
  if (*(long *)(param_1 + 0x18) != lVar6) {
    *(long *)(param_1 + 0x18) = lVar6;
    *param_1 = *param_1 | 1;
  }
  iVar5 = _memcmp(param_1 + 0x20,(undefined8 *)(param_2 + 0xc),0x10);
  if (iVar5 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *param_1 = *param_1 | 1;
  }
  if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x1c)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x1c);
    *param_1 = *param_1 | 1;
  }
  return 0;
}

