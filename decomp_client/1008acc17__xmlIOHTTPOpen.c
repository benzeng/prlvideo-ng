
void * _xmlIOHTTPOpen(char *filename)

{
  void *pvVar1;
  
  pvVar1 = (void *)_xmlNanoHTTPOpen(filename,0);
  return pvVar1;
}

