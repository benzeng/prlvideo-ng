
int _xmlFileRead(void *context,char *buffer,int len)

{
  size_t sVar1;
  int local_30;
  
  if ((context == (void *)0x0) || (buffer == (char *)0x0)) {
    local_30 = -1;
  }
  else {
    sVar1 = _fread(buffer,1,(long)len,context);
    local_30 = (int)sVar1;
    if (local_30 < 0) {
      FUN_1008ab73e(0,"fread()");
    }
  }
  return local_30;
}

