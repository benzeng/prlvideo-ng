
xmlChar * _xmlDictExists(xmlDictPtr dict,xmlChar *name,int len)

{
  int iVar1;
  ulong uVar2;
  int local_4c;
  long *local_18;
  long *local_10;
  
  if ((dict != (xmlDictPtr)0x0) && (name != (xmlChar *)0x0)) {
    local_4c = len;
    if (len < 0) {
      local_4c = _xmlStrlen(name);
    }
    uVar2 = FUN_100976327(name,local_4c);
    if (*(int *)(*(long *)(dict + 0x10) + (uVar2 % (ulong)(long)*(int *)(dict + 0x18)) * 0x18 + 0x14
                ) != 0) {
      for (local_18 = (long *)(*(long *)(dict + 0x10) +
                              (uVar2 % (ulong)(long)*(int *)(dict + 0x18)) * 0x18); *local_18 != 0;
          local_18 = (long *)*local_18) {
        if (((int)local_18[2] == local_4c) &&
           (iVar1 = _memcmp((void *)local_18[1],name,(long)local_4c), iVar1 == 0)) {
          return (xmlChar *)local_18[1];
        }
      }
      if (((int)local_18[2] == local_4c) &&
         (iVar1 = _memcmp((void *)local_18[1],name,(long)local_4c), iVar1 == 0)) {
        return (xmlChar *)local_18[1];
      }
    }
    if ((*(long *)(dict + 0x28) != 0) &&
       (uVar2 = uVar2 % (ulong)(long)*(int *)(*(long *)(dict + 0x28) + 0x18),
       *(int *)(*(long *)(*(long *)(dict + 0x28) + 0x10) + uVar2 * 0x18 + 0x14) != 0)) {
      for (local_10 = (long *)(*(long *)(*(long *)(dict + 0x28) + 0x10) + uVar2 * 0x18);
          *local_10 != 0; local_10 = (long *)*local_10) {
        if (((int)local_10[2] == local_4c) &&
           (iVar1 = _memcmp((void *)local_10[1],name,(long)local_4c), iVar1 == 0)) {
          return (xmlChar *)local_10[1];
        }
      }
      if (((int)local_10[2] == local_4c) &&
         (iVar1 = _memcmp((void *)local_10[1],name,(long)local_4c), iVar1 == 0)) {
        return (xmlChar *)local_10[1];
      }
    }
  }
  return (xmlChar *)0x0;
}

