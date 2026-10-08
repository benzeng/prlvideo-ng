
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlParserCtxtPtr
_xmlCreatePushParserCtxt(xmlSAXHandlerPtr sax,void *user_data,char *chunk,int size,char *filename)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlParserInputBufferPtr in;
  void **ppvVar5;
  _xmlSAXHandler *p_Var6;
  _xmlSAXHandler *p_Var7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  xmlParserCtxtPtr local_78;
  xmlCharEncoding local_24;
  
  local_24 = XML_CHAR_ENCODING_ERROR;
  if ((chunk != (char *)0x0) && (3 < size)) {
    local_24 = _xmlDetectCharEncoding((uchar *)chunk,size);
  }
  in = _xmlAllocParserInputBuffer(local_24);
  if (in == (xmlParserInputBufferPtr)0x0) {
    local_78 = (xmlParserCtxtPtr)0x0;
  }
  else {
    local_78 = _xmlNewParserCtxt();
    if (local_78 == (xmlParserCtxtPtr)0x0) {
      _xmlErrMemory(0,"creating parser: out of memory\n");
      _xmlFreeParserInputBuffer(in);
      local_78 = (xmlParserCtxtPtr)0x0;
    }
    else {
      local_78->dictNames = 1;
      ppvVar5 = (void **)(*(code *)_xmlMalloc)((long)local_78->nameMax * 0x18);
      local_78->pushTab = ppvVar5;
      if (local_78->pushTab == (void **)0x0) {
        _xmlErrMemory(local_78,0);
        _xmlFreeParserInputBuffer(in);
        _xmlFreeParserCtxt(local_78);
        local_78 = (xmlParserCtxtPtr)0x0;
      }
      else {
        if (sax != (xmlSAXHandlerPtr)0x0) {
          p_Var7 = local_78->sax;
          p_Var6 = (_xmlSAXHandler *)___xmlDefaultSAXHandler();
          if (p_Var7 != p_Var6) {
            (*(code *)_xmlFree)(local_78->sax);
          }
          p_Var7 = (_xmlSAXHandler *)(*(code *)_xmlMalloc)(0x100);
          local_78->sax = p_Var7;
          if (local_78->sax == (_xmlSAXHandler *)0x0) {
            _xmlErrMemory(local_78,0);
            _xmlFreeParserInputBuffer(in);
            _xmlFreeParserCtxt(local_78);
            return (xmlParserCtxtPtr)0x0;
          }
          _memset(local_78->sax,0,0x100);
          if (sax->initialized == 0xdeedbeaf) {
            _memcpy(local_78->sax,sax,0x100);
          }
          else {
            _memcpy(local_78->sax,sax,0xe0);
          }
          if (user_data != (void *)0x0) {
            local_78->userData = user_data;
          }
        }
        if (filename == (char *)0x0) {
          local_78->directory = (char *)0x0;
        }
        else {
          pcVar8 = _xmlParserGetDirectory(filename);
          local_78->directory = pcVar8;
        }
        plVar9 = (long *)_xmlNewInputStream(local_78);
        if (plVar9 == (long *)0x0) {
          _xmlFreeParserCtxt(local_78);
          _xmlFreeParserInputBuffer(in);
          local_78 = (xmlParserCtxtPtr)0x0;
        }
        else {
          if (filename == (char *)0x0) {
            plVar9[1] = 0;
          }
          else {
            lVar10 = _xmlCanonicPath(filename);
            plVar9[1] = lVar10;
            if (plVar9[1] == 0) {
              _xmlFreeParserCtxt(local_78);
              _xmlFreeParserInputBuffer(in);
              return (xmlParserCtxtPtr)0x0;
            }
          }
          *plVar9 = (long)in;
          plVar9[3] = **(long **)(*plVar9 + 0x20);
          plVar9[4] = **(long **)(*plVar9 + 0x20);
          plVar9[5] = **(long **)(*plVar9 + 0x20) + (ulong)*(uint *)(*(long *)(*plVar9 + 0x20) + 8);
          _inputPush(local_78,plVar9);
          if ((size == 0) || (chunk == (char *)0x0)) {
            local_78->charset = 0;
          }
          else if ((local_78->input != (xmlParserInputPtr)0x0) &&
                  (local_78->input->buf != (xmlParserInputBufferPtr)0x0)) {
            pxVar1 = local_78->input->base;
            uVar2 = *(undefined8 *)local_78->input->buf->buffer;
            pxVar3 = local_78->input->cur;
            pxVar4 = local_78->input->base;
            _xmlParserInputBufferPush(local_78->input->buf,size,chunk);
            local_78->input->base =
                 (xmlChar *)
                 (*(long *)local_78->input->buf->buffer + (long)((int)pxVar1 - (int)uVar2));
            local_78->input->cur = local_78->input->base + ((int)pxVar3 - (int)pxVar4);
            local_78->input->end =
                 (xmlChar *)
                 (*(long *)local_78->input->buf->buffer +
                 (ulong)*(uint *)(local_78->input->buf->buffer + 8));
          }
          if (local_24 != XML_CHAR_ENCODING_ERROR) {
            _xmlSwitchEncoding(local_78,local_24);
          }
        }
      }
    }
  }
  return local_78;
}

