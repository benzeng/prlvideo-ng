
void _xmlDocDumpFormatMemoryEnc
               (xmlDocPtr out_doc,xmlChar **doc_txt_ptr,int *doc_txt_len,char *txt_encoding,
               int format)

{
  xmlChar *pxVar1;
  xmlChar *local_e8;
  int *local_e0;
  int local_bc;
  undefined1 local_b8 [24];
  xmlChar *local_a0;
  xmlOutputBufferPtr local_90;
  xmlDocPtr local_88;
  undefined4 local_7c;
  int local_78;
  xmlOutputBufferPtr local_18;
  xmlCharEncodingHandlerPtr local_10;
  
  local_bc = 0;
  local_18 = (xmlOutputBufferPtr)0x0;
  local_10 = (xmlCharEncodingHandlerPtr)0x0;
  local_e0 = doc_txt_len;
  if (doc_txt_len == (int *)0x0) {
    local_e0 = &local_bc;
  }
  if (doc_txt_ptr == (xmlChar **)0x0) {
    *local_e0 = 0;
  }
  else {
    *doc_txt_ptr = (xmlChar *)0x0;
    *local_e0 = 0;
    if (out_doc != (xmlDocPtr)0x0) {
      local_e8 = (xmlChar *)txt_encoding;
      if (txt_encoding == (char *)0x0) {
        local_e8 = out_doc->encoding;
      }
      if ((local_e8 != (xmlChar *)0x0) &&
         (local_10 = _xmlFindCharEncodingHandler((char *)local_e8),
         local_10 == (xmlCharEncodingHandlerPtr)0x0)) {
        FUN_100981ab6(0x57b,out_doc,local_e8);
        return;
      }
      local_18 = _xmlAllocOutputBuffer(local_10);
      if (local_18 == (xmlOutputBufferPtr)0x0) {
        FUN_100981a88("creating buffer");
      }
      else {
        _memset(local_b8,0,0xa0);
        local_90 = local_18;
        local_7c = 0;
        local_a0 = local_e8;
        local_88 = out_doc;
        local_78 = format;
        FUN_100982376(local_b8);
        FUN_100983424(local_b8,out_doc);
        _xmlOutputBufferFlush(local_18);
        if (local_18->conv == (xmlBufPtr)0x0) {
          *local_e0 = *(int *)(local_18->buffer + 8);
          pxVar1 = _xmlStrndup(*(xmlChar **)local_18->buffer,*local_e0);
          *doc_txt_ptr = pxVar1;
        }
        else {
          *local_e0 = *(int *)(local_18->conv + 8);
          pxVar1 = _xmlStrndup(*(xmlChar **)local_18->conv,*local_e0);
          *doc_txt_ptr = pxVar1;
        }
        _xmlOutputBufferClose(local_18);
        if ((*doc_txt_ptr == (xmlChar *)0x0) && (0 < *local_e0)) {
          *local_e0 = 0;
          FUN_100981a88("creating output");
        }
      }
    }
  }
  return;
}

