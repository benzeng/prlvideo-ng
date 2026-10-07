
int _xmlListRemoveFirst(xmlListPtr l,void *data)

{
  long lVar1;
  undefined4 local_2c;
  
  if (l == (xmlListPtr)0x0) {
    local_2c = 0;
  }
  else {
    lVar1 = FUN_100176cd0(l,data);
    if (lVar1 == 0) {
      local_2c = 0;
    }
    else {
      FUN_100176b4c(l,lVar1);
      local_2c = 1;
    }
  }
  return local_2c;
}

