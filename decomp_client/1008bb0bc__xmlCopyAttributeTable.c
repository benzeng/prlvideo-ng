
xmlAttributeTablePtr _xmlCopyAttributeTable(xmlAttributeTablePtr table)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCopy(table,FUN_1008baf7f);
  return pxVar1;
}

