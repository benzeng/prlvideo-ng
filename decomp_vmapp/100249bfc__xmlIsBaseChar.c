
int _xmlIsBaseChar(uint ch)

{
  int local_14;
  int local_10;
  
  if (ch < 0x100) {
    if ((((((ch < 0x41) || (0x5a < ch)) && ((ch < 0x61 || (0x7a < ch)))) &&
         ((ch < 0xc0 || (0xd6 < ch)))) && ((ch < 0xd8 || (0xf6 < ch)))) && (ch < 0xf8)) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
    local_14 = local_10;
  }
  else {
    local_14 = _xmlCharInRange(ch,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
  }
  return local_14;
}

