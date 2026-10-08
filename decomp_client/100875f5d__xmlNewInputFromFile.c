
/* WARNING: Removing unreachable block (ram,0x000100876014) */
/* WARNING: Removing unreachable block (ram,0x00010087602b) */
/* WARNING: Enum "enum_2039": Some values do not have unique names */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlNewInputFromFile(xmlParserCtxtPtr param_1,xmlChar *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int *piVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlParserInputBufferPtr pxVar5;
  xmlParserInputPtr ret;
  xmlChar *pxVar6;
  char *pcVar7;
  xmlParserInputPtr local_50;
  xmlChar *local_20;
  
  piVar2 = ___xmlParserDebugEntities();
  if (*piVar2 != 0) {
    ppxVar3 = ___xmlGenericError();
    pxVar1 = *ppxVar3;
    ppvVar4 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar4,"new input from file: %s\n",param_2);
  }
  if (param_1 == (xmlParserCtxtPtr)0x0) {
    local_50 = (xmlParserInputPtr)0x0;
  }
  else {
    pxVar5 = _xmlParserInputBufferCreateFilename((char *)param_2,XML_CHAR_ENCODING_ERROR);
    if (pxVar5 == (xmlParserInputBufferPtr)0x0) {
      ___xmlLoaderErr(param_1,"failed to load external entity \"%s\"\n",param_2);
      local_50 = (xmlParserInputPtr)0x0;
    }
    else {
      ret = (xmlParserInputPtr)_xmlNewInputStream(param_1);
      if (ret == (xmlParserInputPtr)0x0) {
        local_50 = (xmlParserInputPtr)0x0;
      }
      else {
        ret->buf = pxVar5;
        local_50 = _xmlCheckHTTPInput(param_1,ret);
        if (local_50 == (xmlParserInputPtr)0x0) {
          local_50 = (xmlParserInputPtr)0x0;
        }
        else {
          if (local_50->filename == (char *)0x0) {
            local_20 = _xmlStrdup(param_2);
          }
          else {
            local_20 = _xmlStrdup((xmlChar *)local_50->filename);
          }
          pxVar6 = (xmlChar *)_xmlParserGetDirectory((char *)local_20);
          pcVar7 = (char *)_xmlCanonicPath(local_20);
          local_50->filename = pcVar7;
          if (local_20 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_20);
          }
          local_50->directory = (char *)pxVar6;
          local_50->base = *(xmlChar **)local_50->buf->buffer;
          local_50->cur = *(xmlChar **)local_50->buf->buffer;
          local_50->end = local_50->base + *(uint *)(local_50->buf->buffer + 8);
          if ((param_1->directory == (char *)0x0) && (pxVar6 != (xmlChar *)0x0)) {
            pxVar6 = _xmlStrdup(pxVar6);
            param_1->directory = (char *)pxVar6;
          }
        }
      }
    }
  }
  return local_50;
}

