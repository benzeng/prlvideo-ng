
void _xmlListMerge(xmlListPtr l1,xmlListPtr l2)

{
  _xmlListCopy(l1,l2);
  _xmlListClear(l2);
  return;
}

