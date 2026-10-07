
undefined4 FUN_1001a2396(long param_1,xmlChar *param_2)

{
  xmlChar *pxVar1;
  int iVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlChar *local_10;
  
  pxVar3 = _xmlStrdup(param_2);
  local_10 = pxVar3;
  do {
    pxVar1 = local_10;
    if ((local_10 == (xmlChar *)0x0) || (*local_10 == '\0')) {
      (*(code *)_xmlFree)(pxVar3);
      return 0;
    }
    pxVar4 = _xmlStrchr(local_10,'=');
    if (pxVar4 == (xmlChar *)0x0) {
      _fwrite("setns: prefix=[nsuri] required\n",1,0x1f,*(FILE **)(param_1 + 0x28));
      (*(code *)_xmlFree)(pxVar3);
      return 0xffffffff;
    }
    *pxVar4 = '\0';
    pxVar4 = pxVar4 + 1;
    local_10 = _xmlStrchr(pxVar4,' ');
    if (local_10 != (xmlChar *)0x0) {
      *local_10 = '\0';
      local_10 = local_10 + 1;
    }
    iVar2 = _xmlXPathRegisterNs(*(undefined8 *)(param_1 + 0x18),pxVar1,pxVar4);
  } while (iVar2 == 0);
  _fprintf(*(FILE **)(param_1 + 0x28),
           "Error: unable to register NS with prefix=\"%s\" and href=\"%s\"\n",pxVar1,pxVar4);
  (*(code *)_xmlFree)(pxVar3);
  return 0xffffffff;
}

