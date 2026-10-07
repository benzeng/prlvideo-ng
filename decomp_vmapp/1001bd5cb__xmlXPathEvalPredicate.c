
int _xmlXPathEvalPredicate(xmlXPathContextPtr ctxt,xmlXPathObjectPtr res)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  uint local_34;
  uint local_2c;
  
  if ((ctxt == (xmlXPathContextPtr)0x0) || (res == (xmlXPathObjectPtr)0x0)) {
    local_34 = 0;
  }
  else {
    switch(res->type) {
    default:
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"Internal error at %s:%d\n","xpath.c",0x2bf1);
      local_34 = 0;
      break;
    case XPATH_NODESET:
    case XPATH_XSLT_TREE:
      if (res->nodesetval == (xmlNodeSetPtr)0x0) {
        local_34 = 0;
      }
      else {
        local_34 = (uint)(res->nodesetval->nodeNr != 0);
      }
      break;
    case XPATH_BOOLEAN:
      local_34 = res->boolval;
      break;
    case XPATH_NUMBER:
      local_34 = (uint)(res->floatval == (double)ctxt->proximityPosition);
      break;
    case XPATH_STRING:
      if ((res->stringval == (xmlChar *)0x0) || (iVar2 = _xmlStrlen(res->stringval), iVar2 == 0)) {
        local_2c = 0;
      }
      else {
        local_2c = 1;
      }
      local_34 = local_2c;
    }
  }
  return local_34;
}

