
long _xmlReaderForFile(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_38;
  
  local_38 = _xmlNewTextReaderFilename(param_1);
  if (local_38 == 0) {
    local_38 = 0;
  }
  else {
    FUN_10022c1df(local_38,0,0,param_2,param_3);
  }
  return local_38;
}

