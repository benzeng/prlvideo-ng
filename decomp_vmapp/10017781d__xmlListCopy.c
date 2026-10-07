
int _xmlListCopy(xmlListPtr cur,xmlListPtr old)

{
  int iVar1;
  int local_2c;
  undefined8 *local_10;
  
  if ((old == (xmlListPtr)0x0) || (cur == (xmlListPtr)0x0)) {
    local_2c = 1;
  }
  else {
    for (local_10 = (undefined8 *)**(undefined8 **)old; *(undefined8 **)old != local_10;
        local_10 = (undefined8 *)*local_10) {
      iVar1 = _xmlListInsert(cur,(void *)local_10[2]);
      if (iVar1 != 0) {
        _xmlListDelete(cur);
        return 1;
      }
    }
    local_2c = 0;
  }
  return local_2c;
}

