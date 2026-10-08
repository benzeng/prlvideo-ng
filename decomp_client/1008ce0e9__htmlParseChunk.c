
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _htmlParseChunk(htmlParserCtxtPtr ctxt,char *chunk,int size,int terminate)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlParserInputBufferPtr pxVar5;
  int iVar6;
  int local_44;
  
  if ((ctxt == (htmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    FUN_1008c3ec0(ctxt,1,"htmlParseChunk: context error\n",0,0);
    local_44 = 1;
  }
  else {
    if ((((size < 1) || (chunk == (char *)0x0)) || (ctxt->input == (xmlParserInputPtr)0x0)) ||
       ((ctxt->input->buf == (xmlParserInputBufferPtr)0x0 || (ctxt->instate == ~XML_PARSER_EOF)))) {
      if ((((ctxt->instate != ~XML_PARSER_EOF) &&
           ((ctxt->input != (xmlParserInputPtr)0x0 &&
            (ctxt->input->buf != (xmlParserInputBufferPtr)0x0)))) &&
          (pxVar5 = ctxt->input->buf, pxVar5->encoder != (xmlCharEncodingHandlerPtr)0x0)) &&
         (((pxVar5->buffer != (xmlBufPtr)0x0 && (pxVar5->raw != (xmlBufPtr)0x0)) &&
          (iVar6 = _xmlCharEncInFunc(pxVar5->encoder,(xmlBufferPtr)pxVar5->buffer,
                                     (xmlBufferPtr)pxVar5->raw), iVar6 < 0)))) {
        FUN_1008c3ec0(ctxt,0x51,"encoder error\n",0,0);
        return 0x51;
      }
    }
    else {
      pxVar1 = ctxt->input->base;
      uVar2 = *(undefined8 *)ctxt->input->buf->buffer;
      pxVar3 = ctxt->input->cur;
      pxVar4 = ctxt->input->base;
      iVar6 = _xmlParserInputBufferPush(ctxt->input->buf,size,chunk);
      if (iVar6 < 0) {
        ctxt->errNo = -1;
        ctxt->disableSAX = 1;
        return -1;
      }
      ctxt->input->base =
           (xmlChar *)(*(long *)ctxt->input->buf->buffer + (long)((int)pxVar1 - (int)uVar2));
      ctxt->input->cur = ctxt->input->base + ((int)pxVar3 - (int)pxVar4);
      ctxt->input->end =
           (xmlChar *)
           (*(long *)ctxt->input->buf->buffer + (ulong)*(uint *)(ctxt->input->buf->buffer + 8));
    }
    FUN_1008cc8eb(ctxt,terminate);
    if (terminate != 0) {
      if (((ctxt->instate != ~XML_PARSER_EOF) && (ctxt->instate != XML_PARSER_EPILOG)) &&
         (ctxt->instate != XML_PARSER_MISC)) {
        ctxt->errNo = 5;
        ctxt->wellFormed = 0;
      }
      if (((ctxt->instate != ~XML_PARSER_EOF) && (ctxt->sax != (_xmlSAXHandler *)0x0)) &&
         (ctxt->sax->endDocument != (endDocumentSAXFunc)0x0)) {
        (*ctxt->sax->endDocument)(ctxt->userData);
      }
      ctxt->instate = ~XML_PARSER_EOF;
    }
    local_44 = ctxt->errNo;
  }
  return local_44;
}

