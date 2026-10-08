
xmlOutputBufferPtr
_xmlOutputBufferCreateIO
          (xmlOutputWriteCallback iowrite,xmlOutputCloseCallback ioclose,void *ioctx,
          xmlCharEncodingHandlerPtr encoder)

{
  xmlOutputBufferPtr local_40;
  
  if (iowrite == (xmlOutputWriteCallback)0x0) {
    local_40 = (xmlOutputBufferPtr)0x0;
  }
  else {
    local_40 = _xmlAllocOutputBuffer(encoder);
    if (local_40 != (xmlOutputBufferPtr)0x0) {
      local_40->context = ioctx;
      local_40->writecallback = iowrite;
      local_40->closecallback = ioclose;
    }
  }
  return local_40;
}

