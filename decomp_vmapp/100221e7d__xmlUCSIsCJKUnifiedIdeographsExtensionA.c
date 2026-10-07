
undefined4 _xmlUCSIsCJKUnifiedIdeographsExtensionA(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x3400) || (0x4dbf < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

