
void * _xmlCreateURI(void)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  void *local_30;
  
  local_30 = (void *)(*(code *)_xmlMalloc)(0x50);
  if (local_30 == (void *)0x0) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"xmlCreateURI: out of memory\n");
    local_30 = (void *)0x0;
  }
  else {
    _memset(local_30,0,0x50);
  }
  return local_30;
}

