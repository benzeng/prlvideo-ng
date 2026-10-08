
void * _xmlLinkGetData(xmlLinkPtr lk)

{
  void *local_18;
  
  if (lk == (xmlLinkPtr)0x0) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = *(void **)(lk + 0x10);
  }
  return local_18;
}

