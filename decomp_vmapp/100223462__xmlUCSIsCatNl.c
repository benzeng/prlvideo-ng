
undefined4 _xmlUCSIsCatNl(int param_1)

{
  undefined4 local_10;
  
  if (((((param_1 < 0x16ee) || (0x16f0 < param_1)) && ((param_1 < 0x2160 || (0x2183 < param_1)))) &&
      ((param_1 != 0x3007 && ((param_1 < 0x3021 || (0x3029 < param_1)))))) &&
     (((param_1 < 0x3038 || (0x303a < param_1)) && (param_1 != 0x1034a)))) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

