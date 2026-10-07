
int _xmlParserInputBufferPush(xmlParserInputBufferPtr in,int len,char *buf)

{
  int iVar1;
  xmlBufferPtr pxVar2;
  int local_34;
  int local_14;
  
  if (len < 0) {
    local_34 = 0;
  }
  else if ((in == (xmlParserInputBufferPtr)0x0) || (in->error != 0)) {
    local_34 = -1;
  }
  else {
    if (in->encoder == (xmlCharEncodingHandlerPtr)0x0) {
      iVar1 = _xmlBufferAdd((xmlBufferPtr)in->buffer,(xmlChar *)buf,len);
      local_14 = len;
      if (iVar1 != 0) {
        return -1;
      }
    }
    else {
      if (in->raw == (xmlBufPtr)0x0) {
        pxVar2 = _xmlBufferCreate();
        in->raw = (xmlBufPtr)pxVar2;
      }
      iVar1 = _xmlBufferAdd((xmlBufferPtr)in->raw,(xmlChar *)buf,len);
      if (iVar1 != 0) {
        return -1;
      }
      iVar1 = *(int *)(in->raw + 8);
      local_14 = _xmlCharEncInFunc(in->encoder,(xmlBufferPtr)in->buffer,(xmlBufferPtr)in->raw);
      if (local_14 < 0) {
        FUN_100177e16(0x608,0);
        in->error = 0x608;
        return -1;
      }
      in->rawconsumed = in->rawconsumed + (ulong)(uint)(iVar1 - *(int *)(in->raw + 8));
    }
    local_34 = local_14;
  }
  return local_34;
}

