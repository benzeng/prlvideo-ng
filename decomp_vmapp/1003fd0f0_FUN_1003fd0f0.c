
void FUN_1003fd0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        if (*(long **)(param_1 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
        }
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
    }
    plVar1 = *(long **)(param_1 + 0x18);
    if (plVar1 != (long *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        if (*(long **)(param_1 + 0x18) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
  }
  return;
}

