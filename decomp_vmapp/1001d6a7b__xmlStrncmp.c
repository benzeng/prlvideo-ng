
int _xmlStrncmp(xmlChar *str1,xmlChar *str2,int len)

{
  undefined4 local_20;
  
  if (len < 1) {
    local_20 = 0;
  }
  else if (str1 == str2) {
    local_20 = 0;
  }
  else if (str1 == (xmlChar *)0x0) {
    local_20 = -1;
  }
  else if (str2 == (xmlChar *)0x0) {
    local_20 = 1;
  }
  else {
    local_20 = _strncmp((char *)str1,(char *)str2,(long)len);
  }
  return local_20;
}

