
undefined4 _xmlParseDefaultDecl(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 local_2c;
  undefined4 local_14;
  
  *param_2 = 0;
  if ((((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '#') &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'R')) &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'E')) &&
       ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'Q' &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'U')))) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'I')) &&
     (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'R' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'E')) &&
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 8) == 'D')))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 9;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 9;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 9;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_2c = 2;
  }
  else if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '#') &&
             (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'I')) &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'M')) &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'P' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'L')))) &&
          ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'I' &&
           ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'E' &&
            (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'D')))))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 8;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 8;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 8;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_2c = 3;
  }
  else {
    local_14 = 1;
    if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '#') &&
        (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'F' &&
          (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'I')) &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'X')))) &&
       ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'E' &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'D')))) {
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 6;
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6;
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 6;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
        iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
        if (iVar1 < 1) {
          _xmlPopInput(param_1);
        }
      }
      local_14 = 4;
      if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
          ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
           (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
         (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
        FUN_100144217(param_1,0x41,"Space required after \'#FIXED\'\n");
      }
      _xmlSkipBlankChars(param_1);
    }
    lVar2 = _xmlParseAttValue(param_1);
    *(undefined4 *)(param_1 + 0x110) = 3;
    if (lVar2 == 0) {
      FUN_100144217(param_1,*(undefined4 *)(param_1 + 0x88),
                    "Attribute default value declaration error\n");
    }
    else {
      *param_2 = lVar2;
    }
    local_2c = local_14;
  }
  return local_2c;
}

