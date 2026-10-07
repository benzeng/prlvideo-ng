
void * _xmlHashQLookup(xmlHashTablePtr table,xmlChar *name,xmlChar *prefix)

{
  void *pvVar1;
  
  pvVar1 = _xmlHashQLookup3(table,name,prefix,(xmlChar *)0x0,(xmlChar *)0x0,(xmlChar *)0x0,
                            (xmlChar *)0x0);
  return pvVar1;
}

