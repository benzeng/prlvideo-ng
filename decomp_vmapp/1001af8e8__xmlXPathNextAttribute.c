
undefined8 _xmlXPathNextAttribute(long param_1,long param_2)

{
  undefined8 local_20;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = 0;
  }
  else if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
    local_20 = 0;
  }
  else if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) == 1) {
    if (param_2 == 0) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) == **(long **)(param_1 + 0x18)) {
        local_20 = 0;
      }
      else {
        local_20 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x58);
      }
    }
    else {
      local_20 = *(undefined8 *)(param_2 + 0x30);
    }
  }
  else {
    local_20 = 0;
  }
  return local_20;
}

