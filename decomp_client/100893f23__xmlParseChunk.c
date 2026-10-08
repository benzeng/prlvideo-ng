
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _xmlParseChunk(xmlParserCtxtPtr ctxt,char *chunk,int size,int terminate)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlParserInputBufferPtr pxVar5;
  xmlGenericErrorFunc pxVar6;
  int iVar7;
  xmlGenericErrorFunc *ppxVar8;
  void **ppvVar9;
  int local_54;
  int local_1c;
  
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_54 = 1;
  }
  else if ((ctxt->errNo == 0) || (ctxt->disableSAX != 1)) {
    if (ctxt->instate == XML_PARSER_EOF) {
      FUN_1008785ae(ctxt);
    }
    if ((((size < 1) || (chunk == (char *)0x0)) || (ctxt->input == (xmlParserInputPtr)0x0)) ||
       ((ctxt->input->buf == (xmlParserInputBufferPtr)0x0 || (ctxt->instate == ~XML_PARSER_EOF)))) {
      if ((((ctxt->instate != ~XML_PARSER_EOF) &&
           ((ctxt->input != (xmlParserInputPtr)0x0 &&
            (ctxt->input->buf != (xmlParserInputBufferPtr)0x0)))) &&
          (pxVar5 = ctxt->input->buf, pxVar5->encoder != (xmlCharEncodingHandlerPtr)0x0)) &&
         (((pxVar5->buffer != (xmlBufPtr)0x0 && (pxVar5->raw != (xmlBufPtr)0x0)) &&
          (iVar7 = _xmlCharEncInFunc(pxVar5->encoder,(xmlBufferPtr)pxVar5->buffer,
                                     (xmlBufferPtr)pxVar5->raw), iVar7 < 0)))) {
        ppxVar8 = ___xmlGenericError();
        pxVar6 = *ppxVar8;
        ppvVar9 = ___xmlGenericErrorContext();
        (*pxVar6)(*ppvVar9,"xmlParseChunk: encoder error\n");
        return 0x51;
      }
    }
    else {
      pxVar1 = ctxt->input->base;
      uVar2 = *(undefined8 *)ctxt->input->buf->buffer;
      pxVar3 = ctxt->input->cur;
      pxVar4 = ctxt->input->base;
      iVar7 = _xmlParserInputBufferPush(ctxt->input->buf,size,chunk);
      if (iVar7 < 0) {
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
    FUN_10089164d(ctxt,terminate);
    if ((ctxt->errNo == 0) || (ctxt->disableSAX != 1)) {
      if (terminate != 0) {
        local_1c = 0;
        if (ctxt->input != (xmlParserInputPtr)0x0) {
          if (ctxt->input->buf == (xmlParserInputBufferPtr)0x0) {
            local_1c = ctxt->input->length - ((int)ctxt->input->cur - (int)ctxt->input->base);
          }
          else {
            local_1c = *(int *)(ctxt->input->buf->buffer + 8) -
                       ((int)ctxt->input->cur - (int)ctxt->input->base);
          }
        }
        if ((ctxt->instate != ~XML_PARSER_EOF) && (ctxt->instate != XML_PARSER_EPILOG)) {
          FUN_100877520(ctxt,5,0);
        }
        if ((ctxt->instate == XML_PARSER_EPILOG) && (0 < local_1c)) {
          FUN_100877520(ctxt,5,0);
        }
        if (((ctxt->instate != ~XML_PARSER_EOF) && (ctxt->sax != (_xmlSAXHandler *)0x0)) &&
           (ctxt->sax->endDocument != (endDocumentSAXFunc)0x0)) {
          (*ctxt->sax->endDocument)(ctxt->userData);
        }
        ctxt->instate = ~XML_PARSER_EOF;
      }
      local_54 = ctxt->errNo;
    }
    else {
      local_54 = ctxt->errNo;
    }
  }
  else {
    local_54 = ctxt->errNo;
  }
  return local_54;
}

