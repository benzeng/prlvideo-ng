
undefined4 _xmlUCSIsBoxDrawing(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x2500) || (0x257f < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

