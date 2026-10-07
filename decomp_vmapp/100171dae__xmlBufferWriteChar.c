
void _xmlBufferWriteChar(xmlBufferPtr buf,char *string)

{
  if ((buf != (xmlBufferPtr)0x0) && (buf->alloc != XML_BUFFER_ALLOC_IMMUTABLE)) {
    _xmlBufferCCat(buf,string);
  }
  return;
}

