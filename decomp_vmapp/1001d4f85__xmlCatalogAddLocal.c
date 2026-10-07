
void * _xmlCatalogAddLocal(void *catalogs,xmlChar *URL)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  void *pvVar4;
  void *local_40;
  long *local_28;
  
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  local_40 = catalogs;
  if (URL != (xmlChar *)0x0) {
    if (DAT_1011b7f00 != 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Adding document catalog %s\n",URL);
    }
    pvVar4 = (void *)FUN_1001cef6b(1,0,URL,0,DAT_101111310,0);
    if ((pvVar4 != (void *)0x0) && (local_40 = pvVar4, local_28 = catalogs, catalogs != (void *)0x0)
       ) {
      for (; *local_28 != 0; local_28 = (long *)*local_28) {
      }
      *local_28 = (long)pvVar4;
      local_40 = catalogs;
    }
  }
  return local_40;
}

