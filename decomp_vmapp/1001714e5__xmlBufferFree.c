
void _xmlBufferFree(xmlBufferPtr buf)

{
  if (buf != (xmlBufferPtr)0x0) {
    if ((buf->content != (xmlChar *)0x0) && (buf->alloc != XML_BUFFER_ALLOC_IMMUTABLE)) {
      (*(code *)_xmlFree)(buf->content);
    }
    (*(code *)_xmlFree)(buf);
  }
  return;
}

