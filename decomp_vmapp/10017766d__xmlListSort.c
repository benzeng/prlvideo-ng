
void _xmlListSort(xmlListPtr l)

{
  int iVar1;
  xmlListPtr l2;
  
  if (l != (xmlListPtr)0x0) {
    iVar1 = _xmlListEmpty(l);
    if (iVar1 == 0) {
      l2 = _xmlListDup(l);
      if (l2 != (xmlListPtr)0x0) {
        _xmlListClear(l);
        _xmlListMerge(l,l2);
        _xmlListDelete(l2);
      }
    }
  }
  return;
}

