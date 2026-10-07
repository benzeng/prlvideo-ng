
int _xmlHashUpdateEntry(xmlHashTablePtr table,xmlChar *name,void *userdata,xmlHashDeallocator f)

{
  int iVar1;
  
  iVar1 = _xmlHashUpdateEntry3(table,name,(xmlChar *)0x0,(xmlChar *)0x0,userdata,f);
  return iVar1;
}

