
int _xmlIOHTTPRead(void *context,char *buffer,int len)

{
  undefined4 local_20;
  
  if ((buffer == (char *)0x0) || (len < 0)) {
    local_20 = -1;
  }
  else {
    local_20 = _xmlNanoHTTPRead(context,buffer,len);
  }
  return local_20;
}

