
int _xmlListEmpty(xmlListPtr l)

{
  undefined4 local_14;
  
  if (l == (xmlListPtr)0x0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)(**(long **)l == *(long *)l);
  }
  return local_14;
}

