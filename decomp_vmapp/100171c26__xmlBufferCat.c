
int _xmlBufferCat(xmlBufferPtr buf,xmlChar *str)

{
  int local_1c;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_1c = -1;
  }
  else if (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE) {
    local_1c = -1;
  }
  else if (str == (xmlChar *)0x0) {
    local_1c = -1;
  }
  else {
    local_1c = _xmlBufferAdd(buf,str,-1);
  }
  return local_1c;
}

