
long _xmlParsePubidLiteral(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long local_48;
  long local_30;
  int local_24;
  int local_20;
  byte local_1a;
  byte local_19;
  int local_18;
  
  local_24 = 0;
  local_20 = 100;
  local_18 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  if (((*(int *)(param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
             *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      500)) {
    FUN_100146347(param_1);
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    _xmlNextChar(param_1);
    local_19 = 0x22;
  }
  else {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\'') {
      FUN_100143bf8(param_1,0x2b,0);
      return 0;
    }
    _xmlNextChar(param_1);
    local_19 = 0x27;
  }
  local_30 = (*(code *)_xmlMallocAtomic)(100);
  if (local_30 == 0) {
    _xmlErrMemory(param_1,0);
    local_48 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = 0x10;
    local_1a = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
    while (((&_xmlIsPubidChar_tab)[(int)(uint)local_1a] != '\0' && (local_1a != local_19))) {
      lVar2 = local_30;
      if (local_20 <= local_24 + 1) {
        local_20 = local_20 << 1;
        lVar2 = (*(code *)_xmlRealloc)(local_30,(long)local_20);
        if (lVar2 == 0) {
          _xmlErrMemory(param_1,0);
          (*(code *)_xmlFree)(local_30);
          return 0;
        }
      }
      local_30 = lVar2;
      *(byte *)(local_24 + local_30) = local_1a;
      local_24 = local_24 + 1;
      local_18 = local_18 + 1;
      if (0x32 < local_18) {
        if ((*(int *)(param_1 + 0x1c4) == 0) &&
           (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        local_18 = 0;
      }
      _xmlNextChar(param_1);
      local_1a = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      if (local_1a == 0) {
        if ((*(int *)(param_1 + 0x1c4) == 0) &&
           (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        if (((*(int *)(param_1 + 0x1c4) == 0) &&
            (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
                   *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
           (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 500)) {
          FUN_100146347(param_1);
        }
        local_1a = **(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      }
    }
    *(undefined1 *)(local_24 + local_30) = 0;
    if (local_1a == local_19) {
      _xmlNextChar(param_1);
    }
    else {
      FUN_100143bf8(param_1,0x2c,0);
    }
    *(undefined4 *)(param_1 + 0x110) = uVar1;
    local_48 = local_30;
  }
  return local_48;
}

