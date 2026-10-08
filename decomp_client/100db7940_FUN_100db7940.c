
undefined8
FUN_100db7940(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,size_t param_5,
             int *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  void *pvVar8;
  size_t sVar9;
  
  if (param_3 == 1) {
    uVar2 = FUN_100db7610(param_1,*param_2,param_2[1],param_4);
    return uVar2;
  }
  pvVar3 = _valloc(param_5);
  if (pvVar3 == (void *)0x0) {
    piVar4 = ___error();
    *piVar4 = 0xc;
    uVar2 = 0xfffffffffffffffc;
  }
  else {
    if (param_6 != (int *)0x0) {
      *param_6 = *param_6 + 1;
    }
    if ((0 < (long)param_5) && (0 < param_3)) {
      puVar7 = (uint *)(param_2 + 1);
      lVar6 = 1;
      pvVar8 = pvVar3;
      sVar9 = param_5;
      do {
        uVar5 = (ulong)*puVar7;
        _memcpy(pvVar8,*(void **)(puVar7 + -2),uVar5);
        if (sVar9 - uVar5 == 0 || (long)sVar9 < (long)uVar5) break;
        pvVar8 = (void *)((long)pvVar8 + uVar5);
        puVar7 = puVar7 + 4;
        bVar1 = lVar6 < param_3;
        lVar6 = lVar6 + 1;
        sVar9 = sVar9 - uVar5;
      } while (bVar1);
    }
    uVar2 = FUN_100db7610((int)param_1,pvVar3,param_5,param_4);
    _free(pvVar3);
  }
  return uVar2;
}

