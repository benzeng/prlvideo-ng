
xmlChar * _xmlDictLookup(xmlDictPtr dict,xmlChar *name,int len)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  xmlChar *local_68;
  int local_5c;
  ulong local_40;
  ulong local_30;
  undefined8 *local_28;
  long *local_20;
  long *local_10;
  
  local_30 = 0;
  if ((dict == (xmlDictPtr)0x0) || (name == (xmlChar *)0x0)) {
    local_68 = (xmlChar *)0x0;
  }
  else {
    local_5c = len;
    if (len < 0) {
      local_5c = _xmlStrlen(name);
    }
    uVar2 = FUN_1002429ff(name,local_5c);
    local_40 = uVar2 % (ulong)(long)*(int *)(dict + 0x18);
    if (*(int *)(*(long *)(dict + 0x10) + local_40 * 0x18 + 0x14) == 0) {
      local_20 = (long *)0x0;
    }
    else {
      for (local_20 = (long *)(*(long *)(dict + 0x10) + local_40 * 0x18); *local_20 != 0;
          local_20 = (long *)*local_20) {
        if (((int)local_20[2] == local_5c) &&
           (iVar1 = _memcmp((void *)local_20[1],name,(long)local_5c), iVar1 == 0)) {
          return (xmlChar *)local_20[1];
        }
        local_30 = local_30 + 1;
      }
      if (((int)local_20[2] == local_5c) &&
         (iVar1 = _memcmp((void *)local_20[1],name,(long)local_5c), iVar1 == 0)) {
        return (xmlChar *)local_20[1];
      }
    }
    if (*(long *)(dict + 0x28) != 0) {
      uVar3 = uVar2 % (ulong)(long)*(int *)(*(long *)(dict + 0x28) + 0x18);
      if (*(int *)(*(long *)(*(long *)(dict + 0x28) + 0x10) + uVar3 * 0x18 + 0x14) != 0) {
        for (local_10 = (long *)(*(long *)(*(long *)(dict + 0x28) + 0x10) + uVar3 * 0x18);
            *local_10 != 0; local_10 = (long *)*local_10) {
          if (((int)local_10[2] == local_5c) &&
             (iVar1 = _memcmp((void *)local_10[1],name,(long)local_5c), iVar1 == 0)) {
            return (xmlChar *)local_10[1];
          }
          local_30 = local_30 + 1;
        }
        if (((int)local_10[2] == local_5c) &&
           (iVar1 = _memcmp((void *)local_10[1],name,(long)local_5c), iVar1 == 0)) {
          return (xmlChar *)local_10[1];
        }
      }
      local_40 = uVar2 % (ulong)(long)*(int *)(dict + 0x18);
    }
    local_68 = (xmlChar *)FUN_100242654(dict,name,local_5c);
    if (local_68 == (xmlChar *)0x0) {
      local_68 = (xmlChar *)0x0;
    }
    else {
      if (local_20 == (long *)0x0) {
        local_28 = (undefined8 *)(*(long *)(dict + 0x10) + local_40 * 0x18);
      }
      else {
        local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x18);
        if (local_28 == (undefined8 *)0x0) {
          return (xmlChar *)0x0;
        }
      }
      local_28[1] = local_68;
      *(int *)(local_28 + 2) = local_5c;
      *local_28 = 0;
      *(undefined4 *)((long)local_28 + 0x14) = 1;
      if (local_20 != (long *)0x0) {
        *local_20 = (long)local_28;
      }
      *(int *)(dict + 0x1c) = *(int *)(dict + 0x1c) + 1;
      if ((4 < local_30) && (*(int *)(dict + 0x18) < 0x801)) {
        FUN_100243080(dict,*(int *)(dict + 0x18) * 8);
      }
    }
  }
  return local_68;
}

