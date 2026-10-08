
xmlOutputBufferPtr _xmlOutputBufferCreateFd(int fd,xmlCharEncodingHandlerPtr encoder)

{
  xmlOutputBufferPtr local_30;
  
  if (fd < 0) {
    local_30 = (xmlOutputBufferPtr)0x0;
  }
  else {
    local_30 = _xmlAllocOutputBuffer(encoder);
    if (local_30 != (xmlOutputBufferPtr)0x0) {
      local_30->context = (void *)(long)fd;
      local_30->writecallback = FUN_1008abbec;
      local_30->closecallback = (xmlOutputCloseCallback)0x0;
    }
  }
  return local_30;
}

