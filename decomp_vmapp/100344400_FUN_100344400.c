
void FUN_100344400(long param_1,uint param_2,void *param_3,int param_4,int param_5)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = (ulong)param_2 * 0x10;
  pvVar2 = *(void **)(param_1 + 0x660 + lVar3);
  if (((pvVar2 != param_3) || (*(int *)(param_1 + 0x668 + lVar3) != param_4)) ||
     (*(int *)(param_1 + 0x66c + lVar3) != param_5)) {
    if (pvVar2 != (void *)0x0) {
      piVar1 = (int *)((long)pvVar2 + 0x80);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_10032d8f0(pvVar2);
        operator_delete(pvVar2);
      }
    }
    *(void **)(param_1 + 0x660 + lVar3) = param_3;
    if (param_3 != (void *)0x0) {
      *(int *)((long)param_3 + 0x80) = *(int *)((long)param_3 + 0x80) + 1;
    }
    *(int *)(param_1 + 0x668 + lVar3) = param_4;
    *(int *)(param_1 + 0x66c + lVar3) = param_5;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
  }
  return;
}

