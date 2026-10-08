
int _xmlCharEncCloseFunc(xmlCharEncodingHandler *handler)

{
  int local_24;
  
  if (handler == (xmlCharEncodingHandler *)0x0) {
    local_24 = -1;
  }
  else if (handler->name == (char *)0x0) {
    local_24 = -1;
  }
  else {
    local_24 = 0;
  }
  return local_24;
}

