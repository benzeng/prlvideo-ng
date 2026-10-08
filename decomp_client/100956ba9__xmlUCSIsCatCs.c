
undefined4 _xmlUCSIsCatCs(int param_1)

{
  undefined4 local_10;
  
  if ((((param_1 == 0xd800) || ((0xdb7e < param_1 && (param_1 < 0xdb81)))) ||
      ((0xdbfe < param_1 && (param_1 < 0xdc01)))) || (param_1 == 0xdfff)) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

