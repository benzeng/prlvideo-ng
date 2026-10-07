
undefined4 FUN_1002f4fe0(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 local_1c;
  
  plVar1 = *(long **)(param_1 + 0x28);
  local_1c = 0;
  if (plVar1 != (long *)0x0) {
    local_1c = 0;
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,&local_1c);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x20) = iVar2;
      local_1c = 0;
    }
  }
  return local_1c;
}

