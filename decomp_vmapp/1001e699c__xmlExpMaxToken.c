
int _xmlExpMaxToken(xmlExpNodePtr expr)

{
  int local_14;
  
  if (expr == (xmlExpNodePtr)0x0) {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(expr + 8);
  }
  return local_14;
}

