
int _xmlBufferAdd(xmlBufferPtr buf,xmlChar *str,int len)

{
  uint size;
  int iVar1;
  int local_30;
  int local_2c;
  
  if ((str == (xmlChar *)0x0) || (buf == (xmlBufferPtr)0x0)) {
    local_30 = -1;
  }
  else if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
    local_30 = -1;
  }
  else if (len < -1) {
    local_30 = -1;
  }
  else if (len == 0) {
    local_30 = 0;
  }
  else {
    local_2c = len;
    if (len < 0) {
      local_2c = _xmlStrlen(str);
    }
    if (local_2c < 1) {
      local_30 = -1;
    }
    else {
      size = buf->use + local_2c + 2;
      if ((buf->size < size) && (iVar1 = _xmlBufferResize(buf,size), iVar1 == 0)) {
        FUN_1008991e0("growing buffer");
        return 2;
      }
      _memmove(buf->content + buf->use,str,(long)local_2c);
      buf->use = buf->use + local_2c;
      buf->content[buf->use] = '\0';
      local_30 = 0;
    }
  }
  return local_30;
}

