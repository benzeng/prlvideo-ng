
char * FUN_10022b43b(char *param_1,va_list param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  char *pcVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  int local_30;
  char *local_20;
  
  pcVar3 = (char *)(*(code *)_xmlMallocAtomic)(0x96);
  if (pcVar3 == (char *)0x0) {
    ppxVar4 = ___xmlGenericError();
    pxVar1 = *ppxVar4;
    ppvVar5 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar5,"xmlMalloc failed !\n");
  }
  else {
    local_30 = 0x96;
    do {
      local_20 = pcVar3;
      iVar2 = _vsnprintf(local_20,(long)local_30,param_1,param_2);
      if ((-1 < iVar2) && (iVar2 < local_30)) {
        return local_20;
      }
      if (iVar2 < 0) {
        local_30 = local_30 + 100;
      }
      else {
        local_30 = local_30 + iVar2 + 1;
      }
      pcVar3 = (char *)(*(code *)_xmlRealloc)(local_20,(long)local_30);
    } while (pcVar3 != (char *)0x0);
    ppxVar4 = ___xmlGenericError();
    pxVar1 = *ppxVar4;
    ppvVar5 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar5,"xmlRealloc failed !\n");
    (*(code *)_xmlFree)(local_20);
  }
  return (char *)0x0;
}

