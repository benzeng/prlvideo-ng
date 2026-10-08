
xmlXPathObjectPtr _xmlXPathEval(xmlChar *str,xmlXPathContextPtr_conflict ctx)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 *puVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr local_60;
  xmlXPathObjectPtr local_38;
  uint local_1c;
  
  local_1c = 0;
  if (ctx == (xmlXPathContextPtr_conflict)0x0) {
    ___xmlRaiseError(0,0,0,0,0,0xc,1,3,"xpath.c",0x2d36,0,0,0,0,0,"NULL context pointer\n");
    local_60 = (xmlXPathObjectPtr)0x0;
  }
  else {
    _xmlXPathInit();
    puVar2 = (undefined8 *)_xmlXPathNewParserContext(str,ctx);
    _xmlXPathEvalExpr(puVar2);
    if (puVar2[4] == 0) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"xmlXPathEval: evaluation failed\n");
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    else if (((*(char *)*puVar2 == '\0') || (puVar2[7] == 0)) || (*(long *)(puVar2[7] + 0x28) != 0))
    {
      local_38 = (xmlXPathObjectPtr)_valuePop(puVar2);
    }
    else {
      _xmlXPatherror(puVar2,"xpath.c",0x2d46,7);
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    do {
      obj = (xmlXPathObjectPtr)_valuePop(puVar2);
      if (obj != (xmlXPathObjectPtr)0x0) {
        if (obj != (xmlXPathObjectPtr)0x0) {
          local_1c = local_1c + 1;
        }
        _xmlXPathFreeObject(obj);
      }
    } while (obj != (xmlXPathObjectPtr)0x0);
    if ((local_1c != 0) && (local_38 != (xmlXPathObjectPtr)0x0)) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"xmlXPathEval: %d object left on the stack\n",(ulong)local_1c);
    }
    if (*(int *)(puVar2 + 2) != 0) {
      _xmlXPathFreeObject(local_38);
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    _xmlXPathFreeParserContext(puVar2);
    local_60 = local_38;
  }
  return local_60;
}

