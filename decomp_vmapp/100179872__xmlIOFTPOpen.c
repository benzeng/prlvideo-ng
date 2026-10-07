
void * _xmlIOFTPOpen(char *filename)

{
  void *pvVar1;
  
  pvVar1 = (void *)_xmlNanoFTPOpen(filename);
  return pvVar1;
}

