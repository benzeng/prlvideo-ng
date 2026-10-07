
void FUN_100344580(long param_1,int param_2,int param_3,void *param_4,int param_5,int param_6)

{
  int *piVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = (ulong)(uint)(param_2 * 0xf + param_3) * 0x10;
  pvVar2 = *(void **)(param_1 + 0x868 + lVar3);
  if (((pvVar2 != param_4) || (*(int *)(param_1 + 0x870 + lVar3) != param_5)) ||
     (*(int *)(param_1 + 0x874 + lVar3) != param_6)) {
    if (pvVar2 != (void *)0x0) {
      piVar1 = (int *)((long)pvVar2 + 0x80);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_10032d8f0(pvVar2);
        operator_delete(pvVar2);
      }
    }
    *(void **)(param_1 + 0x868 + lVar3) = param_4;
    if (param_4 != (void *)0x0) {
      *(int *)((long)param_4 + 0x80) = *(int *)((long)param_4 + 0x80) + 1;
    }
    *(int *)(param_1 + 0x870 + lVar3) = param_5;
    *(int *)(param_1 + 0x874 + lVar3) = param_6;
  }
  return;
}

