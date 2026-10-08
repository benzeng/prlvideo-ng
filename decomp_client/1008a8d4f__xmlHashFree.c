
void _xmlHashFree(xmlHashTablePtr table,xmlHashDeallocator f)

{
  undefined8 *puVar1;
  bool bVar2;
  int local_24;
  undefined8 *local_20;
  int local_c;
  
  if (table != (xmlHashTablePtr)0x0) {
    if (*(long *)table != 0) {
      local_c = *(int *)(table + 0xc);
      local_24 = 0;
      while ((local_24 < *(int *)(table + 8) && (0 < local_c))) {
        local_20 = (undefined8 *)(*(long *)table + (long)local_24 * 0x30);
        if (*(int *)(local_20 + 5) != 0) {
          bVar2 = true;
          while (local_20 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*local_20;
            if ((f != (xmlHashDeallocator)0x0) && (local_20[4] != 0)) {
              (*f)((void *)local_20[4],(xmlChar *)local_20[1]);
            }
            if (*(long *)(table + 0x10) == 0) {
              if (local_20[1] != 0) {
                (*(code *)_xmlFree)(local_20[1]);
              }
              if (local_20[2] != 0) {
                (*(code *)_xmlFree)(local_20[2]);
              }
              if (local_20[3] != 0) {
                (*(code *)_xmlFree)(local_20[3]);
              }
            }
            local_20[4] = 0;
            if (!bVar2) {
              (*(code *)_xmlFree)(local_20);
            }
            local_c = local_c + -1;
            bVar2 = false;
            local_20 = puVar1;
          }
        }
        local_24 = local_24 + 1;
      }
      (*(code *)_xmlFree)(*(undefined8 *)table);
    }
    if (*(long *)(table + 0x10) != 0) {
      _xmlDictFree(*(xmlDictPtr *)(table + 0x10));
    }
    (*(code *)_xmlFree)(table);
  }
  return;
}

