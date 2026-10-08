
int _xmlXPathCastToBoolean(xmlXPathObjectPtr val)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  int local_38;
  int local_1c;
  
  local_1c = 0;
  if (val == (xmlXPathObjectPtr)0x0) {
    local_38 = 0;
  }
  else {
    switch(val->type) {
    case XPATH_UNDEFINED:
      local_1c = 0;
      break;
    case XPATH_NODESET:
    case XPATH_XSLT_TREE:
      local_1c = _xmlXPathCastNodeSetToBoolean(val->nodesetval);
      break;
    case XPATH_BOOLEAN:
      local_1c = val->boolval;
      break;
    case XPATH_NUMBER:
      local_1c = _xmlXPathCastNumberToBoolean(val->floatval);
      break;
    case XPATH_STRING:
      local_1c = _xmlXPathCastStringToBoolean(val->stringval);
      break;
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xpath.c",0xf0c);
      local_1c = 0;
    }
    local_38 = local_1c;
  }
  return local_38;
}

