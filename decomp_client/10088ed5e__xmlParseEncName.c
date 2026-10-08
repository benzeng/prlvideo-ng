
byte * _xmlParseEncName(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *local_28;
  int local_1c;
  int local_18;
  byte local_11;
  
  local_28 = (byte *)0x0;
  local_18 = 10;
  bVar1 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  if (((bVar1 < 0x61) || (0x7a < bVar1)) && ((bVar1 < 0x41 || (0x5a < bVar1)))) {
    FUN_100877520(param_1,0x4f,0);
  }
  else {
    local_28 = (byte *)(*(code *)_xmlMallocAtomic)(10);
    if (local_28 == (byte *)0x0) {
      _xmlErrMemory(param_1,0);
      return (byte *)0x0;
    }
    *local_28 = bVar1;
    local_1c = 1;
    _xmlNextChar(param_1);
    local_11 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
    while (((0x60 < local_11 && (local_11 < 0x7b)) ||
           (((0x40 < local_11 && (local_11 < 0x5b)) ||
            ((((0x2f < local_11 && (local_11 < 0x3a)) || (local_11 == 0x2e)) ||
             ((local_11 == 0x5f || (local_11 == 0x2d))))))))) {
      pbVar2 = local_28;
      if (local_18 <= local_1c + 1) {
        local_18 = local_18 << 1;
        pbVar2 = (byte *)(*(code *)_xmlRealloc)(local_28,(long)local_18);
        if (pbVar2 == (byte *)0x0) {
          _xmlErrMemory(param_1,0);
          (*(code *)_xmlFree)(local_28);
          return (byte *)0x0;
        }
      }
      local_28 = pbVar2;
      local_28[local_1c] = local_11;
      local_1c = local_1c + 1;
      _xmlNextChar(param_1);
      local_11 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      if (local_11 == 0) {
        if (((*(int *)(param_1 + 0x1c4) == 0) &&
            (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
                   *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
           (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 500)) {
          FUN_100879c6f(param_1);
        }
        if ((*(int *)(param_1 + 0x1c4) == 0) &&
           (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
          FUN_100879cbc(param_1);
        }
        local_11 = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      }
    }
    local_28[local_1c] = 0;
  }
  return local_28;
}

