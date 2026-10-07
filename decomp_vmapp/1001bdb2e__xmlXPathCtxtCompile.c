
xmlXPathCompExprPtr _xmlXPathCtxtCompile(xmlXPathContextPtr ctxt,xmlChar *str)

{
  undefined8 *puVar1;
  xmlChar *pxVar2;
  xmlXPathCompExprPtr local_30;
  xmlXPathCompExprPtr local_10;
  
  local_30 = (xmlXPathCompExprPtr)FUN_1001bd8cd(ctxt,str);
  if (local_30 == (xmlXPathCompExprPtr)0x0) {
    _xmlXPathInit();
    puVar1 = (undefined8 *)_xmlXPathNewParserContext(str,ctxt);
    FUN_1001b5e24(puVar1);
    if (*(int *)(puVar1 + 2) == 0) {
      if (*(char *)*puVar1 == '\0') {
        local_10 = (xmlXPathCompExprPtr)puVar1[7];
        puVar1[7] = 0;
      }
      else {
        _xmlXPatherror(puVar1,"xpath.c",0x2c9a,7);
        local_10 = (xmlXPathCompExprPtr)0x0;
      }
      _xmlXPathFreeParserContext(puVar1);
      if (local_10 != (xmlXPathCompExprPtr)0x0) {
        pxVar2 = _xmlStrdup(str);
        *(xmlChar **)(local_10 + 0x18) = pxVar2;
      }
      local_30 = local_10;
    }
    else {
      _xmlXPathFreeParserContext(puVar1);
      local_30 = (xmlXPathCompExprPtr)0x0;
    }
  }
  return local_30;
}

