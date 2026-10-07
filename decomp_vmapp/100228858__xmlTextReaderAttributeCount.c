
int _xmlTextReaderAttributeCount(long param_1)

{
  undefined4 local_34;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_34 = -1;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_34 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_10 = *(long *)(param_1 + 0x70);
    }
    else {
      local_10 = *(long *)(param_1 + 0x78);
    }
    if (*(int *)(local_10 + 8) == 1) {
      if ((*(int *)(param_1 + 0x18) == 2) || (*(int *)(param_1 + 0x18) == 4)) {
        local_34 = 0;
      }
      else {
        local_24 = 0;
        for (local_20 = *(long *)(local_10 + 0x58); local_20 != 0;
            local_20 = *(long *)(local_20 + 0x30)) {
          local_24 = local_24 + 1;
        }
        for (local_18 = *(undefined8 **)(local_10 + 0x60); local_18 != (undefined8 *)0x0;
            local_18 = (undefined8 *)*local_18) {
          local_24 = local_24 + 1;
        }
        local_34 = local_24;
      }
    }
    else {
      local_34 = 0;
    }
  }
  return local_34;
}

