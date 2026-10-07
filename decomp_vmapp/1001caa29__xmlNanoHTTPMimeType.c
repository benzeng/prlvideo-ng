
undefined8 _xmlNanoHTTPMimeType(long param_1)

{
  undefined8 local_28;
  
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0x90);
  }
  return local_28;
}

