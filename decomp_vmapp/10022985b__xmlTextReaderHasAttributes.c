
undefined4 _xmlTextReaderHasAttributes(long param_1)

{
  undefined4 local_24;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_24 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_10 = *(long *)(param_1 + 0x70);
    }
    else {
      local_10 = *(long *)(param_1 + 0x78);
    }
    if ((*(int *)(local_10 + 8) == 1) &&
       ((*(long *)(local_10 + 0x58) != 0 || (*(long *)(local_10 + 0x60) != 0)))) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
  }
  return local_24;
}

