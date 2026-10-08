
int _xmlIsIdeographic(uint ch)

{
  undefined4 local_10;
  
  if ((ch < 0x100) ||
     ((((ch < 0x4e00 || (0x9fa5 < ch)) && (ch != 0x3007)) && ((ch < 0x3021 || (0x3029 < ch)))))) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}

