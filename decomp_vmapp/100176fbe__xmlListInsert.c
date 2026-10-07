
int _xmlListInsert(xmlListPtr l,void *data)

{
  xmlGenericErrorFunc pxVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  int local_3c;
  
  if (l == (xmlListPtr)0x0) {
    local_3c = 1;
  }
  else {
    lVar3 = FUN_100176bec(l,data);
    plVar4 = (long *)(*(code *)_xmlMalloc)(0x18);
    if (plVar4 == (long *)0x0) {
      ppxVar5 = ___xmlGenericError();
      pxVar1 = *ppxVar5;
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar6,"Cannot initialize memory for new link");
      local_3c = 1;
    }
    else {
      plVar4[2] = (long)data;
      plVar2 = *(long **)(lVar3 + 8);
      *plVar4 = *plVar2;
      *(long **)(*plVar2 + 8) = plVar4;
      *plVar2 = (long)plVar4;
      plVar4[1] = (long)plVar2;
      local_3c = 0;
    }
  }
  return local_3c;
}

