
void FUN_100982b5c(undefined8 param_1,long param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  if (param_2 != 0) {
    for (; local_18 != 0; local_18 = *(long *)(local_18 + 0x30)) {
      FUN_100982a7d(param_1,local_18);
    }
  }
  return;
}

