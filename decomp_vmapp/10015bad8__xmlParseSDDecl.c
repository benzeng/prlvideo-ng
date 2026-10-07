
undefined4 _xmlParseSDDecl(long param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  _xmlSkipBlankChars(param_1);
  if (((((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 's') &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 't')) &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'a')) &&
        ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'n' &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'd')))) &&
       ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'a' &&
        ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'l' &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'o')))))) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 8) == 'n')) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 9) == 'e')) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 10;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 10;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 10;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '=') {
      FUN_100143bf8(param_1,0x4b,0);
      return 0xffffffff;
    }
    _xmlNextChar(param_1);
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
      _xmlNextChar(param_1);
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'n') &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'o')) {
        local_c = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
           (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
          _xmlPopInput(param_1);
        }
      }
      else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'y') &&
              ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'e' &&
               (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 's')))) {
        local_c = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
           (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
          _xmlPopInput(param_1);
        }
      }
      else {
        FUN_100143bf8(param_1,0x4e,0);
      }
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
        _xmlNextChar(param_1);
      }
      else {
        FUN_100143bf8(param_1,0x22,0);
      }
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
      _xmlNextChar(param_1);
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'n') &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'o')) {
        local_c = 0;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
           (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
          _xmlPopInput(param_1);
        }
      }
      else if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'y') &&
              ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'e' &&
               (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 's')))) {
        local_c = 1;
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 3;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 3;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
           (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
          _xmlPopInput(param_1);
        }
      }
      else {
        FUN_100143bf8(param_1,0x4e,0);
      }
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
        _xmlNextChar(param_1);
      }
      else {
        FUN_100143bf8(param_1,0x22,0);
      }
    }
    else {
      FUN_100143bf8(param_1,0x21,0);
    }
  }
  return local_c;
}

