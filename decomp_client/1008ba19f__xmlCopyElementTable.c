
xmlElementTablePtr _xmlCopyElementTable(xmlElementTablePtr table)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCopy(table,FUN_1008ba092);
  return pxVar1;
}

