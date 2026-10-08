
uint _xmlTextReaderIsEmptyElement(long param_1)

{
  undefined4 local_14;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    if (*(long *)(param_1 + 0x78) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x70) + 0x18) == 0) {
        if (*(int *)(param_1 + 0x18) == 2) {
          local_14 = 0;
        }
        else if (*(long *)(param_1 + 8) == 0) {
          if (*(int *)(param_1 + 0x128) < 1) {
            local_14 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x72) & 1;
          }
          else {
            local_14 = 1;
          }
        }
        else {
          local_14 = 1;
        }
      }
      else {
        local_14 = 0;
      }
    }
    else {
      local_14 = 0;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

