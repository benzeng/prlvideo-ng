
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

xmlEntitiesTablePtr _xmlCreateEntitiesTable(void)

{
  xmlHashTablePtr pxVar1;
  
  pxVar1 = _xmlHashCreate(0);
  return pxVar1;
}

