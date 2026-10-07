
void FUN_1003444c0(long param_1,void *param_2,int param_3,int param_4)

{
  int *piVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x650);
  if (((pvVar2 != param_2) || (*(int *)(param_1 + 0x658) != param_3)) ||
     (*(int *)(param_1 + 0x65c) != param_4)) {
    if (pvVar2 != (void *)0x0) {
      piVar1 = (int *)((long)pvVar2 + 0x80);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_10032d8f0(pvVar2);
        operator_delete(pvVar2);
      }
    }
    *(void **)(param_1 + 0x650) = param_2;
    if (param_2 != (void *)0x0) {
      *(int *)((long)param_2 + 0x80) = *(int *)((long)param_2 + 0x80) + 1;
    }
    *(int *)(param_1 + 0x658) = param_3;
    *(int *)(param_1 + 0x65c) = param_4;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
  }
  return;
}

