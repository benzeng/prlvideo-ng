
int FUN_1005a3970(undefined8 param_1)

{
  long *plVar1;
  int local_14;
  
  local_14 = -0x7ffffff7;
  plVar1 = (long *)FUN_10059ac80(param_1,8,&local_14);
  if (-1 < local_14) {
    local_14 = FUN_1005a2800(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return local_14;
}

