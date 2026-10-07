
long FUN_1001d3bd6(long param_1,long param_2,long param_3)

{
  undefined8 local_38;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(long *)(param_1 + 0x60) == 0) {
    local_38 = 0;
  }
  else {
    if (param_2 != 0) {
      local_10 = FUN_1001d3a7f(*(undefined8 *)(param_1 + 0x60),param_2);
    }
    if (local_10 == 0) {
      if (param_3 != 0) {
        FUN_1001d3b6b(*(undefined8 *)(param_1 + 0x60),param_3);
      }
      local_38 = 0;
    }
    else {
      local_38 = local_10;
    }
  }
  return local_38;
}

