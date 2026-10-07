
xmlOutputBufferPtr _xmlOutputBufferCreateFile(FILE *file,xmlCharEncodingHandlerPtr encoder)

{
  xmlOutputBufferPtr local_30;
  
  if (DAT_1011b772c == 0) {
    _xmlRegisterDefaultOutputCallbacks();
  }
  if (file == (FILE *)0x0) {
    local_30 = (xmlOutputBufferPtr)0x0;
  }
  else {
    local_30 = _xmlAllocOutputBuffer(encoder);
    if (local_30 != (xmlOutputBufferPtr)0x0) {
      local_30->context = file;
      local_30->writecallback = FUN_100178600;
      local_30->closecallback = FUN_100178755;
    }
  }
  return local_30;
}

