
void * _xmlListSearch(xmlListPtr l,void *data)

{
  long lVar1;
  undefined8 local_30;
  
  if (l == (xmlListPtr)0x0) {
    local_30 = (void *)0x0;
  }
  else {
    lVar1 = FUN_1008aa5f8(l,data);
    if (lVar1 == 0) {
      local_30 = (void *)0x0;
    }
    else {
      local_30 = *(void **)(lVar1 + 0x10);
    }
  }
  return local_30;
}

