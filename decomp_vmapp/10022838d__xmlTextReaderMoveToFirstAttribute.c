
undefined4 _xmlTextReaderMoveToFirstAttribute(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    if (*(long *)(*(long *)(param_1 + 0x70) + 0x60) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x70) + 0x58) == 0) {
        local_14 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x58);
        local_14 = 1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60);
      local_14 = 1;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

