
void _xmlBufferSetAllocationScheme(xmlBufferPtr buf,xmlBufferAllocationScheme scheme)

{
  if ((buf != (xmlBufferPtr)0x0) && (buf->alloc != XML_BUFFER_ALLOC_IMMUTABLE)) {
    buf->alloc = scheme;
  }
  return;
}

