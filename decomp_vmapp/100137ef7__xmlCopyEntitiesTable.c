
xmlEntitiesTablePtr _xmlCopyEntitiesTable(xmlEntitiesTablePtr table)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCopy(table,FUN_100137d9b);
  return pxVar1;
}

