
void FUN_100528500(long *param_1,long param_2)

{
  long *plVar1;
  
  _free(*(void **)(param_2 + 0x38));
  *(undefined8 *)(param_2 + 0x38) = 0;
  _free(*(void **)(param_2 + 0x48));
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  if ((*(long *)(param_2 + 0x50) != 0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,*(long *)(param_2 + 0x50),0);
  }
  *(undefined8 *)(param_2 + 0x50) = 0;
  _free(*(void **)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  if ((*(long *)(param_2 + 0x88) != 0) && (param_1 = (long *)*param_1, param_1 != (long *)0x0)) {
    (**(code **)(*param_1 + 0x10))(param_1,*(long *)(param_2 + 0x88),0);
  }
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}

