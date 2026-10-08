
void _xmlParseTextDecl(long param_1)

{
  int iVar1;
  long lVar2;
  xmlChar *local_18;
  
  if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '?')) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'x')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'm' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'l')))) &&
     (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == ' ' ||
       ((8 < *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) &&
        (*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) < 0xb)))) ||
      (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == '\r')))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 5;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 5;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
       (((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
         (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')))) {
      FUN_100877b3f(param_1,0x41,"Space needed after \'<?xml\'\n");
    }
    _xmlSkipBlankChars(param_1);
    local_18 = (xmlChar *)_xmlParseVersionInfo(param_1);
    if (local_18 == (xmlChar *)0x0) {
      local_18 = _xmlCharStrdup("1.0");
    }
    else if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
             ((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
              (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))))) &&
            (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')) {
      FUN_100877b3f(param_1,0x41,"Space needed here\n");
    }
    *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x58) = local_18;
    lVar2 = _xmlParseEncodingDecl(param_1);
    if (*(int *)(param_1 + 0x88) != 0x20) {
      if ((lVar2 == 0) && (*(int *)(param_1 + 0x88) == 0)) {
        FUN_100877b3f(param_1,0x65,"Missing encoding in text declaration\n");
      }
      _xmlSkipBlankChars(param_1);
      if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '?') &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '>')) {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 2;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 2;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
          iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
          if (iVar1 < 1) {
            _xmlPopInput(param_1);
          }
        }
      }
      else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '>') {
        FUN_100877520(param_1,0x39,0);
        _xmlNextChar(param_1);
      }
      else {
        FUN_100877520(param_1,0x39,0);
        while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\0' &&
               (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '>'))) {
          *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
               *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
        }
        _xmlNextChar(param_1);
      }
    }
  }
  else {
    FUN_100877520(param_1,0x38,0);
  }
  return;
}

