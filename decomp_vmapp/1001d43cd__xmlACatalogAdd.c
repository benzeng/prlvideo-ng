
int _xmlACatalogAdd(xmlCatalogPtr catal,xmlChar *type,xmlChar *orig,xmlChar *replace)

{
  int iVar1;
  void *userdata;
  xmlHashTablePtr pxVar2;
  int local_3c;
  int local_18;
  
  local_18 = -1;
  if (catal == (xmlCatalogPtr)0x0) {
    local_3c = -1;
  }
  else {
    if (*(int *)catal == 1) {
      local_18 = FUN_1001d16a5(*(undefined8 *)(catal + 0x70),type,orig,replace);
    }
    else {
      iVar1 = FUN_1001d31c4(type);
      if (iVar1 != 0) {
        userdata = (void *)FUN_1001cef6b(iVar1,orig,replace,0,0,0);
        if (*(long *)(catal + 0x60) == 0) {
          pxVar2 = _xmlHashCreate(10);
          *(xmlHashTablePtr *)(catal + 0x60) = pxVar2;
        }
        local_18 = _xmlHashAddEntry(*(xmlHashTablePtr *)(catal + 0x60),orig,userdata);
      }
    }
    local_3c = local_18;
  }
  return local_3c;
}

