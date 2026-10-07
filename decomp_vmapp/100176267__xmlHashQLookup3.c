
void * _xmlHashQLookup3(xmlHashTablePtr table,xmlChar *name,xmlChar *prefix,xmlChar *name2,
                       xmlChar *prefix2,xmlChar *name3,xmlChar *prefix3)

{
  int iVar1;
  long lVar2;
  undefined8 *local_10;
  
  if (((table != (xmlHashTablePtr)0x0) && (prefix != (xmlChar *)0x0)) &&
     (lVar2 = FUN_100174cb1(table,name,prefix,name2,prefix2,name3,prefix3),
     *(int *)(*(long *)table + lVar2 * 0x30 + 0x28) != 0)) {
    for (local_10 = (undefined8 *)(*(long *)table + lVar2 * 0x30); local_10 != (undefined8 *)0x0;
        local_10 = (undefined8 *)*local_10) {
      iVar1 = _xmlStrQEqual(name,prefix,(xmlChar *)local_10[1]);
      if (((iVar1 != 0) && (iVar1 = _xmlStrQEqual(name2,prefix2,(xmlChar *)local_10[2]), iVar1 != 0)
          ) && (iVar1 = _xmlStrQEqual(name3,prefix3,(xmlChar *)local_10[3]), iVar1 != 0)) {
        return (void *)local_10[4];
      }
    }
  }
  return (void *)0x0;
}

