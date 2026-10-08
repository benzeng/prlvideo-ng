
xmlChar * _xmlUTF8Strndup(xmlChar *utf,int len)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  long lVar5;
  xmlChar *pxVar6;
  xmlChar *local_40;
  
  if ((utf == (xmlChar *)0x0) || (len < 0)) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    iVar2 = _xmlUTF8Strsize(utf,len);
    local_40 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(iVar2 + 1));
    if (local_40 == (xmlChar *)0x0) {
      ppxVar3 = ___xmlGenericError();
      pxVar1 = *ppxVar3;
      ppvVar4 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar4,"malloc of %ld byte failed\n",(long)(len + 1));
      local_40 = (xmlChar *)0x0;
    }
    else {
      pxVar6 = local_40;
      for (lVar5 = (long)iVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pxVar6 = *utf;
        utf = utf + 1;
        pxVar6 = pxVar6 + 1;
      }
      local_40[iVar2] = '\0';
    }
  }
  return local_40;
}

