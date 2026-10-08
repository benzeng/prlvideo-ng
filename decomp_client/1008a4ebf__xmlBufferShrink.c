
int _xmlBufferShrink(xmlBufferPtr buf,uint len)

{
  uint local_18;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_18 = 0xffffffff;
  }
  else if (len == 0) {
    local_18 = 0;
  }
  else if (buf->use < len) {
    local_18 = 0xffffffff;
  }
  else {
    buf->use = buf->use - len;
    local_18 = len;
    if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
      buf->content = buf->content + len;
    }
    else {
      _memmove(buf->content,buf->content + len,(ulong)buf->use);
      buf->content[buf->use] = '\0';
    }
  }
  return local_18;
}

