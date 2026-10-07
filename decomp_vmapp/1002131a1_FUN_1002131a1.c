
undefined8 FUN_1002131a1(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x10) + 0xc0) == 0)) {
    local_30 = 0;
  }
  else {
    local_30 = (**(code **)(*(long *)(param_1 + 0x10) + 0xc0))
                         (*(undefined8 *)(param_1 + 0x20),param_2);
  }
  return local_30;
}

