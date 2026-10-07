
undefined4 _xmlUCSIsTaiXuanJingSymbols(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x1d300) || (0x1d35f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

