
xmlChar * _xmlXPathCastToString(xmlXPathObjectPtr val)

{
  xmlGenericErrorFunc pxVar1;
  xmlChar *pxVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlChar *local_40;
  xmlChar *local_20;
  
  local_20 = (xmlChar *)0x0;
  if (val == (xmlXPathObjectPtr)0x0) {
    local_40 = _xmlStrdup((xmlChar *)"");
  }
  else {
    switch(val->type) {
    case XPATH_UNDEFINED:
      local_20 = _xmlStrdup((xmlChar *)"");
      break;
    case XPATH_NODESET:
    case XPATH_XSLT_TREE:
      local_20 = _xmlXPathCastNodeSetToString(val->nodesetval);
      break;
    case XPATH_BOOLEAN:
      local_20 = _xmlXPathCastBooleanToString(val->boolval);
      break;
    case XPATH_NUMBER:
      local_20 = _xmlXPathCastNumberToString(val->floatval);
      break;
    case XPATH_STRING:
      pxVar2 = _xmlStrdup(val->stringval);
      return pxVar2;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xpath.c",0xdf7);
      local_20 = _xmlStrdup((xmlChar *)"");
    }
    local_40 = local_20;
  }
  return local_40;
}

