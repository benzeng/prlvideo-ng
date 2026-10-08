
undefined8 _xmlParseVersionInfo(long param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'v') &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'e')) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'r')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 's' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'i')))) &&
     ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'o' &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'n')))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 7;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 7;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '=') {
      FUN_100877520(param_1,0x4b,0);
      return 0;
    }
    _xmlNextChar(param_1);
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
      _xmlNextChar(param_1);
      local_10 = _xmlParseVersionNum(param_1);
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
        _xmlNextChar(param_1);
      }
      else {
        FUN_100877520(param_1,0x22,0);
      }
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
      _xmlNextChar(param_1);
      local_10 = _xmlParseVersionNum(param_1);
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
        _xmlNextChar(param_1);
      }
      else {
        FUN_100877520(param_1,0x22,0);
      }
    }
    else {
      FUN_100877520(param_1,0x21,0);
    }
  }
  return local_10;
}

