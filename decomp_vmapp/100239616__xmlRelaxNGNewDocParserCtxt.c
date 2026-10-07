
xmlRelaxNGParserCtxtPtr _xmlRelaxNGNewDocParserCtxt(xmlDocPtr doc)

{
  xmlDocPtr pxVar1;
  void **ppvVar2;
  xmlRelaxNGParserCtxtPtr local_28;
  
  if (doc == (xmlDocPtr)0x0) {
    local_28 = (xmlRelaxNGParserCtxtPtr)0x0;
  }
  else {
    pxVar1 = _xmlCopyDoc(doc,1);
    if (pxVar1 == (xmlDocPtr)0x0) {
      local_28 = (xmlRelaxNGParserCtxtPtr)0x0;
    }
    else {
      local_28 = (xmlRelaxNGParserCtxtPtr)(*(code *)_xmlMalloc)(0x100);
      if (local_28 == (xmlRelaxNGParserCtxtPtr)0x0) {
        FUN_10022d294(0,"building parser\n");
        local_28 = (xmlRelaxNGParserCtxtPtr)0x0;
      }
      else {
        _memset(local_28,0,0x100);
        *(xmlDocPtr *)(local_28 + 0x88) = pxVar1;
        *(undefined4 *)(local_28 + 0xfc) = 1;
        ppvVar2 = ___xmlGenericErrorContext();
        *(void **)local_28 = *ppvVar2;
      }
    }
  }
  return local_28;
}

