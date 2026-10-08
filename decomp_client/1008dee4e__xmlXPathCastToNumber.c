
double _xmlXPathCastToNumber(xmlXPathObjectPtr val)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  double local_40;
  double local_20;
  
  local_20 = 0.0;
  if (val == (xmlXPathObjectPtr)0x0) {
    local_40 = _xmlXPathNAN;
  }
  else {
    switch(val->type) {
    case XPATH_UNDEFINED:
      local_20 = _xmlXPathNAN;
      break;
    case XPATH_NODESET:
    case XPATH_XSLT_TREE:
      local_20 = _xmlXPathCastNodeSetToNumber(val->nodesetval);
      break;
    case XPATH_BOOLEAN:
      local_20 = _xmlXPathCastBooleanToNumber(val->boolval);
      break;
    case XPATH_NUMBER:
      local_20 = val->floatval;
      break;
    case XPATH_STRING:
      local_20 = _xmlXPathCastStringToNumber(val->stringval);
      break;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xpath.c",0xe9c);
      local_20 = _xmlXPathNAN;
    }
    local_40 = local_20;
  }
  return local_40;
}

