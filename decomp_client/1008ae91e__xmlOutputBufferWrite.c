
int _xmlOutputBufferWrite(xmlOutputBufferPtr out,int len,char *buf)

{
  int iVar1;
  xmlBufferPtr pxVar2;
  int local_34;
  xmlChar *local_30;
  int local_24;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if ((out == (xmlOutputBufferPtr)0x0) || (out->error != 0)) {
    local_34 = -1;
  }
  else if (len < 0) {
    local_34 = 0;
  }
  else {
    local_30 = (xmlChar *)buf;
    local_24 = len;
    if (out->error == 0) {
      do {
        local_c = local_24;
        if (16000 < local_24) {
          local_c = 16000;
        }
        if (out->encoder == (xmlCharEncodingHandlerPtr)0x0) {
          iVar1 = _xmlBufferAdd((xmlBufferPtr)out->buffer,local_30,local_c);
          if (iVar1 != 0) {
            return -1;
          }
          local_18 = *(int *)(out->buffer + 8);
        }
        else {
          if (out->conv == (xmlBufPtr)0x0) {
            pxVar2 = _xmlBufferCreate();
            out->conv = (xmlBufPtr)pxVar2;
          }
          iVar1 = _xmlBufferAdd((xmlBufferPtr)out->buffer,local_30,local_c);
          if (iVar1 != 0) {
            return -1;
          }
          if ((*(uint *)(out->buffer + 8) < 4000) && (local_c == local_24)) break;
          iVar1 = _xmlCharEncOutFunc(out->encoder,(xmlBufferPtr)out->conv,(xmlBufferPtr)out->buffer)
          ;
          if ((iVar1 < 0) && (iVar1 != -3)) {
            FUN_1008ab73e(0x608,0);
            out->error = 0x608;
            return -1;
          }
          local_18 = *(int *)(out->conv + 8);
        }
        local_30 = local_30 + local_c;
        local_24 = local_24 - local_c;
        if ((local_18 < 4000) && (local_24 < 1)) break;
        if (out->writecallback != (xmlOutputWriteCallback)0x0) {
          if (out->encoder == (xmlCharEncodingHandlerPtr)0x0) {
            local_14 = (*out->writecallback)(out->context,*(char **)out->buffer,local_18);
            if (-1 < (int)local_14) {
              _xmlBufferShrink((xmlBufferPtr)out->buffer,local_14);
            }
          }
          else {
            local_14 = (*out->writecallback)(out->context,*(char **)out->conv,local_18);
            if (-1 < (int)local_14) {
              _xmlBufferShrink((xmlBufferPtr)out->conv,local_14);
            }
          }
          if ((int)local_14 < 0) {
            FUN_1008ab73e(0x60a,0);
            out->error = 0x60a;
            return local_14;
          }
          out->written = out->written + local_14;
        }
        local_10 = local_10 + local_18;
      } while (0 < local_24);
      local_34 = local_10;
    }
    else {
      local_34 = -1;
    }
  }
  return local_34;
}

