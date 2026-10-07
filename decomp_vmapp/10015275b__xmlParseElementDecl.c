
undefined4 _xmlParseElementDecl(long *param_1)

{
  int iVar1;
  xmlElementContentPtr local_28;
  long local_20;
  undefined4 local_14;
  long local_10;
  
  local_14 = 0xffffffff;
  local_28 = (xmlElementContentPtr)0x0;
  if (((((**(char **)(param_1[7] + 0x20) == '<') &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'E')) &&
      (((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'L' &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'E')) &&
       ((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == 'M' &&
        ((*(char *)(*(long *)(param_1[7] + 0x20) + 6) == 'E' &&
         (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'N')))))))) &&
     (*(char *)(*(long *)(param_1[7] + 0x20) + 8) == 'T')) {
    local_10 = param_1[7];
    param_1[0x27] = param_1[0x27] + 9;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 9;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 9;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) == '\0') &&
       (iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar1 < 1)) {
      _xmlPopInput(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) != ' ') &&
       (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
        (**(char **)(param_1[7] + 0x20) != '\r')))) {
      FUN_100144217(param_1,0x41,"Space required after \'ELEMENT\'\n");
    }
    _xmlSkipBlankChars(param_1);
    local_20 = _xmlParseName(param_1);
    if (local_20 == 0) {
      FUN_100144217(param_1,0x44,"xmlParseElementDecl: no name for Element\n");
      return 0xffffffff;
    }
    while ((**(char **)(param_1[7] + 0x20) == '\0' && (1 < (int)param_1[8]))) {
      _xmlPopInput(param_1);
    }
    if (((**(char **)(param_1[7] + 0x20) != ' ') &&
        ((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))))) &&
       (**(char **)(param_1[7] + 0x20) != '\r')) {
      FUN_100144217(param_1,0x41,"Space required after the element name\n");
    }
    _xmlSkipBlankChars(param_1);
    if ((((**(char **)(param_1[7] + 0x20) == 'E') &&
         (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == 'M')) &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'P')) &&
       ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'T' &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'Y')))) {
      param_1[0x27] = param_1[0x27] + 5;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 5;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 5;
      if (**(char **)(param_1[7] + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if ((**(char **)(param_1[7] + 0x20) == '\0') &&
         (iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar1 < 1)) {
        _xmlPopInput(param_1);
      }
      local_14 = 1;
    }
    else if ((**(char **)(param_1[7] + 0x20) == 'A') &&
            ((*(char *)(*(long *)(param_1[7] + 0x20) + 1) == 'N' &&
             (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'Y')))) {
      param_1[0x27] = param_1[0x27] + 3;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 3;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 3;
      if (**(char **)(param_1[7] + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if ((**(char **)(param_1[7] + 0x20) == '\0') &&
         (iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar1 < 1)) {
        _xmlPopInput(param_1);
      }
      local_14 = 2;
    }
    else {
      if (**(char **)(param_1[7] + 0x20) != '(') {
        if (((**(char **)(param_1[7] + 0x20) == '%') && (*(int *)((long)param_1 + 0x94) == 0)) &&
           ((int)param_1[8] == 1)) {
          FUN_100144217(param_1,0x15,
                        "PEReference: forbidden within markup decl in internal subset\n");
        }
        else {
          FUN_100144217(param_1,0x36,"xmlParseElementDecl: \'EMPTY\', \'ANY\' or \'(\' expected\n");
        }
        return 0xffffffff;
      }
      local_14 = _xmlParseElementContentDecl(param_1,local_20,&local_28);
    }
    _xmlSkipBlankChars(param_1);
    while ((**(char **)(param_1[7] + 0x20) == '\0' && (1 < (int)param_1[8]))) {
      _xmlPopInput(param_1);
    }
    _xmlSkipBlankChars(param_1);
    if (**(char **)(param_1[7] + 0x20) == '>') {
      if (param_1[7] != local_10) {
        FUN_100144217(param_1,0x5a,
                      "Element declaration doesn\'t start and stop in the same entity\n");
      }
      _xmlNextChar(param_1);
      if (((*param_1 == 0) || (*(int *)((long)param_1 + 0x14c) != 0)) ||
         (*(long *)(*param_1 + 0x48) == 0)) {
        if (local_28 != (xmlElementContentPtr)0x0) {
          _xmlFreeDocElementContent((xmlDocPtr)param_1[2],local_28);
        }
      }
      else {
        if (local_28 != (xmlElementContentPtr)0x0) {
          local_28->parent = (_xmlElementContent *)0x0;
        }
        (**(code **)(*param_1 + 0x48))(param_1[1],local_20,local_14,local_28);
        if ((local_28 != (xmlElementContentPtr)0x0) &&
           (local_28->parent == (_xmlElementContent *)0x0)) {
          _xmlFreeDocElementContent((xmlDocPtr)param_1[2],local_28);
        }
      }
    }
    else {
      FUN_100143bf8(param_1,0x49,0);
      if (local_28 != (xmlElementContentPtr)0x0) {
        _xmlFreeDocElementContent((xmlDocPtr)param_1[2],local_28);
      }
    }
  }
  return local_14;
}

