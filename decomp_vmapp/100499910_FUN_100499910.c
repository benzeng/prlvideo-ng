
void FUN_100499910(long param_1,void *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  
  if (0 < param_4) {
    uVar2 = (ulong)(param_5 * param_3 + 0x1fU >> 3 & 0x1ffffffc);
    lVar1 = (long)param_4 + 1;
    pvVar3 = (void *)(param_1 + ((long)param_4 + -1) * uVar2);
    do {
      _memcpy(pvVar3,param_2,uVar2);
      param_2 = (void *)((long)param_2 + uVar2);
      lVar1 = lVar1 + -1;
      pvVar3 = (void *)((long)pvVar3 - uVar2);
    } while (1 < lVar1);
  }
  return;
}

