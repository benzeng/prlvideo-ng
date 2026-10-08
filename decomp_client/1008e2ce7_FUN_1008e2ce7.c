
undefined4 FUN_1008e2ce7(long param_1,long param_2)

{
  undefined4 local_1c;
  long local_18;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_1c = 0;
  }
  else if (*(long *)(param_1 + 0x40) == *(long *)(param_2 + 0x40)) {
    if (*(long *)(param_2 + 0x40) == param_1) {
      local_1c = 1;
    }
    else {
      local_18 = param_2;
      if (*(long *)(param_1 + 0x40) == param_2) {
        local_1c = 0;
      }
      else {
        for (; *(long *)(local_18 + 0x28) != 0; local_18 = *(long *)(local_18 + 0x28)) {
          if (*(long *)(local_18 + 0x28) == param_1) {
            return 1;
          }
        }
        local_1c = 0;
      }
    }
  }
  else {
    local_1c = 0;
  }
  return local_1c;
}

