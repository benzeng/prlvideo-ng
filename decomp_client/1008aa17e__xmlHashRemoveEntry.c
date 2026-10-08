
int _xmlHashRemoveEntry(xmlHashTablePtr table,xmlChar *name,xmlHashDeallocator f)

{
  int iVar1;
  
  iVar1 = _xmlHashRemoveEntry3(table,name,(xmlChar *)0x0,(xmlChar *)0x0,f);
  return iVar1;
}

