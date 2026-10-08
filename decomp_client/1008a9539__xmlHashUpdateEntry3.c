
int _xmlHashUpdateEntry3
              (xmlHashTablePtr table,xmlChar *name,xmlChar *name2,xmlChar *name3,void *userdata,
              xmlHashDeallocator f)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  int local_5c;
  xmlChar *local_48;
  xmlChar *local_40;
  xmlChar *local_38;
  undefined8 *local_18;
  long *local_10;
  
  if ((table == (xmlHashTablePtr)0x0) || (name == (xmlChar *)0x0)) {
    local_5c = -1;
  }
  else {
    local_48 = name3;
    local_40 = name2;
    local_38 = name;
    if (*(long *)(table + 0x10) != 0) {
      iVar1 = _xmlDictOwns(*(xmlDictPtr *)(table + 0x10),name);
      if ((iVar1 == 0) &&
         (local_38 = _xmlDictLookup(*(xmlDictPtr *)(table + 0x10),name,-1),
         local_38 == (xmlChar *)0x0)) {
        return -1;
      }
      if (((name2 != (xmlChar *)0x0) &&
          (iVar1 = _xmlDictOwns(*(xmlDictPtr *)(table + 0x10),name2), iVar1 == 0)) &&
         (local_40 = _xmlDictLookup(*(xmlDictPtr *)(table + 0x10),name2,-1),
         local_40 == (xmlChar *)0x0)) {
        return -1;
      }
      if (((name3 != (xmlChar *)0x0) &&
          (iVar1 = _xmlDictOwns(*(xmlDictPtr *)(table + 0x10),name3), iVar1 == 0)) &&
         (local_48 = _xmlDictLookup(*(xmlDictPtr *)(table + 0x10),name3,-1),
         local_48 == (xmlChar *)0x0)) {
        return -1;
      }
    }
    lVar2 = FUN_1008a84a3(table,local_38,local_40,local_48);
    if (*(int *)(*(long *)table + lVar2 * 0x30 + 0x28) == 0) {
      local_10 = (long *)0x0;
    }
    else if (*(long *)(table + 0x10) == 0) {
      for (local_10 = (long *)(*(long *)table + lVar2 * 0x30); *local_10 != 0;
          local_10 = (long *)*local_10) {
        iVar1 = _xmlStrEqual((xmlChar *)local_10[1],local_38);
        if (((iVar1 != 0) && (iVar1 = _xmlStrEqual((xmlChar *)local_10[2],local_40), iVar1 != 0)) &&
           (iVar1 = _xmlStrEqual((xmlChar *)local_10[3],local_48), iVar1 != 0)) {
          if (f != (xmlHashDeallocator)0x0) {
            (*f)((void *)local_10[4],(xmlChar *)local_10[1]);
          }
          local_10[4] = (long)userdata;
          return 0;
        }
      }
      iVar1 = _xmlStrEqual((xmlChar *)local_10[1],local_38);
      if (((iVar1 != 0) && (iVar1 = _xmlStrEqual((xmlChar *)local_10[2],local_40), iVar1 != 0)) &&
         (iVar1 = _xmlStrEqual((xmlChar *)local_10[3],local_48), iVar1 != 0)) {
        if (f != (xmlHashDeallocator)0x0) {
          (*f)((void *)local_10[4],(xmlChar *)local_10[1]);
        }
        local_10[4] = (long)userdata;
        return 0;
      }
    }
    else {
      for (local_10 = (long *)(*(long *)table + lVar2 * 0x30); *local_10 != 0;
          local_10 = (long *)*local_10) {
        if ((((xmlChar *)local_10[1] == local_38) && ((xmlChar *)local_10[2] == local_40)) &&
           ((xmlChar *)local_10[3] == local_48)) {
          if (f != (xmlHashDeallocator)0x0) {
            (*f)((void *)local_10[4],(xmlChar *)local_10[1]);
          }
          local_10[4] = (long)userdata;
          return 0;
        }
      }
      if ((((xmlChar *)local_10[1] == local_38) && ((xmlChar *)local_10[2] == local_40)) &&
         ((xmlChar *)local_10[3] == local_48)) {
        if (f != (xmlHashDeallocator)0x0) {
          (*f)((void *)local_10[4],(xmlChar *)local_10[1]);
        }
        local_10[4] = (long)userdata;
        return 0;
      }
    }
    if (local_10 == (long *)0x0) {
      local_18 = (undefined8 *)(*(long *)table + lVar2 * 0x30);
    }
    else {
      local_18 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
      if (local_18 == (undefined8 *)0x0) {
        return -1;
      }
    }
    if (*(long *)(table + 0x10) == 0) {
      pxVar3 = _xmlStrdup(local_38);
      local_18[1] = pxVar3;
      pxVar3 = _xmlStrdup(local_40);
      local_18[2] = pxVar3;
      pxVar3 = _xmlStrdup(local_48);
      local_18[3] = pxVar3;
    }
    else {
      local_18[1] = local_38;
      local_18[2] = local_40;
      local_18[3] = local_48;
    }
    local_18[4] = userdata;
    *local_18 = 0;
    *(undefined4 *)(local_18 + 5) = 1;
    *(int *)(table + 0xc) = *(int *)(table + 0xc) + 1;
    if (local_10 != (long *)0x0) {
      *local_10 = (long)local_18;
    }
    local_5c = 0;
  }
  return local_5c;
}

