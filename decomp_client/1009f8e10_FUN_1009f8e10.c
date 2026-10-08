
void FUN_1009f8e10(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *local_28;
  
  local_28 = (long *)0x0;
  if (*(int *)(*(long *)(param_1 + 0x100) + 0xc) != *(int *)(*(long *)(param_1 + 0x100) + 8)) {
    plVar2 = (long *)(param_1 + 0x100);
    do {
      plVar1 = (long *)FUN_1009f8f40(plVar2);
      local_28 = plVar1;
      FUN_1009f90c0(plVar2,&local_28);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x88))(plVar1);
      }
    } while (*(int *)(*plVar2 + 0xc) != *(int *)(*plVar2 + 8));
  }
  return;
}

