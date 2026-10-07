
undefined4 _xmlSaveClose(long param_1)

{
  undefined4 local_24;
  
  if (param_1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = _xmlSaveFlush(param_1);
    FUN_10024ebab(param_1);
  }
  return local_24;
}

