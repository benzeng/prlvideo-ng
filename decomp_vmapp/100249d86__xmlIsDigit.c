
int _xmlIsDigit(uint ch)

{
  int local_14;
  int local_10;
  
  if (ch < 0x100) {
    if ((ch < 0x30) || (0x39 < ch)) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
    local_14 = local_10;
  }
  else {
    local_14 = _xmlCharInRange(ch,(xmlChRangeGroup *)&_xmlIsDigitGroup);
  }
  return local_14;
}

