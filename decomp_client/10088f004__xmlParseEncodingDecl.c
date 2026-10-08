
xmlChar * _xmlParseEncodingDecl(long param_1)

{
  int iVar1;
  xmlCharEncodingHandlerPtr pxVar2;
  xmlChar *local_18;
  
  local_18 = (xmlChar *)0x0;
  _xmlSkipBlankChars(param_1);
  if (((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == 'e') &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'n')) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'c')) &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'o' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'd')))) &&
     ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'i' &&
      ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'n' &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 7) == 'g')))))) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 8;
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 8;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 8;
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
      return (xmlChar *)0x0;
    }
    _xmlNextChar(param_1);
    _xmlSkipBlankChars(param_1);
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
      _xmlNextChar(param_1);
      local_18 = (xmlChar *)_xmlParseEncName(param_1);
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
        _xmlNextChar(param_1);
      }
      else {
        FUN_100877520(param_1,0x22,0);
      }
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\'') {
      _xmlNextChar(param_1);
      local_18 = (xmlChar *)_xmlParseEncName(param_1);
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
    if ((local_18 == (xmlChar *)0x0) ||
       ((iVar1 = _xmlStrcasecmp(local_18,(xmlChar *)"UTF-16"), iVar1 != 0 &&
        (iVar1 = _xmlStrcasecmp(local_18,(xmlChar *)"UTF16"), iVar1 != 0)))) {
      if ((local_18 == (xmlChar *)0x0) ||
         ((iVar1 = _xmlStrcasecmp(local_18,(xmlChar *)"UTF-8"), iVar1 != 0 &&
          (iVar1 = _xmlStrcasecmp(local_18,(xmlChar *)"UTF8"), iVar1 != 0)))) {
        if (local_18 != (xmlChar *)0x0) {
          if (*(long *)(*(long *)(param_1 + 0x38) + 0x50) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x50));
          }
          *(xmlChar **)(*(long *)(param_1 + 0x38) + 0x50) = local_18;
          pxVar2 = _xmlFindCharEncodingHandler((char *)local_18);
          if (pxVar2 == (xmlCharEncodingHandlerPtr)0x0) {
            FUN_1008780de(param_1,0x20,"Unsupported encoding %s\n",local_18);
            return (xmlChar *)0x0;
          }
          _xmlSwitchToEncoding(param_1,pxVar2);
        }
      }
      else {
        if (*(long *)(param_1 + 0x28) != 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
        }
        *(xmlChar **)(param_1 + 0x28) = local_18;
      }
    }
    else {
      if (*(long *)(param_1 + 0x28) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
      }
      *(xmlChar **)(param_1 + 0x28) = local_18;
    }
  }
  return local_18;
}

