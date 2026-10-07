
int _xmlCharEncInFunc(xmlCharEncodingHandler *handler,xmlBufferPtr out,xmlBufferPtr in)

{
  int local_68;
  int local_64;
  char local_48 [49];
  undefined1 local_17;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = -2;
  if (handler == (xmlCharEncodingHandler *)0x0) {
    local_68 = -1;
  }
  else if (out == (xmlBufferPtr)0x0) {
    local_68 = -1;
  }
  else if (in == (xmlBufferPtr)0x0) {
    local_68 = -1;
  }
  else {
    local_14 = in->use;
    if (local_14 == 0) {
      local_68 = 0;
    }
    else {
      local_10 = out->size - out->use;
      if (local_10 <= (int)(local_14 * 2)) {
        _xmlBufferGrow(out,out->size + local_14 * 2);
        local_10 = (out->size - out->use) + -1;
      }
      if (handler->input != (xmlCharEncodingInputFunc)0x0) {
        local_c = (*handler->input)(out->content + out->use,&local_10,in->content,(int *)&local_14);
        _xmlBufferShrink(in,local_14);
        out->use = out->use + local_10;
        out->content[out->use] = '\0';
      }
      if (local_c == -2) {
        _snprintf(local_48,0x31,"0x%02X 0x%02X 0x%02X 0x%02X",(ulong)*in->content,
                  (ulong)in->content[1],(ulong)in->content[2],(uint)in->content[3]);
        local_17 = 0;
        FUN_1001384a6(0x1773,"input conversion failed due to input error, bytes %s\n",local_48);
      }
      if (local_c == -3) {
        local_c = 0;
      }
      if (local_10 == 0) {
        local_64 = local_c;
      }
      else {
        local_64 = local_10;
      }
      local_68 = local_64;
    }
  }
  return local_68;
}

