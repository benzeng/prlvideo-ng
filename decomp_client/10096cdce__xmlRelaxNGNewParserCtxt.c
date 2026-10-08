
xmlRelaxNGParserCtxtPtr _xmlRelaxNGNewParserCtxt(char *URL)

{
  xmlChar *pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  xmlRelaxNGParserCtxtPtr local_28;
  
  if (URL == (char *)0x0) {
    local_28 = (xmlRelaxNGParserCtxtPtr)0x0;
  }
  else {
    local_28 = (xmlRelaxNGParserCtxtPtr)(*(code *)_xmlMalloc)(0x100);
    if (local_28 == (xmlRelaxNGParserCtxtPtr)0x0) {
      FUN_100960bbc(0,"building parser\n");
      local_28 = (xmlRelaxNGParserCtxtPtr)0x0;
    }
    else {
      _memset(local_28,0,0x100);
      pxVar1 = _xmlStrdup((xmlChar *)URL);
      *(xmlChar **)(local_28 + 0x80) = pxVar1;
      ppxVar2 = ___xmlGenericError();
      *(xmlGenericErrorFunc *)(local_28 + 8) = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      *(void **)local_28 = *ppvVar3;
    }
  }
  return local_28;
}

