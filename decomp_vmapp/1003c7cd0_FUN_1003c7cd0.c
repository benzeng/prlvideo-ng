
undefined8
FUN_1003c7cd0(long param_1,uint param_2,int *param_3,long param_4,uint param_5,int *param_6,
             int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  
  if (param_7 == 0) {
    return 0;
  }
  iVar1 = param_3[3];
  iVar2 = param_3[1];
  iVar3 = iVar1 - iVar2;
  uVar9 = (param_3[2] - *param_3) * param_7;
  uVar7 = (ulong)(*param_3 * param_7 + iVar2 * param_2);
  pvVar10 = (void *)(param_1 + uVar7);
  uVar4 = (ulong)(param_7 * *param_6 + param_6[1] * param_5);
  pvVar5 = (void *)(param_4 + uVar4);
  if (pvVar5 < pvVar10) {
    uVar11 = iVar1 - iVar2;
    if (uVar11 == 0) {
      return 1;
    }
    uVar4 = (ulong)uVar9;
    uVar8 = (ulong)param_5;
    uVar7 = (ulong)param_2;
    if ((uVar11 & 3) != 0) {
      iVar12 = -(uVar11 & 3);
      do {
        iVar3 = iVar3 + -1;
        _memcpy(pvVar5,pvVar10,uVar4);
        pvVar5 = (void *)((long)pvVar5 + uVar8);
        pvVar10 = (void *)((long)pvVar10 + uVar7);
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
    if (2 < (uint)((iVar1 + -1) - iVar2)) {
      do {
        _memcpy(pvVar5,pvVar10,uVar4);
        _memcpy((void *)((long)pvVar5 + uVar8),(void *)((long)pvVar10 + uVar7),uVar4);
        pvVar5 = (void *)((long)((long)pvVar5 + uVar8) + uVar8);
        pvVar10 = (void *)((long)((long)pvVar10 + uVar7) + uVar7);
        _memcpy(pvVar5,pvVar10,uVar4);
        pvVar5 = (void *)((long)pvVar5 + uVar8);
        pvVar10 = (void *)((long)pvVar10 + uVar7);
        _memcpy(pvVar5,pvVar10,uVar4);
        pvVar5 = (void *)((long)pvVar5 + uVar8);
        pvVar10 = (void *)((long)pvVar10 + uVar7);
        iVar3 = iVar3 + -4;
      } while (iVar3 != 0);
    }
  }
  else {
    uVar11 = iVar1 - iVar2;
    if (uVar11 == 0) {
      return 1;
    }
    param_4 = param_4 + uVar4 + iVar3 * param_5;
    param_1 = param_1 + uVar7 + iVar3 * param_2;
    uVar8 = (ulong)param_5;
    uVar7 = (ulong)param_2;
    uVar4 = (ulong)uVar9;
    if ((uVar11 & 3) != 0) {
      iVar3 = 0;
      lVar6 = param_1;
      lVar13 = param_4;
      do {
        param_1 = lVar6 - uVar7;
        param_4 = lVar13 - uVar8;
        _memmove((void *)(lVar13 - uVar8),(void *)(lVar6 - uVar7),uVar4);
        iVar3 = iVar3 + -1;
        lVar6 = param_1;
        lVar13 = param_4;
      } while (-(uVar11 & 3) != iVar3);
      iVar3 = uVar11 + iVar3;
    }
    if ((uint)((iVar1 + -1) - iVar2) < 3) {
      return 1;
    }
    do {
      _memmove((void *)(param_4 - uVar8),(void *)(param_1 - uVar7),uVar4);
      _memmove((void *)(param_4 + uVar8 * -2),(void *)(param_1 + uVar7 * -2),uVar4);
      _memmove((void *)(param_4 + uVar8 * -3),(void *)(param_1 + uVar7 * -3),uVar4);
      _memmove((void *)(param_4 + uVar8 * -4),(void *)(param_1 + uVar7 * -4),uVar4);
      iVar3 = iVar3 + -4;
      param_1 = param_1 + uVar7 * -4;
      param_4 = param_4 + uVar8 * -4;
    } while (iVar3 != 0);
  }
  return 1;
}

