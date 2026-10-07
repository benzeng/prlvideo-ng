
int _xmlHashRemoveEntry2(xmlHashTablePtr table,xmlChar *name,xmlChar *name2,xmlHashDeallocator f)

{
  int iVar1;
  
  iVar1 = _xmlHashRemoveEntry3(table,name,name2,(xmlChar *)0x0,f);
  return iVar1;
}

