
undefined4 _xmlUCSIsLatinExtendedAdditional(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x1e00) || (0x1eff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

