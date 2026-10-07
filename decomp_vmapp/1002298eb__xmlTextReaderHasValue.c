
undefined4 _xmlTextReaderHasValue(long param_1)

{
  undefined4 local_28;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_28 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_28 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_10 = *(long *)(param_1 + 0x70);
    }
    else {
      local_10 = *(long *)(param_1 + 0x78);
    }
    if ((*(uint *)(local_10 + 8) < 0x13) &&
       ((1L << ((byte)*(uint *)(local_10 + 8) & 0x3f) & 0x4019cU) != 0)) {
      local_28 = 1;
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}

