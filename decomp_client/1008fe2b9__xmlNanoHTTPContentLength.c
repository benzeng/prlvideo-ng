
undefined4 _xmlNanoHTTPContentLength(long param_1)

{
  undefined4 local_24;
  
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = *(undefined4 *)(param_1 + 0x6c);
  }
  return local_24;
}

