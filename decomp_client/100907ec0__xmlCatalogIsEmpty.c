
int _xmlCatalogIsEmpty(xmlCatalogPtr catal)

{
  int iVar1;
  int local_24;
  
  if (catal == (xmlCatalogPtr)0x0) {
    local_24 = -1;
  }
  else if (*(int *)catal == 1) {
    if (*(long *)(catal + 0x70) == 0) {
      local_24 = 1;
    }
    else if ((*(int *)(*(long *)(catal + 0x70) + 0x18) == 1) ||
            (*(int *)(*(long *)(catal + 0x70) + 0x18) == 2)) {
      if (*(long *)(*(long *)(catal + 0x70) + 0x10) == 0) {
        local_24 = 1;
      }
      else {
        local_24 = 0;
      }
    }
    else {
      local_24 = -1;
    }
  }
  else if (*(long *)(catal + 0x60) == 0) {
    local_24 = 1;
  }
  else {
    iVar1 = _xmlHashSize(*(xmlHashTablePtr *)(catal + 0x60));
    if (iVar1 == 0) {
      local_24 = 1;
    }
    else if (iVar1 < 0) {
      local_24 = -1;
    }
    else {
      local_24 = 0;
    }
  }
  return local_24;
}

