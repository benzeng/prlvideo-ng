
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _xmlCtxtResetPush(xmlParserCtxtPtr ctxt,char *chunk,int size,char *filename,char *encoding)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlParserInputBufferPtr in;
  void **ppvVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  xmlCharEncodingHandlerPtr pxVar9;
  int local_64;
  xmlCharEncoding local_1c;
  
  local_1c = XML_CHAR_ENCODING_ERROR;
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_64 = 1;
  }
  else {
    if (((encoding == (char *)0x0) && (chunk != (char *)0x0)) && (3 < size)) {
      local_1c = _xmlDetectCharEncoding((uchar *)chunk,size);
    }
    in = _xmlAllocParserInputBuffer(local_1c);
    if (in == (xmlParserInputBufferPtr)0x0) {
      local_64 = 1;
    }
    else if (ctxt == (xmlParserCtxtPtr)0x0) {
      _xmlFreeParserInputBuffer(in);
      local_64 = 1;
    }
    else {
      _xmlCtxtReset(ctxt);
      if (ctxt->pushTab == (void **)0x0) {
        ppvVar5 = (void **)(*(code *)_xmlMalloc)((long)ctxt->nameMax * 0x18);
        ctxt->pushTab = ppvVar5;
        if (ctxt->pushTab == (void **)0x0) {
          _xmlErrMemory(ctxt,0);
          _xmlFreeParserInputBuffer(in);
          return 1;
        }
      }
      if (filename == (char *)0x0) {
        ctxt->directory = (char *)0x0;
      }
      else {
        pcVar6 = _xmlParserGetDirectory(filename);
        ctxt->directory = pcVar6;
      }
      plVar7 = (long *)_xmlNewInputStream(ctxt);
      if (plVar7 == (long *)0x0) {
        _xmlFreeParserInputBuffer(in);
        local_64 = 1;
      }
      else {
        if (filename == (char *)0x0) {
          plVar7[1] = 0;
        }
        else {
          lVar8 = _xmlCanonicPath(filename);
          plVar7[1] = lVar8;
        }
        *plVar7 = (long)in;
        plVar7[3] = **(long **)(*plVar7 + 0x20);
        plVar7[4] = **(long **)(*plVar7 + 0x20);
        plVar7[5] = **(long **)(*plVar7 + 0x20) + (ulong)*(uint *)(*(long *)(*plVar7 + 0x20) + 8);
        _inputPush(ctxt,plVar7);
        if (((0 < size) && (chunk != (char *)0x0)) &&
           ((ctxt->input != (xmlParserInputPtr)0x0 &&
            (ctxt->input->buf != (xmlParserInputBufferPtr)0x0)))) {
          pxVar1 = ctxt->input->base;
          uVar2 = *(undefined8 *)ctxt->input->buf->buffer;
          pxVar3 = ctxt->input->cur;
          pxVar4 = ctxt->input->base;
          _xmlParserInputBufferPush(ctxt->input->buf,size,chunk);
          ctxt->input->base =
               (xmlChar *)(*(long *)ctxt->input->buf->buffer + (long)((int)pxVar1 - (int)uVar2));
          ctxt->input->cur = ctxt->input->base + ((int)pxVar3 - (int)pxVar4);
          ctxt->input->end =
               (xmlChar *)
               (*(long *)ctxt->input->buf->buffer + (ulong)*(uint *)(ctxt->input->buf->buffer + 8));
        }
        if (encoding == (char *)0x0) {
          if (local_1c != XML_CHAR_ENCODING_ERROR) {
            _xmlSwitchEncoding(ctxt,local_1c);
          }
        }
        else {
          pxVar9 = _xmlFindCharEncodingHandler(encoding);
          if (pxVar9 == (xmlCharEncodingHandlerPtr)0x0) {
            FUN_1008780de(ctxt,0x20,"Unsupported encoding %s\n",encoding);
          }
          else {
            _xmlSwitchToEncoding(ctxt,pxVar9);
          }
        }
        local_64 = 0;
      }
    }
  }
  return local_64;
}

