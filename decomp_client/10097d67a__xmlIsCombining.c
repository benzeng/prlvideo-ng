
int _xmlIsCombining(uint ch)

{
  int local_10;
  
  if (ch < 0x100) {
    local_10 = 0;
  }
  else {
    local_10 = _xmlCharInRange(ch,(xmlChRangeGroup *)&_xmlIsCombiningGroup);
  }
  return local_10;
}

