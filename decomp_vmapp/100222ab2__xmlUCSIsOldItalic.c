
undefined4 _xmlUCSIsOldItalic(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x10300) || (0x1032f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

