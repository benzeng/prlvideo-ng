
int _xmlUTF8Charcmp(xmlChar *utf1,xmlChar *utf2)

{
  int len;
  undefined4 local_1c;
  
  if (utf1 == (xmlChar *)0x0) {
    if (utf2 == (xmlChar *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = -1;
    }
  }
  else {
    len = _xmlUTF8Size(utf1);
    local_1c = _xmlStrncmp(utf1,utf2,len);
  }
  return local_1c;
}

