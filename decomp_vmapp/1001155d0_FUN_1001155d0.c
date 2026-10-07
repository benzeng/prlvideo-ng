
void FUN_1001155d0(long param_1)

{
  long *plVar1;
  
  FUN_100115760(param_1 + 0x298);
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x1a50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1a50) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_100544ef0(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

