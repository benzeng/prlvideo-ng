
/* WARNING: Enum "enum_2029": Some values do not have unique names */

long _xmlByteConsumed(xmlParserCtxtPtr ctxt)

{
  xmlChar *local_7d58;
  uchar local_7d48 [32000];
  int local_48;
  int local_44;
  xmlParserInputPtr local_40;
  uint local_34;
  xmlCharEncodingHandlerPtr local_30;
  uchar *local_28;
  int local_1c;
  
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_7d58 = (xmlChar *)0xffffffffffffffff;
  }
  else {
    local_40 = ctxt->input;
    if (local_40 == (xmlParserInputPtr)0x0) {
      local_7d58 = (xmlChar *)0xffffffffffffffff;
    }
    else if ((local_40->buf == (xmlParserInputBufferPtr)0x0) ||
            (local_40->buf->encoder == (xmlCharEncodingHandlerPtr)0x0)) {
      local_7d58 = local_40->cur + (local_40->consumed - (long)local_40->base);
    }
    else {
      local_34 = 0;
      local_30 = local_40->buf->encoder;
      if (local_40->end != local_40->cur && -1 < (long)local_40->end - (long)local_40->cur) {
        local_28 = local_40->cur;
        if (local_30->output == (xmlCharEncodingOutputFunc)0x0) {
          return -1;
        }
        do {
          local_44 = (int)local_40->end - (int)local_28;
          local_48 = 32000;
          local_1c = (*local_30->output)(local_7d48,&local_48,local_28,&local_44);
          if (local_1c == -1) {
            return -1;
          }
          local_34 = local_34 + local_48;
          local_28 = local_28 + local_44;
        } while (local_1c == -2);
      }
      if (local_40->buf->rawconsumed < (ulong)local_34) {
        local_7d58 = (xmlChar *)0xffffffffffffffff;
      }
      else {
        local_7d58 = (xmlChar *)(local_40->buf->rawconsumed - (ulong)local_34);
      }
    }
  }
  return (long)local_7d58;
}

