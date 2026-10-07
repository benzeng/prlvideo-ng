
undefined4 _xmlUCSIsCatPi(int param_1)

{
  undefined4 local_10;
  
  if ((((param_1 == 0xab) || (param_1 == 0x2018)) || ((0x201a < param_1 && (param_1 < 0x201d)))) ||
     ((param_1 == 0x201f || (param_1 == 0x2039)))) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

