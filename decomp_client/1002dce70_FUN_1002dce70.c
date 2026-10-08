
void FUN_1002dce70(CAbstractTask *param_1)

{
  void *pvVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220aa20;
  pvVar1 = *(void **)(param_1 + 0x18);
  if ((*(long *)((long)pvVar1 + 0x70) == 0) || (*(int *)(*(long *)((long)pvVar1 + 0x70) + 4) == 0))
  {
LAB_1002dceb4:
    if (pvVar1 == (void *)0x0) goto LAB_1002dcec9;
  }
  else if (*(long **)((long)pvVar1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)((long)pvVar1 + 0x78) + 0x20))();
    pvVar1 = *(void **)(param_1 + 0x18);
    goto LAB_1002dceb4;
  }
  FUN_1002e5470(pvVar1);
  operator_delete(pvVar1);
LAB_1002dcec9:
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

