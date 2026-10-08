
undefined4 _xmlUCSIsCatZs(int param_1)

{
  undefined4 local_10;
  
  if (((((param_1 == 0x20) || (param_1 == 0xa0)) || (param_1 == 0x1680)) || (param_1 == 0x180e)) ||
     (((0x1fff < param_1 && (param_1 < 0x200c)) ||
      ((param_1 == 0x202f || ((param_1 == 0x205f || (param_1 == 0x3000)))))))) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

