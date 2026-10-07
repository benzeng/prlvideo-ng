
undefined4 FUN_100212f9b(long param_1)

{
  undefined4 local_24;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x10) + 0x10) == 0)) {
    local_24 = 0;
  }
  else {
    local_24 = (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(undefined8 *)(param_1 + 0x20));
  }
  return local_24;
}

