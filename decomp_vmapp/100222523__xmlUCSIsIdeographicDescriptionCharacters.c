
undefined4 _xmlUCSIsIdeographicDescriptionCharacters(int param_1)

{
  undefined4 local_10;
  
  if ((param_1 < 0x2ff0) || (0x2fff < param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

