
void FUN_10019d3de(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 local_20;
  
  local_20 = param_3;
  if (param_3 != 0) {
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x30)) {
      FUN_10019d178(param_1,param_2,local_20,param_4);
    }
  }
  return;
}

