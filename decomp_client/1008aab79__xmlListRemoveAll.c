
int _xmlListRemoveAll(xmlListPtr l,void *data)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_c;
  
  local_c = 0;
  if (l == (xmlListPtr)0x0) {
    local_2c = 0;
  }
  else {
    while( true ) {
      iVar1 = _xmlListRemoveFirst(l,data);
      if (iVar1 == 0) break;
      local_c = local_c + 1;
    }
    local_2c = local_c;
  }
  return local_2c;
}

