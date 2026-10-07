
int _xmlParserInputBufferGrow(xmlParserInputBufferPtr in,int len)

{
  xmlChar *str;
  uint size;
  int iVar1;
  xmlBufferPtr pxVar2;
  int local_38;
  int local_34;
  int local_18;
  
  if ((in == (xmlParserInputBufferPtr)0x0) || (in->error != 0)) {
    local_38 = -1;
  }
  else {
    local_34 = len;
    if ((len < 0xfa1) && (len != 4)) {
      local_34 = 4000;
    }
    if (*(int *)(in->buffer + 0xc) - *(int *)(in->buffer + 8) < 1) {
      FUN_100177e16(0x60c,0);
      in->error = 0x60c;
      local_38 = -1;
    }
    else {
      size = *(int *)(in->buffer + 8) + local_34 + 1;
      if ((*(uint *)(in->buffer + 0xc) < size) &&
         (iVar1 = _xmlBufferResize((xmlBufferPtr)in->buffer,size), iVar1 == 0)) {
        FUN_10017789f("growing input buffer");
        in->error = 2;
        return -1;
      }
      str = (xmlChar *)(*(long *)in->buffer + (ulong)*(uint *)(in->buffer + 8));
      if (in->readcallback == (xmlInputReadCallback)0x0) {
        FUN_100177e16(0x60b,0);
        in->error = 0x60b;
        local_38 = -1;
      }
      else {
        local_18 = (*in->readcallback)(in->context,(char *)str,local_34);
        if (local_18 < 1) {
          in->readcallback = FUN_10017acb9;
        }
        if (local_18 < 0) {
          local_38 = -1;
        }
        else {
          if (in->encoder == (xmlCharEncodingHandlerPtr)0x0) {
            *(int *)(in->buffer + 8) = *(int *)(in->buffer + 8) + local_18;
            str[local_18] = '\0';
          }
          else {
            if (in->raw == (xmlBufPtr)0x0) {
              pxVar2 = _xmlBufferCreate();
              in->raw = (xmlBufPtr)pxVar2;
            }
            iVar1 = _xmlBufferAdd((xmlBufferPtr)in->raw,str,local_18);
            if (iVar1 != 0) {
              return -1;
            }
            iVar1 = *(int *)(in->raw + 8);
            local_18 = _xmlCharEncInFunc(in->encoder,(xmlBufferPtr)in->buffer,(xmlBufferPtr)in->raw)
            ;
            if (local_18 < 0) {
              FUN_100177e16(0x608,0);
              in->error = 0x608;
              return -1;
            }
            in->rawconsumed = in->rawconsumed + (ulong)(uint)(iVar1 - *(int *)(in->raw + 8));
          }
          local_38 = local_18;
        }
      }
    }
  }
  return local_38;
}

