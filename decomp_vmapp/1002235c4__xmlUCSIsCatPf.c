
undefined4 _xmlUCSIsCatPf(int param_1)

{
  undefined4 local_10;
  
  if ((((param_1 == 0xbb) || (param_1 == 0x2019)) || (param_1 == 0x201d)) || (param_1 == 0x203a)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

