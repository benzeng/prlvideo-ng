
int _xmlListPushFront(xmlListPtr l,void *data)

{
  long *plVar1;
  xmlGenericErrorFunc pxVar2;
  long *plVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  int local_3c;
  
  if (l == (xmlListPtr)0x0) {
    local_3c = 0;
  }
  else {
    plVar1 = *(long **)l;
    plVar3 = (long *)(*(code *)_xmlMalloc)(0x18);
    if (plVar3 == (long *)0x0) {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"Cannot initialize memory for new link");
      local_3c = 0;
    }
    else {
      plVar3[2] = (long)data;
      *plVar3 = *plVar1;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar1 = (long)plVar3;
      plVar3[1] = (long)plVar1;
      local_3c = 1;
    }
  }
  return local_3c;
}

