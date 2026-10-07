
int _xmlHashUpdateEntry2
              (xmlHashTablePtr table,xmlChar *name,xmlChar *name2,void *userdata,
              xmlHashDeallocator f)

{
  int iVar1;
  
  iVar1 = _xmlHashUpdateEntry3(table,name,name2,(xmlChar *)0x0,userdata,f);
  return iVar1;
}

