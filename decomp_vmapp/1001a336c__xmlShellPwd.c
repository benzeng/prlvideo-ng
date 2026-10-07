
int _xmlShellPwd(xmlShellCtxtPtr ctxt,char *buffer,xmlNodePtr node,xmlNodePtr node2)

{
  xmlChar *pxVar1;
  int local_3c;
  
  if ((node == (xmlNodePtr)0x0) || (buffer == (char *)0x0)) {
    local_3c = -1;
  }
  else {
    pxVar1 = _xmlGetNodePath(node);
    if (pxVar1 == (xmlChar *)0x0) {
      local_3c = -1;
    }
    else {
      _snprintf(buffer,499,"%s",pxVar1);
      buffer[499] = '0';
      (*(code *)_xmlFree)(pxVar1);
      local_3c = 0;
    }
  }
  return local_3c;
}

