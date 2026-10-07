
uint FUN_1007d74c0(int *param_1,void *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  
  lVar4 = *(long *)(param_1 + 2);
  do {
    uVar3 = (uint)lVar4;
    if (param_1[6] - (uVar3 - *param_1 & param_1[5]) < param_3) {
      return 0;
    }
    uVar5 = lVar4 + 0x100000000U & 0xffffffff00000000;
    LOCK();
    lVar1 = *(long *)(param_1 + 2);
    if (lVar4 == lVar1) {
      *(ulong *)(param_1 + 2) = (uVar3 + param_3) + uVar5;
      lVar1 = lVar4;
    }
    UNLOCK();
    bVar9 = lVar1 != lVar4;
    lVar4 = lVar1;
  } while (bVar9);
  uVar8 = param_1[4] & uVar3;
  uVar2 = 0;
  if (-1 < (int)uVar8) {
    uVar2 = param_3;
    if ((uint)param_1[6] < uVar8 + param_3) {
      uVar2 = param_1[6] - uVar8;
      _memcpy(param_1 + 8,(void *)((long)param_2 + (ulong)uVar2),(ulong)(param_3 - uVar2));
    }
    _memcpy((void *)((long)param_1 + (long)(int)uVar8 + 0x20),param_2,(ulong)uVar2);
    uVar7 = (ulong)(uVar3 + param_3);
    do {
      uVar3 = (int)(uVar5 >> 0x20) - 1;
      if (uVar3 == 0) {
        param_1[1] = (int)uVar7;
      }
      uVar6 = uVar5 & 0xffffffff00000000 | uVar7 & 0xffffffff;
      LOCK();
      uVar5 = *(ulong *)(param_1 + 2);
      if (uVar6 == uVar5) {
        *(ulong *)(param_1 + 2) = (ulong)uVar3 << 0x20 | uVar7 & 0xffffffff;
        uVar5 = uVar6;
      }
      UNLOCK();
      uVar7 = uVar5;
      uVar2 = param_3;
    } while (uVar5 != uVar6);
  }
  return uVar2;
}

