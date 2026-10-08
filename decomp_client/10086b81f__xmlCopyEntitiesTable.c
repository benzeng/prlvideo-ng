
xmlEntitiesTablePtr _xmlCopyEntitiesTable(xmlEntitiesTablePtr table)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCopy(table,FUN_10086b6c3);
  return pxVar1;
}

