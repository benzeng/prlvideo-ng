
int _xmlOutputBufferClose(xmlOutputBufferPtr out)

{
  int local_28;
  int local_24;
  int local_c;
  
  local_c = 0;
  if (out == (xmlOutputBufferPtr)0x0) {
    local_28 = -1;
  }
  else {
    if (out->writecallback != (xmlOutputWriteCallback)0x0) {
      _xmlOutputBufferFlush(out);
    }
    if (out->closecallback != (xmlOutputCloseCallback)0x0) {
      local_c = (*out->closecallback)(out->context);
    }
    local_24 = out->written;
    if (out->conv != (xmlBufPtr)0x0) {
      _xmlBufferFree((xmlBufferPtr)out->conv);
      out->conv = (xmlBufPtr)0x0;
    }
    if (out->encoder != (xmlCharEncodingHandlerPtr)0x0) {
      _xmlCharEncCloseFunc(out->encoder);
    }
    if (out->buffer != (xmlBufPtr)0x0) {
      _xmlBufferFree((xmlBufferPtr)out->buffer);
      out->buffer = (xmlBufPtr)0x0;
    }
    if (out->error != 0) {
      local_c = -1;
    }
    (*(code *)_xmlFree)(out);
    if (local_c != 0) {
      local_24 = local_c;
    }
    local_28 = local_24;
  }
  return local_28;
}

