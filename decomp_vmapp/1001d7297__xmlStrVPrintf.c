
int _xmlStrVPrintf(xmlChar *buf,int len,xmlChar *msg,va_list ap)

{
  int local_3c;
  
  if ((buf == (xmlChar *)0x0) || (msg == (xmlChar *)0x0)) {
    local_3c = -1;
  }
  else {
    local_3c = _vsnprintf((char *)buf,(long)len,(char *)msg,ap);
    buf[(long)len + -1] = '\0';
  }
  return local_3c;
}

