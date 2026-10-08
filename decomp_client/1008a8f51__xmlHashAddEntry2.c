
int _xmlHashAddEntry2(xmlHashTablePtr table,xmlChar *name,xmlChar *name2,void *userdata)

{
  int iVar1;
  
  iVar1 = _xmlHashAddEntry3(table,name,name2,(xmlChar *)0x0,userdata);
  return iVar1;
}

