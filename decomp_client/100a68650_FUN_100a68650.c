
long FUN_100a68650(long param_1,void *param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  sVar2 = *(size_t *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  sVar1 = lVar6 + param_3;
  if ((long)sVar2 < (long)sVar1) {
    if (*(long *)(param_1 + 0x28) < (long)sVar1) {
      uVar5 = 0xffffffffffffffff;
      if (-2 < (long)sVar1) {
        uVar5 = sVar1;
      }
      pvVar4 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_1021e1620);
      if (pvVar4 == (void *)0x0) {
        if (sVar2 != sVar1) {
          FUN_100df99c0("","IOCommunication",0,"Can\'t allocate memory for buffer!");
          return -1;
        }
        lVar6 = *(long *)(param_1 + 0x20);
      }
      else {
        pvVar3 = *(void **)(param_1 + 0x10);
        if (sVar2 != 0) {
          _memcpy(pvVar4,pvVar3,sVar2);
        }
        if (pvVar3 != (void *)0x0) {
          operator_delete__(pvVar3);
        }
        *(void **)(param_1 + 0x10) = pvVar4;
        *(size_t *)(param_1 + 0x18) = sVar1;
        *(size_t *)(param_1 + 0x28) = sVar1;
        lVar6 = *(long *)(param_1 + 0x20);
      }
    }
    else {
      *(size_t *)(param_1 + 0x18) = sVar1;
    }
  }
  _memcpy((void *)(lVar6 + *(long *)(param_1 + 0x10)),param_2,(long)(int)param_3);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (long)(int)param_3;
  return param_3;
}

