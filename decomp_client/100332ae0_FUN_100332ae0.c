
void FUN_100332ae0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_10;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
    local_10 = param_2;
    (**(code **)(*plVar1 + 0x148))(plVar1,&local_10,&stack0x00000008);
  }
  return;
}

