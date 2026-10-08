
int _xmlBufferCCat(xmlBufferPtr buf,char *str)

{
  uint uVar1;
  int iVar2;
  int local_2c;
  xmlChar *local_10;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_2c = -1;
  }
  else if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
    local_2c = -1;
  }
  else {
    local_10 = (xmlChar *)str;
    if (str == (char *)0x0) {
      local_2c = -1;
    }
    else {
      for (; *local_10 != '\0'; local_10 = local_10 + 1) {
        if ((buf->size <= buf->use + 10) &&
           (iVar2 = _xmlBufferResize(buf,buf->use + 10), iVar2 == 0)) {
          FUN_1008991e0("growing buffer");
          return 2;
        }
        uVar1 = buf->use;
        buf->content[uVar1] = *local_10;
        buf->use = uVar1 + 1;
      }
      buf->content[buf->use] = '\0';
      local_2c = 0;
    }
  }
  return local_2c;
}

