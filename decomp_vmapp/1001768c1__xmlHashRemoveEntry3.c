
int _xmlHashRemoveEntry3
              (xmlHashTablePtr table,xmlChar *name,xmlChar *name2,xmlChar *name3,
              xmlHashDeallocator f)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *local_18;
  long *local_10;
  
  local_10 = (long *)0x0;
  if (((table != (xmlHashTablePtr)0x0) && (name != (xmlChar *)0x0)) &&
     (lVar3 = FUN_100174b7b(table,name,name2,name3),
     *(int *)(*(long *)table + lVar3 * 0x30 + 0x28) != 0)) {
    for (local_18 = (long *)(*(long *)table + lVar3 * 0x30); local_18 != (long *)0x0;
        local_18 = (long *)*local_18) {
      iVar2 = _xmlStrEqual((xmlChar *)local_18[1],name);
      if (((iVar2 != 0) && (iVar2 = _xmlStrEqual((xmlChar *)local_18[2],name2), iVar2 != 0)) &&
         (iVar2 = _xmlStrEqual((xmlChar *)local_18[3],name3), iVar2 != 0)) {
        if ((f != (xmlHashDeallocator)0x0) && (local_18[4] != 0)) {
          (*f)((void *)local_18[4],(xmlChar *)local_18[1]);
        }
        local_18[4] = 0;
        if (*(long *)(table + 0x10) == 0) {
          if (local_18[1] != 0) {
            (*(code *)_xmlFree)(local_18[1]);
          }
          if (local_18[2] != 0) {
            (*(code *)_xmlFree)(local_18[2]);
          }
          if (local_18[3] != 0) {
            (*(code *)_xmlFree)(local_18[3]);
          }
        }
        if (local_10 == (long *)0x0) {
          if (*local_18 == 0) {
            *(undefined4 *)(local_18 + 5) = 0;
          }
          else {
            puVar1 = (undefined8 *)*local_18;
            puVar4 = (undefined8 *)(*(long *)table + lVar3 * 0x30);
            *puVar4 = *puVar1;
            puVar4[1] = puVar1[1];
            puVar4[2] = puVar1[2];
            puVar4[3] = puVar1[3];
            puVar4[4] = puVar1[4];
            puVar4[5] = puVar1[5];
            (*(code *)_xmlFree)(puVar1);
          }
        }
        else {
          *local_10 = *local_18;
          (*(code *)_xmlFree)(local_18);
        }
        *(int *)(table + 0xc) = *(int *)(table + 0xc) + -1;
        return 0;
      }
      local_10 = local_18;
    }
  }
  return -1;
}

