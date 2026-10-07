
xmlXPathObjectPtr _xmlXPathCompiledEval(xmlXPathCompExprPtr comp,xmlXPathContextPtr ctx)

{
  xmlGenericErrorFunc pxVar1;
  long lVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr local_60;
  xmlXPathObjectPtr local_38;
  uint local_1c;
  
  local_1c = 0;
  if (ctx == (xmlXPathContextPtr)0x0) {
    ___xmlRaiseError(0,0,0,0,0,0xc,1,3,"xpath.c",0x2ccc,0,0,0,0,0,"NULL context pointer\n");
    local_60 = (xmlXPathObjectPtr)0x0;
  }
  else if (comp == (xmlXPathCompExprPtr)0x0) {
    local_60 = (xmlXPathObjectPtr)0x0;
  }
  else {
    _xmlXPathInit();
    lVar2 = FUN_1001abb62(comp,ctx);
    FUN_1001bd477(lVar2);
    if (*(long *)(lVar2 + 0x20) == 0) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"xmlXPathCompiledEval: evaluation failed\n");
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    else {
      local_38 = (xmlXPathObjectPtr)_valuePop(lVar2);
    }
    do {
      obj = (xmlXPathObjectPtr)_valuePop(lVar2);
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
      (*pxVar1)(*ppvVar4,"xmlXPathCompiledEval: %d object left on the stack\n",(ulong)local_1c);
    }
    if (*(int *)(lVar2 + 0x10) != 0) {
      _xmlXPathFreeObject(local_38);
      local_38 = (xmlXPathObjectPtr)0x0;
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    _xmlXPathFreeParserContext(lVar2);
    local_60 = local_38;
  }
  return local_60;
}

