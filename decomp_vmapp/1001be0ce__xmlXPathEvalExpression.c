
xmlXPathObjectPtr _xmlXPathEvalExpression(xmlChar *str,xmlXPathContextPtr ctxt)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 *puVar2;
  xmlXPathObjectPtr obj;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlXPathObjectPtr local_50;
  xmlXPathObjectPtr local_30;
  uint local_1c;
  
  local_1c = 0;
  if (ctxt == (xmlXPathContextPtr)0x0) {
    ___xmlRaiseError(0,0,0,0,0,0xc,1,3,"xpath.c",0x2d72,0,0,0,0,0,"NULL context pointer\n");
    local_50 = (xmlXPathObjectPtr)0x0;
  }
  else {
    _xmlXPathInit();
    puVar2 = (undefined8 *)_xmlXPathNewParserContext(str,ctxt);
    _xmlXPathEvalExpr(puVar2);
    if (*(char *)*puVar2 == '\0') {
      local_30 = (xmlXPathObjectPtr)_valuePop(puVar2);
    }
    else {
      _xmlXPatherror(puVar2,"xpath.c",0x2d7a,7);
      local_30 = (xmlXPathObjectPtr)0x0;
    }
    while (obj = (xmlXPathObjectPtr)_valuePop(puVar2), obj != (xmlXPathObjectPtr)0x0) {
      _xmlXPathFreeObject(obj);
      local_1c = local_1c + 1;
    }
    if ((local_1c != 0) && (local_30 != (xmlXPathObjectPtr)0x0)) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"xmlXPathEvalExpression: %d object left on the stack\n",(ulong)local_1c);
    }
    _xmlXPathFreeParserContext(puVar2);
    local_50 = local_30;
  }
  return local_50;
}

