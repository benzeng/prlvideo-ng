
undefined4 _xmlUCSIsCJKUnifiedIdeographsExtensionB(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x20000) || (0x2a6df < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

