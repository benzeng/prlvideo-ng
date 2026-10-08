
undefined8 FUN_100958db7(long param_1)

{
  undefined8 local_18;
  long local_10;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_10 = param_1;
    if (*(long *)(param_1 + 0x30) == 0) {
      do {
        local_10 = *(long *)(local_10 + 0x28);
        if (local_10 == 0) {
          return 0;
        }
        if (*(long *)(local_10 + 0x30) != 0) {
          return *(undefined8 *)(local_10 + 0x30);
        }
      } while (local_10 != 0);
      local_18 = 0;
    }
    else {
      local_18 = *(undefined8 *)(param_1 + 0x30);
    }
  }
  return local_18;
}

