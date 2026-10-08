
xmlEnumerationPtr _xmlParseEnumerationType(long param_1)

{
  xmlEnumerationPtr pxVar1;
  xmlChar *name;
  xmlEnumerationPtr pxVar2;
  xmlEnumerationPtr local_38;
  xmlEnumerationPtr local_20;
  xmlEnumerationPtr local_18;
  
  local_20 = (xmlEnumerationPtr)0x0;
  local_18 = (xmlEnumerationPtr)0x0;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '(') {
    if (((*(int *)(param_1 + 0x1c4) == 0) &&
        (500 < *(long *)(*(long *)(param_1 + 0x38) + 0x20) -
               *(long *)(*(long *)(param_1 + 0x38) + 0x18))) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        500)) {
      FUN_100879c6f(param_1);
    }
    do {
      _xmlNextChar(param_1);
      _xmlSkipBlankChars(param_1);
      name = (xmlChar *)_xmlParseNmtoken(param_1);
      if (name == (xmlChar *)0x0) {
        FUN_100877520(param_1,0x43,0);
        return local_20;
      }
      pxVar2 = _xmlCreateEnumeration(name);
      (*(code *)_xmlFree)(name);
      if (pxVar2 == (xmlEnumerationPtr)0x0) {
        return local_20;
      }
      pxVar1 = pxVar2;
      if (local_18 != (xmlEnumerationPtr)0x0) {
        local_18->next = pxVar2;
        pxVar1 = local_20;
      }
      local_20 = pxVar1;
      _xmlSkipBlankChars(param_1);
      local_18 = pxVar2;
    } while (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '|');
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ')') {
      _xmlNextChar(param_1);
      local_38 = local_20;
    }
    else {
      FUN_100877520(param_1,0x33,0);
      local_38 = local_20;
    }
  }
  else {
    FUN_100877520(param_1,0x32,0);
    local_38 = (xmlEnumerationPtr)0x0;
  }
  return local_38;
}

