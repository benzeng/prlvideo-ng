
undefined8
FUN_10080fb30(long *param_1,undefined1 *param_2,long param_3,uint param_4,undefined1 *param_5,
             uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = 2;
  if (param_4 != 0) {
    uVar6 = 0;
    if (param_6 == 0) {
      do {
        uVar5 = (int)uVar6 + 1 + (uint)*(byte *)(param_3 + uVar6);
        uVar6 = (ulong)uVar5;
      } while (uVar5 < param_4);
    }
    else {
      do {
        bVar1 = *(byte *)(param_3 + uVar6);
        uVar5 = (int)uVar6 + 1;
        uVar8 = 0;
        do {
          bVar2 = param_5[uVar8];
          uVar7 = (int)uVar8 + 1;
          if (((uint)bVar1 == (uint)bVar2) &&
             (iVar3 = _memcmp((void *)((ulong)uVar5 + param_3),param_5 + uVar7,(ulong)bVar1),
             iVar3 == 0)) {
            uVar4 = 1;
            param_5 = (undefined1 *)(param_3 + uVar6);
            goto LAB_10080fc04;
          }
          uVar7 = uVar7 + bVar2;
          uVar8 = (ulong)uVar7;
        } while (uVar7 < param_6);
        uVar5 = uVar5 + bVar1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 < param_4);
      uVar4 = 2;
    }
  }
LAB_10080fc04:
  *param_1 = (long)(param_5 + 1);
  *param_2 = *param_5;
  return uVar4;
}

