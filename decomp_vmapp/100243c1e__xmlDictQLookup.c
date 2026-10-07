
xmlChar * _xmlDictQLookup(xmlDictPtr dict,xmlChar *prefix,xmlChar *name)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  xmlChar *local_68;
  ulong local_40;
  ulong local_38;
  undefined8 *local_30;
  long *local_28;
  int local_14;
  long *local_10;
  
  local_38 = 0;
  if ((dict == (xmlDictPtr)0x0) || (name == (xmlChar *)0x0)) {
    local_68 = (xmlChar *)0x0;
  }
  else {
    local_14 = _xmlStrlen(name);
    if (prefix != (xmlChar *)0x0) {
      iVar1 = _xmlStrlen(prefix);
      local_14 = iVar1 + local_14 + 1;
    }
    uVar2 = FUN_100242b8a(prefix,name,local_14);
    local_40 = uVar2 % (ulong)(long)*(int *)(dict + 0x18);
    if (*(int *)(*(long *)(dict + 0x10) + local_40 * 0x18 + 0x14) == 0) {
      local_28 = (long *)0x0;
    }
    else {
      for (local_28 = (long *)(*(long *)(dict + 0x10) + local_40 * 0x18); *local_28 != 0;
          local_28 = (long *)*local_28) {
        if (((int)local_28[2] == local_14) &&
           (iVar1 = _xmlStrQEqual(prefix,name,(xmlChar *)local_28[1]), iVar1 != 0)) {
          return (xmlChar *)local_28[1];
        }
        local_38 = local_38 + 1;
      }
      if (((int)local_28[2] == local_14) &&
         (iVar1 = _xmlStrQEqual(prefix,name,(xmlChar *)local_28[1]), iVar1 != 0)) {
        return (xmlChar *)local_28[1];
      }
    }
    if (*(long *)(dict + 0x28) != 0) {
      uVar3 = uVar2 % (ulong)(long)*(int *)(*(long *)(dict + 0x28) + 0x18);
      if (*(int *)(*(long *)(*(long *)(dict + 0x28) + 0x10) + uVar3 * 0x18 + 0x14) != 0) {
        for (local_10 = (long *)(*(long *)(*(long *)(dict + 0x28) + 0x10) + uVar3 * 0x18);
            *local_10 != 0; local_10 = (long *)*local_10) {
          if (((int)local_10[2] == local_14) &&
             (iVar1 = _xmlStrQEqual(prefix,name,(xmlChar *)local_10[1]), iVar1 != 0)) {
            return (xmlChar *)local_10[1];
          }
          local_38 = local_38 + 1;
        }
        if (((int)local_10[2] == local_14) &&
           (iVar1 = _xmlStrQEqual(prefix,name,(xmlChar *)local_10[1]), iVar1 != 0)) {
          return (xmlChar *)local_10[1];
        }
      }
      local_40 = uVar2 % (ulong)(long)*(int *)(dict + 0x18);
    }
    local_68 = (xmlChar *)FUN_1002427e6(dict,prefix,name,local_14);
    if (local_68 == (xmlChar *)0x0) {
      local_68 = (xmlChar *)0x0;
    }
    else {
      if (local_28 == (long *)0x0) {
        local_30 = (undefined8 *)(*(long *)(dict + 0x10) + local_40 * 0x18);
      }
      else {
        local_30 = (undefined8 *)(*(code *)_xmlMalloc)(0x18);
        if (local_30 == (undefined8 *)0x0) {
          return (xmlChar *)0x0;
        }
      }
      local_30[1] = local_68;
      *(int *)(local_30 + 2) = local_14;
      *local_30 = 0;
      *(undefined4 *)((long)local_30 + 0x14) = 1;
      if (local_28 != (long *)0x0) {
        *local_28 = (long)local_30;
      }
      *(int *)(dict + 0x1c) = *(int *)(dict + 0x1c) + 1;
      if ((4 < local_38) && (*(int *)(dict + 0x18) < 0x801)) {
        FUN_100243080(dict,*(int *)(dict + 0x18) * 8);
      }
    }
  }
  return local_68;
}

