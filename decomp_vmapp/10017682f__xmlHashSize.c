
int _xmlHashSize(xmlHashTablePtr table)

{
  int local_14;
  
  if (table == (xmlHashTablePtr)0x0) {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(table + 0xc);
  }
  return local_14;
}

