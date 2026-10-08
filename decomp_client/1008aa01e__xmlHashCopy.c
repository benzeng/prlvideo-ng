
xmlHashTablePtr _xmlHashCopy(xmlHashTablePtr table,xmlHashCopier f)

{
  undefined8 *puVar1;
  void *userdata;
  xmlHashTablePtr local_40;
  int local_24;
  undefined8 *local_20;
  
  if (table == (xmlHashTablePtr)0x0) {
    local_40 = (xmlHashTablePtr)0x0;
  }
  else if (f == (xmlHashCopier)0x0) {
    local_40 = (xmlHashTablePtr)0x0;
  }
  else {
    local_40 = _xmlHashCreate(*(int *)(table + 8));
    if (*(long *)table != 0) {
      for (local_24 = 0; local_24 < *(int *)(table + 8); local_24 = local_24 + 1) {
        if (*(int *)(*(long *)table + (long)local_24 * 0x30 + 0x28) != 0) {
          local_20 = (undefined8 *)(*(long *)table + (long)local_24 * 0x30);
          while (local_20 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)*local_20;
            userdata = (*f)((void *)local_20[4],(xmlChar *)local_20[1]);
            _xmlHashAddEntry3(local_40,(xmlChar *)local_20[1],(xmlChar *)local_20[2],
                              (xmlChar *)local_20[3],userdata);
            local_20 = puVar1;
          }
        }
      }
    }
    *(undefined4 *)(local_40 + 0xc) = *(undefined4 *)(table + 0xc);
  }
  return local_40;
}

