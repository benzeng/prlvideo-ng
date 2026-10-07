
void FUN_1002c10f0(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x310);
  if (plVar2 != (long *)0x0) {
    do {
      iVar1 = 1;
      if (*(int *)((long)plVar2 + 0xc) != 0) {
        FUN_1008e3970("","USB",0,"AIO Wait/Submit recursion detected!");
        iVar1 = *(int *)((long)plVar2 + 0xc) + 1;
      }
      *(int *)((long)plVar2 + 0xc) = iVar1;
      iVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,0xffffffff);
      *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + -1;
      plVar2 = *(long **)(param_1 + 0x310);
    } while (iVar1 != 0);
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*(long **)(param_1 + 0x310) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x310) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  return;
}

