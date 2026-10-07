
void _xmlParseXMLDecl(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  xmlChar *str1;
  
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 5;
  *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5;
  *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 5;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
    _xmlParserHandlePEReference(param_1);
  }
  if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
     (iVar2 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar2 < 1)) {
    _xmlPopInput(param_1);
  }
  if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
     (((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
       (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
      (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')))) {
    FUN_100144217(param_1,0x41,"Blank needed after \'<?xml\'\n");
  }
  _xmlSkipBlankChars(param_1);
  str1 = (xmlChar *)_xmlParseVersionInfo(param_1);
  if (str1 == (xmlChar *)0x0) {
    FUN_100143bf8(param_1,0x60,0);
  }
  else {
    iVar2 = _xmlStrEqual(str1,(xmlChar *)"1.0");
    if (iVar2 == 0) {
      FUN_100144304(param_1,0x61,"Unsupported version \'%s\'\n",str1,0);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
    }
    *(xmlChar **)(param_1 + 0x20) = str1;
  }
  if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
      ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
       (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
     (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '>')) {
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\0') {
        return;
      }
      iVar2 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (0 < iVar2) {
        return;
      }
      _xmlPopInput(param_1);
      return;
    }
    FUN_100144217(param_1,0x41,"Blank needed here\n");
  }
  _xmlParseEncodingDecl(param_1);
  if (*(int *)(param_1 + 0x88) != 0x20) {
    if ((((*(long *)(*(long *)(param_1 + 0x38) + 0x50) != 0) &&
         (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ')) &&
        ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
         (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
       (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '>')) {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\0') {
          return;
        }
        iVar2 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
        if (0 < iVar2) {
          return;
        }
        _xmlPopInput(param_1);
        return;
      }
      FUN_100144217(param_1,0x41,"Blank needed here\n");
    }
    _xmlSkipBlankChars(param_1);
    lVar1 = *(long *)(param_1 + 0x38);
    uVar3 = _xmlParseSDDecl(param_1);
    *(undefined4 *)(lVar1 + 0x60) = uVar3;
    _xmlSkipBlankChars(param_1);
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '>')) {
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
         (iVar2 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar2 < 1)) {
        _xmlPopInput(param_1);
      }
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '>') {
      FUN_100143bf8(param_1,0x39,0);
      _xmlNextChar(param_1);
    }
    else {
      FUN_100143bf8(param_1,0x39,0);
      while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\0' &&
             (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '>'))) {
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
      }
      _xmlNextChar(param_1);
    }
  }
  return;
}

