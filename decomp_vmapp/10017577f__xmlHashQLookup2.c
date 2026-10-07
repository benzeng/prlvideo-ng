
void * _xmlHashQLookup2(xmlHashTablePtr table,xmlChar *name,xmlChar *prefix,xmlChar *name2,
                       xmlChar *prefix2)

{
  void *pvVar1;
  
  pvVar1 = _xmlHashQLookup3(table,name,prefix,name2,prefix2,(xmlChar *)0x0,(xmlChar *)0x0);
  return pvVar1;
}

