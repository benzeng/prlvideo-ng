
undefined4 _xmlTextReaderMoveToElement(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_14 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = 0;
      local_14 = 1;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

