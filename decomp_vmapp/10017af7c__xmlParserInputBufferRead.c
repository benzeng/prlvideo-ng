
int _xmlParserInputBufferRead(xmlParserInputBufferPtr in,int len)

{
  int local_18;
  
  if ((in == (xmlParserInputBufferPtr)0x0) || (in->error != 0)) {
    local_18 = -1;
  }
  else if (in->readcallback == (xmlInputReadCallback)0x0) {
    if ((in->buffer == (xmlBufPtr)0x0) || (*(int *)(in->buffer + 0x10) != 2)) {
      local_18 = -1;
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = _xmlParserInputBufferGrow(in,len);
  }
  return local_18;
}

