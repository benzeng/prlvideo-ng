
int _xmlExpIsNillable(xmlExpNodePtr expr)

{
  uint local_14;
  
  if (expr == (xmlExpNodePtr)0x0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (byte)expr[1] & 1;
  }
  return local_14;
}

