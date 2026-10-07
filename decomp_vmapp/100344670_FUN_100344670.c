
void FUN_100344670(long param_1,uint param_2,void *param_3,int param_4)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = (ulong)param_2 * 0x10;
  pvVar2 = *(void **)(param_1 + 0x2708 + lVar3);
  if ((pvVar2 != param_3) || (*(int *)(param_1 + 10000 + lVar3) != param_4)) {
    if (pvVar2 != (void *)0x0) {
      piVar1 = (int *)((long)pvVar2 + 0x80);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_10032d8f0(pvVar2);
        operator_delete(pvVar2);
      }
    }
    *(void **)(param_1 + 0x2708 + lVar3) = param_3;
    if (param_3 != (void *)0x0) {
      *(int *)((long)param_3 + 0x80) = *(int *)((long)param_3 + 0x80) + 1;
    }
    *(int *)(param_1 + 10000 + lVar3) = param_4;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1 << ((byte)param_2 & 0x1f);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
  }
  return;
}

