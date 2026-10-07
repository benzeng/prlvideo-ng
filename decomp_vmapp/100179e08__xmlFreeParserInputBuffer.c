
void _xmlFreeParserInputBuffer(xmlParserInputBufferPtr in)

{
  if (in != (xmlParserInputBufferPtr)0x0) {
    if (in->raw != (xmlBufPtr)0x0) {
      _xmlBufferFree((xmlBufferPtr)in->raw);
      in->raw = (xmlBufPtr)0x0;
    }
    if (in->encoder != (xmlCharEncodingHandlerPtr)0x0) {
      _xmlCharEncCloseFunc(in->encoder);
    }
    if (in->closecallback != (xmlInputCloseCallback)0x0) {
      (*in->closecallback)(in->context);
    }
    if (in->buffer != (xmlBufPtr)0x0) {
      _xmlBufferFree((xmlBufferPtr)in->buffer);
      in->buffer = (xmlBufPtr)0x0;
    }
    (*(code *)_xmlFree)(in);
  }
  return;
}

