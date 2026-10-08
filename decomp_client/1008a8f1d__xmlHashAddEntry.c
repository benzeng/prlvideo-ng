
int _xmlHashAddEntry(xmlHashTablePtr table,xmlChar *name,void *userdata)

{
  int iVar1;
  
  iVar1 = _xmlHashAddEntry3(table,name,(xmlChar *)0x0,(xmlChar *)0x0,userdata);
  return iVar1;
}

