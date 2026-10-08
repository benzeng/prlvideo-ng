
void _xmlBufferWriteCHAR(xmlBufferPtr buf,xmlChar *string)

{
  if ((buf != (xmlBufferPtr)0x0) && (buf->alloc != XML_BUFFER_ALLOC_IMMUTABLE)) {
    _xmlBufferCat(buf,string);
  }
  return;
}

