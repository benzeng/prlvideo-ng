
xmlOutputBufferPtr _xmlOutputBufferCreateFile(FILE *file,xmlCharEncodingHandlerPtr encoder)

{
  xmlOutputBufferPtr local_30;
  
  if (DAT_1023124ac == 0) {
    _xmlRegisterDefaultOutputCallbacks();
  }
  if (file == (FILE *)0x0) {
    local_30 = (xmlOutputBufferPtr)0x0;
  }
  else {
    local_30 = _xmlAllocOutputBuffer(encoder);
    if (local_30 != (xmlOutputBufferPtr)0x0) {
      local_30->context = file;
      local_30->writecallback = FUN_1008abf28;
      local_30->closecallback = FUN_1008ac07d;
    }
  }
  return local_30;
}

