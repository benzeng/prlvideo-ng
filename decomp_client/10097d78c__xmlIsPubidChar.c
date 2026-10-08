
int _xmlIsPubidChar(uint ch)

{
  uint local_10;
  
  if (ch < 0x100) {
    local_10 = (uint)(byte)(&_xmlIsPubidChar_tab)[ch];
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

