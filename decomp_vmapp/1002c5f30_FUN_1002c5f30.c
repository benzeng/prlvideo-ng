
void FUN_1002c5f30(long param_1)

{
  long *plVar1;
  int iVar2;
  
  plVar1 = *(long **)(param_1 + 0x310);
  if (plVar1 != (long *)0x0) {
    iVar2 = 1;
    if (*(int *)((long)plVar1 + 0xc) != 0) {
      FUN_1008e3970("","USB",0,"AIO Wait/Submit recursion detected!");
      iVar2 = *(int *)((long)plVar1 + 0xc) + 1;
    }
    *(int *)((long)plVar1 + 0xc) = iVar2;
    (**(code **)(*plVar1 + 0x38))(plVar1);
    *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
  }
  return;
}

