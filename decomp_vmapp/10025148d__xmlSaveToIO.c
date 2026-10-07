
long _xmlSaveToIO(xmlOutputWriteCallback param_1,xmlOutputCloseCallback param_2,void *param_3,
                 undefined8 param_4,undefined4 param_5)

{
  xmlOutputBufferPtr pxVar1;
  long local_48;
  
  local_48 = FUN_10024ec0e(param_4,param_5);
  if (local_48 == 0) {
    local_48 = 0;
  }
  else {
    pxVar1 = _xmlOutputBufferCreateIO
                       (param_1,param_2,param_3,*(xmlCharEncodingHandlerPtr *)(local_48 + 0x20));
    *(xmlOutputBufferPtr *)(local_48 + 0x28) = pxVar1;
    if (*(long *)(local_48 + 0x28) == 0) {
      FUN_10024ebab(local_48);
      local_48 = 0;
    }
  }
  return local_48;
}

