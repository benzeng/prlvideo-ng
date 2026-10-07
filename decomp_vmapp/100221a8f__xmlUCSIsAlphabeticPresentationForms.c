
undefined4 _xmlUCSIsAlphabeticPresentationForms(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0xfb00) || (0xfb4f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

