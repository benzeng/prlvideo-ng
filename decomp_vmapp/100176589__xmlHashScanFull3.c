
void _xmlHashScanFull3(xmlHashTablePtr table,xmlChar *name,xmlChar *name2,xmlChar *name3,
                      xmlHashScannerFull f,void *data)

{
  undefined8 *puVar1;
  int iVar2;
  int local_1c;
  undefined8 *local_18;
  
  if (((table != (xmlHashTablePtr)0x0) && (f != (xmlHashScannerFull)0x0)) && (*(long *)table != 0))
  {
    for (local_1c = 0; local_1c < *(int *)(table + 8); local_1c = local_1c + 1) {
      if (*(int *)(*(long *)table + (long)local_1c * 0x30 + 0x28) != 0) {
        puVar1 = (undefined8 *)(*(long *)table + (long)local_1c * 0x30);
        while (local_18 = puVar1, local_18 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)*local_18;
          if (((((name == (xmlChar *)0x0) ||
                (iVar2 = _xmlStrEqual(name,(xmlChar *)local_18[1]), iVar2 != 0)) &&
               ((name2 == (xmlChar *)0x0 ||
                (iVar2 = _xmlStrEqual(name2,(xmlChar *)local_18[2]), iVar2 != 0)))) &&
              ((name3 == (xmlChar *)0x0 ||
               (iVar2 = _xmlStrEqual(name3,(xmlChar *)local_18[3]), iVar2 != 0)))) &&
             (local_18[4] != 0)) {
            (*f)((void *)local_18[4],data,(xmlChar *)local_18[1],(xmlChar *)local_18[2],
                 (xmlChar *)local_18[3]);
          }
        }
      }
    }
  }
  return;
}

