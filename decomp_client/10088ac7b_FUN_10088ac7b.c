
xmlChar * FUN_10088ac7b(long param_1,undefined8 *param_2)

{
  xmlChar *pxVar1;
  xmlChar *pxVar2;
  xmlChar *local_28;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100879cbc(param_1);
  }
  local_28 = (xmlChar *)FUN_10088aad5(param_1);
  if (local_28 == (xmlChar *)0x0) {
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ':') &&
       (pxVar1 = (xmlChar *)_xmlParseName(param_1), pxVar1 != (xmlChar *)0x0)) {
      FUN_1008782b1(param_1,0xca,"Failed to parse QName \'%s\'\n",pxVar1,0,0);
      *param_2 = 0;
      return pxVar1;
    }
    return (xmlChar *)0x0;
  }
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ':') {
    _xmlNextChar(param_1);
    pxVar1 = (xmlChar *)FUN_10088aad5(param_1);
    if (pxVar1 == (xmlChar *)0x0) {
      FUN_1008782b1(param_1,0xca,"Failed to parse QName \'%s:\'\n",local_28,0,0);
      pxVar1 = _xmlBuildQName((xmlChar *)"",local_28,(xmlChar *)0x0,0);
      pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),pxVar1,-1);
      if (pxVar1 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar1);
      }
      *param_2 = 0;
      return pxVar2;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == ':') {
      FUN_1008782b1(param_1,0xca,"Failed to parse QName \'%s:%s:\'\n",local_28,pxVar1,0);
      _xmlNextChar(param_1);
      pxVar2 = (xmlChar *)_xmlParseName(param_1);
      if (pxVar2 != (xmlChar *)0x0) {
        pxVar1 = _xmlBuildQName(pxVar2,pxVar1,(xmlChar *)0x0,0);
        pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),pxVar1,-1);
        if (pxVar1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar1);
        }
        *param_2 = local_28;
        return pxVar2;
      }
      pxVar1 = _xmlBuildQName((xmlChar *)"",pxVar1,(xmlChar *)0x0,0);
      pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),pxVar1,-1);
      if (pxVar1 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar1);
      }
      *param_2 = local_28;
      return pxVar2;
    }
    *param_2 = local_28;
    local_28 = pxVar1;
  }
  else {
    *param_2 = 0;
  }
  return local_28;
}

