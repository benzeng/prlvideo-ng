
int _xmlBufferLength(xmlBufferPtr buf)

{
  uint local_14;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = buf->use;
  }
  return local_14;
}

