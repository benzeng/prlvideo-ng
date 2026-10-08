
int _xmlXIncludeProcessTreeFlags(xmlNodePtr param_1,undefined4 param_2)

{
  long lVar1;
  xmlChar *pxVar2;
  int local_28;
  int local_c;
  
  if ((param_1 == (xmlNodePtr)0x0) || (param_1->doc == (_xmlDoc *)0x0)) {
    local_28 = -1;
  }
  else {
    lVar1 = _xmlXIncludeNewContext(param_1->doc);
    if (lVar1 == 0) {
      local_28 = -1;
    }
    else {
      pxVar2 = _xmlNodeGetBase(param_1->doc,param_1);
      *(xmlChar **)(lVar1 + 0x60) = pxVar2;
      _xmlXIncludeSetFlags(lVar1,param_2);
      local_c = FUN_1008fb17a(lVar1,param_1->doc,param_1);
      if ((-1 < local_c) && (0 < *(int *)(lVar1 + 0x50))) {
        local_c = -1;
      }
      _xmlXIncludeFreeContext(lVar1);
      local_28 = local_c;
    }
  }
  return local_28;
}

