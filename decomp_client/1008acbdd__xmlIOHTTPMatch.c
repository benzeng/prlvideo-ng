
int _xmlIOHTTPMatch(char *filename)

{
  int iVar1;
  uint local_14;
  
  iVar1 = _xmlStrncasecmp((xmlChar *)filename,(xmlChar *)"http://",7);
  local_14 = (uint)(iVar1 == 0);
  return local_14;
}

