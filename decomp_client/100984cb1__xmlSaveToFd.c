
long _xmlSaveToFd(int param_1,undefined8 param_2,undefined4 param_3)

{
  xmlOutputBufferPtr pxVar1;
  long local_38;
  
  local_38 = FUN_100982536(param_2,param_3);
  if (local_38 == 0) {
    local_38 = 0;
  }
  else {
    pxVar1 = _xmlOutputBufferCreateFd(param_1,*(xmlCharEncodingHandlerPtr *)(local_38 + 0x20));
    *(xmlOutputBufferPtr *)(local_38 + 0x28) = pxVar1;
    if (*(long *)(local_38 + 0x28) == 0) {
      FUN_1009824d3(local_38);
      local_38 = 0;
    }
  }
  return local_38;
}

