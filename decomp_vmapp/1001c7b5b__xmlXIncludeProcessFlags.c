
int _xmlXIncludeProcessFlags(xmlDocPtr param_1,undefined4 param_2)

{
  xmlNodePtr pxVar1;
  long lVar2;
  xmlChar *pxVar3;
  int local_38;
  int local_c;
  
  if (param_1 == (xmlDocPtr)0x0) {
    local_38 = -1;
  }
  else {
    pxVar1 = _xmlDocGetRootElement(param_1);
    if (pxVar1 == (xmlNodePtr)0x0) {
      local_38 = -1;
    }
    else {
      lVar2 = _xmlXIncludeNewContext(param_1);
      if (lVar2 == 0) {
        local_38 = -1;
      }
      else {
        pxVar3 = _xmlStrdup(param_1->URL);
        *(xmlChar **)(lVar2 + 0x60) = pxVar3;
        _xmlXIncludeSetFlags(lVar2,param_2);
        local_c = FUN_1001c7852(lVar2,param_1,pxVar1);
        if ((-1 < local_c) && (0 < *(int *)(lVar2 + 0x50))) {
          local_c = -1;
        }
        _xmlXIncludeFreeContext(lVar2);
        local_38 = local_c;
      }
    }
  }
  return local_38;
}

