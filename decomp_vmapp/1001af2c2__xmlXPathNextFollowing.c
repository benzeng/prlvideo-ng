
undefined8 _xmlXPathNextFollowing(long param_1,long param_2)

{
  undefined8 local_20;
  long local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = 0;
  }
  else if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    local_18 = param_2;
    if (param_2 == 0) {
      local_18 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    }
    if (local_18 == 0) {
      local_20 = 0;
    }
    else if (*(long *)(local_18 + 0x30) == 0) {
      do {
        local_18 = *(long *)(local_18 + 0x28);
        if (local_18 == 0) {
          return 0;
        }
        if (**(long **)(param_1 + 0x18) == local_18) {
          return 0;
        }
        if (*(long *)(local_18 + 0x30) != 0) {
          return *(undefined8 *)(local_18 + 0x30);
        }
      } while (local_18 != 0);
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(local_18 + 0x30);
    }
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 0x18);
  }
  return local_20;
}

