
undefined4 _xmlSaveSetEscape(long param_1,undefined8 param_2)

{
  undefined4 local_1c;
  
  if (param_1 == 0) {
    local_1c = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x90) = param_2;
    local_1c = 0;
  }
  return local_1c;
}

