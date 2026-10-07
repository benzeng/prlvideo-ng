
void FUN_1005ab7f0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((void *)*param_2 != (void *)0x0) {
    operator_delete__((void *)*param_2);
    *param_2 = 0;
    if ((void *)param_2[1] != (void *)0x0) {
      operator_delete__((void *)param_2[1]);
      param_2[1] = 0;
    }
    lVar1 = param_2[5];
    plVar2 = (long *)param_2[6];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    param_2[5] = param_2 + 5;
    param_2[6] = param_2 + 5;
    *(int *)(param_1 + 6) = (int)param_1[6] + -1;
    if (*(long *)(*param_1 + 0x1390) != 0) {
      plVar2 = (long *)(*(long *)(*param_1 + 0x1390) + 0xf0);
      *plVar2 = *plVar2 + -1;
    }
  }
  return;
}

