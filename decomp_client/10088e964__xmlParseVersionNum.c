
long _xmlParseVersionNum(long param_1)

{
  long local_28;
  int local_1c;
  int local_18;
  byte local_11;
  
  local_1c = 0;
  local_18 = 10;
  local_28 = (*(code *)_xmlMallocAtomic)(10);
  if (local_28 == 0) {
    _xmlErrMemory(param_1,0);
    return 0;
  }
  local_11 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  while (((((0x60 < local_11 && (local_11 < 0x7b)) || ((0x40 < local_11 && (local_11 < 0x5b)))) ||
          ((((0x2f < local_11 && (local_11 < 0x3a)) || (local_11 == 0x5f)) ||
           ((local_11 == 0x2e || (local_11 == 0x3a)))))) || (local_11 == 0x2d))) {
    if (local_18 <= local_1c + 1) {
      local_18 = local_18 << 1;
      local_28 = (*(code *)_xmlRealloc)(local_28,(long)local_18);
      if (local_28 == 0) {
        _xmlErrMemory(param_1,0);
        return 0;
      }
    }
    *(byte *)(local_1c + local_28) = local_11;
    local_1c = local_1c + 1;
    _xmlNextChar(param_1);
    local_11 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  *(undefined1 *)(local_1c + local_28) = 0;
  return local_28;
}

