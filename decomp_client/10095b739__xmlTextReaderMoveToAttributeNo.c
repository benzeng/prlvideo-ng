
undefined4 _xmlTextReaderMoveToAttributeNo(long param_1,int param_2)

{
  undefined4 local_38;
  int local_1c;
  long local_18;
  undefined8 *local_10;
  
  if (param_1 == 0) {
    local_38 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_38 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60);
    local_1c = 0;
    for (; (local_1c < param_2 && (local_10 != (undefined8 *)0x0));
        local_10 = (undefined8 *)*local_10) {
      local_1c = local_1c + 1;
    }
    if (local_10 == (undefined8 *)0x0) {
      local_18 = *(long *)(*(long *)(param_1 + 0x70) + 0x58);
      if (local_18 == 0) {
        local_38 = 0;
      }
      else {
        for (; local_1c < param_2; local_1c = local_1c + 1) {
          local_18 = *(long *)(local_18 + 0x30);
          if (local_18 == 0) {
            return 0;
          }
        }
        *(long *)(param_1 + 0x78) = local_18;
        local_38 = 1;
      }
    }
    else {
      *(undefined8 **)(param_1 + 0x78) = local_10;
      local_38 = 1;
    }
  }
  else {
    local_38 = 0xffffffff;
  }
  return local_38;
}

