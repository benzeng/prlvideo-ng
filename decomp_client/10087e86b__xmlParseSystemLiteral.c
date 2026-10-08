
long _xmlParseSystemLiteral(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int local_34;
  long local_30;
  int local_28;
  int local_24;
  uint local_20;
  byte local_19;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_24 = 100;
  local_18 = *(undefined4 *)(param_1 + 0x110);
  local_14 = 0;
  if (((*(int *)(param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
             *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      500)) {
    FUN_100879c6f(param_1);
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    _xmlNextChar(param_1);
    local_19 = 0x22;
  }
  else {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\'') {
      FUN_100877520(param_1,0x2b,0);
      return 0;
    }
    _xmlNextChar(param_1);
    local_19 = 0x27;
  }
  local_30 = (*(code *)_xmlMallocAtomic)((long)local_24);
  if (local_30 == 0) {
    _xmlErrMemory(param_1,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 0xd;
  local_20 = _xmlCurrentChar(param_1,&local_34);
  while( true ) {
    if ((int)local_20 < 0x100) {
      if (((((int)local_20 < 9) || (10 < (int)local_20)) && (local_20 != 0xd)) &&
         ((int)local_20 < 0x20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else if (((((int)local_20 < 0x100) || (0xd7ff < (int)local_20)) &&
             (((int)local_20 < 0xe000 || (0xfffd < (int)local_20)))) &&
            (((int)local_20 < 0x10000 || (0x10ffff < (int)local_20)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (local_19 == local_20)) break;
    lVar2 = local_30;
    if (local_24 <= local_28 + 5) {
      local_24 = local_24 << 1;
      local_10 = (*(code *)_xmlRealloc)(local_30,(long)local_24);
      lVar2 = local_10;
      if (local_10 == 0) {
        (*(code *)_xmlFree)(local_30);
        _xmlErrMemory(param_1,0);
        *(undefined4 *)(param_1 + 0x110) = local_18;
        return 0;
      }
    }
    local_30 = lVar2;
    local_14 = local_14 + 1;
    if (0x32 < local_14) {
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      local_14 = 0;
    }
    if (local_34 == 1) {
      *(char *)(local_28 + local_30) = (char)local_20;
      local_28 = local_28 + 1;
    }
    else {
      iVar3 = _xmlCopyCharMultiByte(local_28 + local_30,local_20);
      local_28 = local_28 + iVar3;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
    }
    else {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
    }
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
         *(long *)(*(long *)(param_1 + 0x38) + 0x20) + (long)local_34;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    local_20 = _xmlCurrentChar(param_1,&local_34);
    if (local_20 == 0) {
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      if (((*(int *)(param_1 + 0x1c4) == 0) &&
          (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
                 *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 500)) {
        FUN_100879c6f(param_1);
      }
      local_20 = _xmlCurrentChar(param_1,&local_34);
    }
  }
  *(undefined1 *)(local_28 + local_30) = 0;
  *(undefined4 *)(param_1 + 0x110) = local_18;
  if ((int)local_20 < 0x100) {
    if (((((int)local_20 < 9) || (10 < (int)local_20)) && (local_20 != 0xd)) &&
       ((int)local_20 < 0x20)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else if (((((int)local_20 < 0x100) || (0xd7ff < (int)local_20)) &&
           (((int)local_20 < 0xe000 || (0xfffd < (int)local_20)))) &&
          (((int)local_20 < 0x10000 || (0x10ffff < (int)local_20)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_100877520(param_1,0x2c,0);
  }
  else {
    _xmlNextChar(param_1);
  }
  return local_30;
}

