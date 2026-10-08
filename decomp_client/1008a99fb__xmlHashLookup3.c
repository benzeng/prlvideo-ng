
void * _xmlHashLookup3(xmlHashTablePtr table,xmlChar *name,xmlChar *name2,xmlChar *name3)

{
  int iVar1;
  long lVar2;
  undefined8 *local_10;
  
  if (((table != (xmlHashTablePtr)0x0) && (name != (xmlChar *)0x0)) &&
     (lVar2 = FUN_1008a84a3(table,name,name2,name3),
     *(int *)(*(long *)table + lVar2 * 0x30 + 0x28) != 0)) {
    if (*(long *)(table + 0x10) != 0) {
      for (local_10 = (undefined8 *)(*(long *)table + lVar2 * 0x30); local_10 != (undefined8 *)0x0;
          local_10 = (undefined8 *)*local_10) {
        if ((((xmlChar *)local_10[1] == name) && ((xmlChar *)local_10[2] == name2)) &&
           ((xmlChar *)local_10[3] == name3)) {
          return (void *)local_10[4];
        }
      }
    }
    for (local_10 = (undefined8 *)(*(long *)table + lVar2 * 0x30); local_10 != (undefined8 *)0x0;
        local_10 = (undefined8 *)*local_10) {
      iVar1 = _xmlStrEqual((xmlChar *)local_10[1],name);
      if (((iVar1 != 0) && (iVar1 = _xmlStrEqual((xmlChar *)local_10[2],name2), iVar1 != 0)) &&
         (iVar1 = _xmlStrEqual((xmlChar *)local_10[3],name3), iVar1 != 0)) {
        return (void *)local_10[4];
      }
    }
  }
  return (void *)0x0;
}

