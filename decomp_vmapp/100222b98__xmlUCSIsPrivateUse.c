
undefined4 _xmlUCSIsPrivateUse(int param_1)

{
  undefined4 local_10;
  
  if ((((param_1 < 0xe000) || (0xf8ff < param_1)) && ((param_1 < 0xf0000 || (0xfffff < param_1))))
     && ((param_1 < 0x100000 || (0x10ffff < param_1)))) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

