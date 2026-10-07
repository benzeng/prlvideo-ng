
xmlNotationTablePtr _xmlCopyNotationTable(xmlNotationTablePtr table)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCopy(table,FUN_100187d30);
  return pxVar1;
}

