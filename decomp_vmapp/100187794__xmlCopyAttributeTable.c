
xmlAttributeTablePtr _xmlCopyAttributeTable(xmlAttributeTablePtr table)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCopy(table,FUN_100187657);
  return pxVar1;
}

