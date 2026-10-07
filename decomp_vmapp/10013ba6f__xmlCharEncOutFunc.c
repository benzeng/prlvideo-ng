
int _xmlCharEncOutFunc(xmlCharEncodingHandler *handler,xmlBufferPtr out,xmlBufferPtr in)

{
  int iVar1;
  int local_a4;
  char local_88 [49];
  undefined1 local_57;
  xmlChar local_48 [24];
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uchar *local_18;
  uint local_c;
  
  local_24 = -2;
  local_20 = 0;
  local_1c = 0;
  if (handler == (xmlCharEncodingHandler *)0x0) {
    local_a4 = -1;
  }
  else if (out == (xmlBufferPtr)0x0) {
    local_a4 = -1;
  }
  else {
    while( true ) {
      local_28 = out->size - out->use;
      if (0 < local_28) {
        local_28 = local_28 + -1;
      }
      if (in == (xmlBufferPtr)0x0) {
        local_2c = 0;
        if ((handler->output != (xmlCharEncodingOutputFunc)0x0) &&
           (iVar1 = (*handler->output)(out->content + out->use,&local_28,(uchar *)0x0,
                                       (int *)&local_2c), -1 < iVar1)) {
          out->use = out->use + local_28;
          out->content[out->use] = '\0';
        }
        return 0;
      }
      local_2c = in->use;
      if (local_2c == 0) {
        return 0;
      }
      if (local_28 <= (int)(local_2c * 2)) {
        _xmlBufferGrow(out,local_2c * 2);
        local_28 = (out->size - out->use) + -1;
      }
      if (handler->output == (xmlCharEncodingOutputFunc)0x0) {
        FUN_1001384a6(0x1774,"xmlCharEncOutFunc: no output function !\n",0);
        return -1;
      }
      local_24 = (*handler->output)(out->content + out->use,&local_28,in->content,(int *)&local_2c);
      _xmlBufferShrink(in,local_2c);
      out->use = out->use + local_28;
      local_20 = local_20 + local_28;
      out->content[out->use] = '\0';
      if (-1 < local_24) {
        local_1c = local_1c + local_24;
      }
      if (local_24 != -2) goto LAB_10013be26;
      local_30 = in->use;
      local_18 = in->content;
      local_c = _xmlGetUTF8Char(local_18,(int *)&local_30);
      if ((int)local_c < 1) break;
      _snprintf((char *)local_48,0x14,"&#%d;",(ulong)local_c);
      _xmlBufferShrink(in,local_30);
      _xmlBufferAddHead(in,local_48,-1);
    }
    _snprintf(local_88,0x31,"0x%02X 0x%02X 0x%02X 0x%02X",(ulong)*in->content,(ulong)in->content[1],
              (ulong)in->content[2],(uint)in->content[3]);
    local_57 = 0;
    FUN_1001384a6(0x1773,"output conversion failed due to conv error, bytes %s\n",local_88);
    *in->content = ' ';
LAB_10013be26:
    local_a4 = local_24;
  }
  return local_a4;
}

