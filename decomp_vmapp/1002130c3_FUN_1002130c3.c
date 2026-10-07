
undefined8 FUN_1002130c3(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x10) + 0x20) == 0)) {
    local_38 = 0;
  }
  else {
    local_38 = (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
                         (*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  }
  return local_38;
}

