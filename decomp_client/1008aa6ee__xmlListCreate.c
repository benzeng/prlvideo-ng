
xmlListPtr _xmlListCreate(xmlListDeallocator deallocator,xmlListDataCompare compare)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  long lVar4;
  xmlListPtr local_40;
  
  local_40 = (xmlListPtr)(*(code *)_xmlMalloc)(0x18);
  if (local_40 == (xmlListPtr)0x0) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Cannot initialize memory for list");
    local_40 = (xmlListPtr)0x0;
  }
  else {
    *(long *)local_40 = 0;
    *(long *)(local_40 + 8) = 0;
    *(long *)(local_40 + 0x10) = 0;
    lVar4 = (*(code *)_xmlMalloc)(0x18);
    *(long *)local_40 = lVar4;
    if (*(long *)local_40 == 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Cannot initialize memory for sentinel");
      (*(code *)_xmlFree)(local_40);
      local_40 = (xmlListPtr)0x0;
    }
    else {
      **(long **)local_40 = *(long *)local_40;
      *(long *)(*(long *)local_40 + 8) = *(long *)local_40;
      *(undefined8 *)(*(long *)local_40 + 0x10) = 0;
      if (deallocator != (xmlListDeallocator)0x0) {
        *(xmlListDeallocator *)(local_40 + 8) = deallocator;
      }
      if (compare == (xmlListDataCompare)0x0) {
        *(code **)(local_40 + 0x10) = FUN_1008aa4d6;
      }
      else {
        *(xmlListDataCompare *)(local_40 + 0x10) = compare;
      }
    }
  }
  return local_40;
}

