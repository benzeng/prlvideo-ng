
int _xmlIsExtender(uint ch)

{
  uint local_10;
  
  if (ch < 0x100) {
    local_10 = (uint)(ch == 0xb7);
  }
  else {
    local_10 = _xmlCharInRange(ch,(xmlChRangeGroup *)&_xmlIsExtenderGroup);
  }
  return local_10;
}

