
void * _xmlHashLookup2(xmlHashTablePtr table,xmlChar *name,xmlChar *name2)

{
  void *pvVar1;
  
  pvVar1 = _xmlHashLookup3(table,name,name2,(xmlChar *)0x0);
  return pvVar1;
}

