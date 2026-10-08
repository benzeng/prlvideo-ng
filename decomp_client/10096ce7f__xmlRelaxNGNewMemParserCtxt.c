
xmlRelaxNGParserCtxtPtr _xmlRelaxNGNewMemParserCtxt(char *buffer,int size)

{
  xmlGenericErrorFunc *ppxVar1;
  void **ppvVar2;
  xmlRelaxNGParserCtxtPtr local_30;
  
  if ((buffer == (char *)0x0) || (size < 1)) {
    local_30 = (xmlRelaxNGParserCtxtPtr)0x0;
  }
  else {
    local_30 = (xmlRelaxNGParserCtxtPtr)(*(code *)_xmlMalloc)(0x100);
    if (local_30 == (xmlRelaxNGParserCtxtPtr)0x0) {
      FUN_100960bbc(0,"building parser\n");
      local_30 = (xmlRelaxNGParserCtxtPtr)0x0;
    }
    else {
      _memset(local_30,0,0x100);
      *(char **)(local_30 + 0xa0) = buffer;
      *(int *)(local_30 + 0xa8) = size;
      ppxVar1 = ___xmlGenericError();
      *(xmlGenericErrorFunc *)(local_30 + 8) = *ppxVar1;
      ppvVar2 = ___xmlGenericErrorContext();
      *(void **)local_30 = *ppvVar2;
    }
  }
  return local_30;
}

