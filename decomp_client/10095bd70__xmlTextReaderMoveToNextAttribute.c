
undefined4 _xmlTextReaderMoveToNextAttribute(long param_1)

{
  undefined4 local_24;
  
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_24 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_24 = _xmlTextReaderMoveToFirstAttribute(param_1);
    }
    else if (*(int *)(*(long *)(param_1 + 0x78) + 8) == 0x12) {
      if (**(long **)(param_1 + 0x78) == 0) {
        if (*(long *)(*(long *)(param_1 + 0x70) + 0x58) == 0) {
          local_24 = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x58);
          local_24 = 1;
        }
      }
      else {
        *(long *)(param_1 + 0x78) = **(long **)(param_1 + 0x78);
        local_24 = 1;
      }
    }
    else if ((*(int *)(*(long *)(param_1 + 0x78) + 8) == 2) &&
            (*(long *)(*(long *)(param_1 + 0x78) + 0x30) != 0)) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x30);
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
  }
  else {
    local_24 = 0;
  }
  return local_24;
}

