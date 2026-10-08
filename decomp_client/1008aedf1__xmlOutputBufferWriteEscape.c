
int _xmlOutputBufferWriteEscape
              (xmlOutputBufferPtr out,xmlChar *str,xmlCharEncodingOutputFunc escaping)

{
  xmlChar xVar1;
  xmlBufferPtr pxVar2;
  long lVar3;
  xmlChar *pxVar4;
  int local_44;
  xmlCharEncodingOutputFunc local_40;
  uchar *local_38;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_1c = 0;
  local_14 = 0;
  if ((((out == (xmlOutputBufferPtr)0x0) || (out->error != 0)) || (str == (xmlChar *)0x0)) ||
     ((out->buffer == (xmlBufPtr)0x0 || (*(int *)(out->buffer + 0x10) == 2)))) {
    local_44 = -1;
  }
  else {
    lVar3 = -1;
    pxVar4 = str;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      xVar1 = *pxVar4;
      pxVar4 = pxVar4 + 1;
    } while (xVar1 != '\0');
    local_c = ~(uint)lVar3 - 1;
    if (local_c < 0) {
      local_44 = 0;
    }
    else {
      if (out->error == 0) {
        local_40 = escaping;
        local_38 = str;
        if (escaping == (xmlCharEncodingOutputFunc)0x0) {
          local_40 = FUN_1008aebc4;
        }
        do {
          local_10 = local_14;
          local_24 = local_c;
          local_20 = (*(int *)(out->buffer + 0xc) - *(int *)(out->buffer + 8)) + -1;
          if (out->encoder == (xmlCharEncodingHandlerPtr)0x0) {
            local_18 = (*local_40)((uchar *)(*(long *)out->buffer +
                                            (ulong)*(uint *)(out->buffer + 8)),&local_20,local_38,
                                   &local_24);
            if (((int)local_18 < 0) || (local_20 == 0)) {
              return -1;
            }
            *(int *)(out->buffer + 8) = *(int *)(out->buffer + 8) + local_20;
            *(undefined1 *)(*(long *)out->buffer + (ulong)*(uint *)(out->buffer + 8)) = 0;
            local_1c = *(int *)(out->buffer + 8);
          }
          else {
            if (out->conv == (xmlBufPtr)0x0) {
              pxVar2 = _xmlBufferCreate();
              out->conv = (xmlBufPtr)pxVar2;
            }
            local_18 = (*local_40)((uchar *)(*(long *)out->buffer +
                                            (ulong)*(uint *)(out->buffer + 8)),&local_20,local_38,
                                   &local_24);
            if (((int)local_18 < 0) || (local_20 == 0)) {
              return -1;
            }
            *(int *)(out->buffer + 8) = *(int *)(out->buffer + 8) + local_20;
            *(undefined1 *)(*(long *)out->buffer + (ulong)*(uint *)(out->buffer + 8)) = 0;
            if ((*(uint *)(out->buffer + 8) < 4000) && (local_24 == local_c)) {
              return local_14;
            }
            local_18 = _xmlCharEncOutFunc(out->encoder,(xmlBufferPtr)out->conv,
                                          (xmlBufferPtr)out->buffer);
            if (((int)local_18 < 0) && (local_18 != 0xfffffffd)) {
              FUN_1008ab73e(0x608,0);
              out->error = 0x608;
              return -1;
            }
            local_1c = *(int *)(out->conv + 8);
          }
          local_38 = local_38 + local_24;
          local_c = local_c - local_24;
          if ((local_1c < 4000) && (local_c < 1)) {
            return local_14;
          }
          if (out->writecallback == (xmlOutputWriteCallback)0x0) {
            if ((uint)(*(int *)(out->buffer + 0xc) - *(int *)(out->buffer + 8)) < 4000) {
              _xmlBufferResize((xmlBufferPtr)out->buffer,*(int *)(out->buffer + 0xc) + 4000);
            }
          }
          else {
            if (out->encoder == (xmlCharEncodingHandlerPtr)0x0) {
              local_18 = (*out->writecallback)(out->context,*(char **)out->buffer,local_1c);
              if (-1 < (int)local_18) {
                _xmlBufferShrink((xmlBufferPtr)out->buffer,local_18);
              }
            }
            else {
              local_18 = (*out->writecallback)(out->context,*(char **)out->conv,local_1c);
              if (-1 < (int)local_18) {
                _xmlBufferShrink((xmlBufferPtr)out->conv,local_18);
              }
            }
            if ((int)local_18 < 0) {
              FUN_1008ab73e(0x60a,0);
              out->error = 0x60a;
              return local_18;
            }
            out->written = out->written + local_18;
          }
          local_14 = local_14 + local_1c;
          if (local_c < 1) {
            return local_14;
          }
        } while (local_10 != local_14);
        return local_14;
      }
      local_44 = -1;
    }
  }
  return local_44;
}

