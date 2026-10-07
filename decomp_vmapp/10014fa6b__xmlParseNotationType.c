
xmlEnumerationPtr _xmlParseNotationType(long param_1)

{
  xmlEnumerationPtr pxVar1;
  xmlChar *name;
  xmlEnumerationPtr cur;
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
      FUN_100146347(param_1);
    }
    do {
      _xmlNextChar(param_1);
      _xmlSkipBlankChars(param_1);
      name = (xmlChar *)_xmlParseName(param_1);
      if (name == (xmlChar *)0x0) {
        FUN_100144217(param_1,0x44,"Name expected in NOTATION declaration\n");
        return local_20;
      }
      cur = _xmlCreateEnumeration(name);
      if (cur == (xmlEnumerationPtr)0x0) {
        return local_20;
      }
      pxVar1 = cur;
      if (local_18 != (xmlEnumerationPtr)0x0) {
        local_18->next = cur;
        pxVar1 = local_20;
      }
      local_20 = pxVar1;
      _xmlSkipBlankChars(param_1);
      local_18 = cur;
    } while (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '|');
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ')') {
      _xmlNextChar(param_1);
      local_38 = local_20;
    }
    else {
      FUN_100143bf8(param_1,0x31,0);
      if ((cur != (xmlEnumerationPtr)0x0) && (cur != local_20)) {
        _xmlFreeEnumeration(cur);
      }
      local_38 = local_20;
    }
  }
  else {
    FUN_100143bf8(param_1,0x30,0);
    local_38 = (xmlEnumerationPtr)0x0;
  }
  return local_38;
}

