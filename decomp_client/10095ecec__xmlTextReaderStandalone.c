
undefined4 _xmlTextReaderStandalone(long param_1)

{
  undefined4 local_24;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        local_10 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      }
    }
    else {
      local_10 = *(long *)(param_1 + 8);
    }
    if (local_10 == 0) {
      local_24 = 0xffffffff;
    }
    else {
      local_24 = *(undefined4 *)(local_10 + 0x4c);
    }
  }
  return local_24;
}

