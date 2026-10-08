
xmlChar * _xmlBufferContent(xmlBufferPtr buf)

{
  xmlChar *local_18;
  
  if (buf == (xmlBufferPtr)0x0) {
    local_18 = (xmlChar *)0x0;
  }
  else {
    local_18 = buf->content;
  }
  return local_18;
}

