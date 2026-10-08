
undefined4 _xmlUCSIsCatCo(int param_1)

{
  undefined4 local_10;
  
  if ((((param_1 == 0xe000) || (param_1 == 0xf8ff)) || (param_1 == 0xf0000)) ||
     (((param_1 == 0xffffd || (param_1 == 0x100000)) || (param_1 == 0x10fffd)))) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

