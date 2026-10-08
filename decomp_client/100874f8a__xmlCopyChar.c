
undefined4 _xmlCopyChar(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined4 local_20;
  
  if (param_2 == (undefined1 *)0x0) {
    local_20 = 0;
  }
  else if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    local_20 = 1;
  }
  else {
    local_20 = _xmlCopyCharMultiByte(param_2,param_3);
  }
  return local_20;
}

