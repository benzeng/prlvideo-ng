
int _xmlOutputBufferFlush(xmlOutputBufferPtr out)

{
  int iVar1;
  uint local_24;
  uint local_c;
  
  local_c = 0;
  if ((out == (xmlOutputBufferPtr)0x0) || (out->error != 0)) {
    local_24 = 0xffffffff;
  }
  else {
    if (((out->conv != (xmlBufPtr)0x0) && (out->encoder != (xmlCharEncodingHandlerPtr)0x0)) &&
       (iVar1 = _xmlCharEncOutFunc(out->encoder,(xmlBufferPtr)out->conv,(xmlBufferPtr)out->buffer),
       iVar1 < 0)) {
      FUN_100177e16(0x608,0);
      out->error = 0x608;
      return -1;
    }
    if (((out->conv == (xmlBufPtr)0x0) || (out->encoder == (xmlCharEncodingHandlerPtr)0x0)) ||
       (out->writecallback == (xmlOutputWriteCallback)0x0)) {
      if ((out->writecallback != (xmlOutputWriteCallback)0x0) &&
         (local_c = (*out->writecallback)
                              (out->context,*(char **)out->buffer,*(int *)(out->buffer + 8)),
         -1 < (int)local_c)) {
        _xmlBufferShrink((xmlBufferPtr)out->buffer,local_c);
      }
    }
    else {
      local_c = (*out->writecallback)(out->context,*(char **)out->conv,*(int *)(out->conv + 8));
      if (-1 < (int)local_c) {
        _xmlBufferShrink((xmlBufferPtr)out->conv,local_c);
      }
    }
    if ((int)local_c < 0) {
      FUN_100177e16(0x609,0);
      out->error = 0x609;
      local_24 = local_c;
    }
    else {
      out->written = out->written + local_c;
      local_24 = local_c;
    }
  }
  return local_24;
}

