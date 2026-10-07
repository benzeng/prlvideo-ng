
int _xmlListAppend(xmlListPtr l,void *data)

{
  xmlGenericErrorFunc pxVar1;
  long *plVar2;
  long *plVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  int local_3c;
  
  if (l == (xmlListPtr)0x0) {
    local_3c = 1;
  }
  else {
    plVar2 = (long *)FUN_100176c5d(l,data);
    plVar3 = (long *)(*(code *)_xmlMalloc)(0x18);
    if (plVar3 == (long *)0x0) {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Cannot initialize memory for new link");
      local_3c = 0;
    }
    else {
      plVar3[2] = (long)data;
      *plVar3 = *plVar2;
      *(long **)(*plVar2 + 8) = plVar3;
      *plVar2 = (long)plVar3;
      plVar3[1] = (long)plVar2;
      local_3c = 1;
    }
  }
  return local_3c;
}

