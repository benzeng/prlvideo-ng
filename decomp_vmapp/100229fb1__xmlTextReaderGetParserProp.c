
undefined4 _xmlTextReaderGetParserProp(long param_1,uint param_2)

{
  long lVar1;
  undefined4 local_28;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    local_28 = 0xffffffff;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (param_2 == 2) {
      if ((*(uint *)(lVar1 + 0x1b0) >> 2 & 1) == 0) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
    }
    else {
      if (param_2 < 3) {
        if (param_2 == 1) {
          if ((*(int *)(lVar1 + 0x1b0) == 0) && (*(int *)(lVar1 + 0x9c) == 0)) {
            return 0;
          }
          return 1;
        }
      }
      else {
        if (param_2 == 3) {
          return *(undefined4 *)(param_1 + 0x10);
        }
        if (param_2 == 4) {
          return *(undefined4 *)(lVar1 + 0x1c);
        }
      }
      local_28 = 0xffffffff;
    }
  }
  return local_28;
}

