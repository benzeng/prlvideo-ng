
uint _xmlParseCharRef(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint local_14;
  int local_10;
  uint local_c;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '&') &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '#')) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'x')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar3 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar3 < 1)) {
      _xmlPopInput(param_1);
    }
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
    while (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ';') {
      bVar1 = 0x14 < local_10;
      local_10 = local_10 + 1;
      if (((bVar1) && (local_10 = 0, *(int *)(param_1 + 0x1c4) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      if ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x30) ||
         (0x39 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) {
        if ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x61) ||
           ((0x66 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) || (0x13 < local_10)))) {
          if ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x41) ||
             ((0x46 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20) || (0x13 < local_10)))) {
            FUN_100877520(param_1,6,0);
            local_14 = 0;
            break;
          }
          local_14 = (local_14 * 0x10 + (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20)) - 0x37;
        }
        else {
          local_14 = (local_14 * 0x10 + (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20)) - 0x57;
        }
      }
      else {
        local_14 = (local_14 * 0x10 + (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20)) - 0x30;
      }
      if (0x10ffff < local_14) {
        local_c = local_14;
      }
      _xmlNextChar(param_1);
      local_10 = local_10 + 1;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ';') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
    }
  }
  else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '&') &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '#')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar3 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar3 < 1)) {
      _xmlPopInput(param_1);
    }
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
    while (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ';') {
      bVar1 = 0x14 < local_10;
      local_10 = local_10 + 1;
      if (((bVar1) && (local_10 = 0, *(int *)(param_1 + 0x1c4) == 0)) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      if ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 0x30) ||
         (0x39 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) {
        FUN_100877520(param_1,7,0);
        local_14 = 0;
        break;
      }
      local_14 = (local_14 * 10 + (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20)) - 0x30;
      uVar2 = local_14;
      if (local_14 < 0x110000) {
        uVar2 = local_c;
      }
      local_c = uVar2;
      _xmlNextChar(param_1);
      local_10 = local_10 + 1;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ';') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
    }
  }
  else {
    FUN_100877520(param_1,8,0);
  }
  if (local_14 < 0x100) {
    if ((((local_14 < 9) || (10 < local_14)) && (local_14 != 0xd)) && (local_14 < 0x20)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else if ((((local_14 < 0x100) || (0xd7ff < local_14)) &&
           ((local_14 < 0xe000 || (0xfffd < local_14)))) &&
          ((local_14 < 0x10000 || (0x10ffff < local_14)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (local_c == 0)) {
    return local_14;
  }
  FUN_100877ed1(param_1,9,"xmlParseCharRef: invalid xmlChar value %d\n",local_14);
  return 0;
}

