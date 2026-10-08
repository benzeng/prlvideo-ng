
xmlXPathObjectPtr _xmlXPathConvertString(xmlXPathObjectPtr val)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlXPathObjectPtr local_40;
  xmlChar *local_20;
  
  local_20 = (xmlChar *)0x0;
  if (val == (xmlXPathObjectPtr)0x0) {
    local_40 = (xmlXPathObjectPtr)_xmlXPathNewCString("");
  }
  else {
    switch(val->type) {
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
      return val;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xpath.c",0xe24);
    }
    _xmlXPathFreeObject(val);
    if (local_20 == (xmlChar *)0x0) {
      local_40 = (xmlXPathObjectPtr)_xmlXPathNewCString("");
    }
    else {
      local_40 = (xmlXPathObjectPtr)_xmlXPathWrapString(local_20);
    }
  }
  return local_40;
}

