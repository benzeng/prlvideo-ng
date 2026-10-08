
xmlListPtr _xmlListDup(xmlListPtr old)

{
  int iVar1;
  xmlListPtr local_28;
  
  if (old == (xmlListPtr)0x0) {
    local_28 = (xmlListPtr)0x0;
  }
  else {
    local_28 = _xmlListCreate((xmlListDeallocator)0x0,*(xmlListDataCompare *)(old + 0x10));
    if (local_28 == (xmlListPtr)0x0) {
      local_28 = (xmlListPtr)0x0;
    }
    else {
      iVar1 = _xmlListCopy(local_28,old);
      if (iVar1 != 0) {
        local_28 = (xmlListPtr)0x0;
      }
    }
  }
  return local_28;
}

