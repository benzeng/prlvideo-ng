
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserInputPtr
_xmlNewIOInputStream(xmlParserCtxtPtr ctxt,xmlParserInputBufferPtr input,xmlCharEncoding enc)

{
  xmlGenericErrorFunc pxVar1;
  int *piVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlParserInputPtr local_48;
  
  if (input == (xmlParserInputBufferPtr)0x0) {
    local_48 = (xmlParserInputPtr)0x0;
  }
  else {
    piVar2 = ___xmlParserDebugEntities();
    if (*piVar2 != 0) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"new input from I/O\n");
    }
    local_48 = (xmlParserInputPtr)_xmlNewInputStream(ctxt);
    if (local_48 == (xmlParserInputPtr)0x0) {
      local_48 = (xmlParserInputPtr)0x0;
    }
    else {
      local_48->filename = (char *)0x0;
      local_48->buf = input;
      local_48->base = *(xmlChar **)local_48->buf->buffer;
      local_48->cur = *(xmlChar **)local_48->buf->buffer;
      local_48->end = local_48->base + *(uint *)(local_48->buf->buffer + 8);
      if (enc != XML_CHAR_ENCODING_ERROR) {
        _xmlSwitchEncoding(ctxt,enc);
      }
    }
  }
  return local_48;
}

