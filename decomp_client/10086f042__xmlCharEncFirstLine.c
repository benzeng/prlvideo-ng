
int _xmlCharEncFirstLine(xmlCharEncodingHandler *handler,xmlBufferPtr out,xmlBufferPtr in)

{
  int local_34;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = -2;
  if (handler == (xmlCharEncodingHandler *)0x0) {
    local_34 = -1;
  }
  else if (out == (xmlBufferPtr)0x0) {
    local_34 = -1;
  }
  else if (in == (xmlBufferPtr)0x0) {
    local_34 = -1;
  }
  else {
    local_10 = out->size - out->use;
    local_14 = in->use;
    if (local_10 <= (int)(local_14 * 2)) {
      _xmlBufferGrow(out,local_14);
    }
    local_10 = 0x2d;
    if (handler->input != (xmlCharEncodingInputFunc)0x0) {
      local_c = (*handler->input)(out->content + out->use,&local_10,in->content,(int *)&local_14);
      _xmlBufferShrink(in,local_14);
      out->use = out->use + local_10;
      out->content[out->use] = '\0';
    }
    if (local_c == -3) {
      local_c = 0;
    }
    if (local_c == -1) {
      local_c = 0;
    }
    local_34 = local_c;
  }
  return local_34;
}

