
void * FUN_10086a395(long param_1,xmlChar *param_2,undefined4 param_3,xmlChar *param_4,
                    xmlChar *param_5,xmlChar *param_6)

{
  int iVar1;
  xmlHashTablePtr pxVar2;
  xmlChar *pxVar3;
  void *local_60;
  xmlDictPtr local_20;
  xmlHashTablePtr local_18;
  
  local_20 = (xmlDictPtr)0x0;
  local_18 = (xmlHashTablePtr)0x0;
  if (param_2 == (xmlChar *)0x0) {
    local_60 = (void *)0x0;
  }
  else if (param_1 == 0) {
    local_60 = (void *)0x0;
  }
  else {
    if (*(long *)(param_1 + 0x40) != 0) {
      local_20 = *(xmlDictPtr *)(*(long *)(param_1 + 0x40) + 0x98);
    }
    switch(param_3) {
    case 1:
    case 2:
    case 3:
      if (*(long *)(param_1 + 0x60) == 0) {
        pxVar2 = _xmlHashCreateDict(0,local_20);
        *(xmlHashTablePtr *)(param_1 + 0x60) = pxVar2;
      }
      local_18 = *(xmlHashTablePtr *)(param_1 + 0x60);
      break;
    case 4:
    case 5:
      if (*(long *)(param_1 + 0x78) == 0) {
        pxVar2 = _xmlHashCreateDict(0,local_20);
        *(xmlHashTablePtr *)(param_1 + 0x78) = pxVar2;
      }
      local_18 = *(xmlHashTablePtr *)(param_1 + 0x78);
      break;
    case 6:
      return (void *)0x0;
    }
    if (local_18 == (xmlHashTablePtr)0x0) {
      local_60 = (void *)0x0;
    }
    else {
      local_60 = (void *)(*(code *)_xmlMalloc)(0x88);
      if (local_60 == (void *)0x0) {
        FUN_10086a068("xmlAddEntity:: malloc failed");
        local_60 = (void *)0x0;
      }
      else {
        _memset(local_60,0,0x88);
        *(undefined4 *)((long)local_60 + 8) = 0x11;
        *(undefined4 *)((long)local_60 + 0x5c) = param_3;
        if (local_20 == (xmlDictPtr)0x0) {
          pxVar3 = _xmlStrdup(param_2);
          *(xmlChar **)((long)local_60 + 0x10) = pxVar3;
          if (param_4 != (xmlChar *)0x0) {
            pxVar3 = _xmlStrdup(param_4);
            *(xmlChar **)((long)local_60 + 0x60) = pxVar3;
          }
          if (param_5 != (xmlChar *)0x0) {
            pxVar3 = _xmlStrdup(param_5);
            *(xmlChar **)((long)local_60 + 0x68) = pxVar3;
          }
        }
        else {
          pxVar3 = _xmlDictLookup(local_20,param_2,-1);
          *(xmlChar **)((long)local_60 + 0x10) = pxVar3;
          if (param_4 != (xmlChar *)0x0) {
            pxVar3 = _xmlDictLookup(local_20,param_4,-1);
            *(xmlChar **)((long)local_60 + 0x60) = pxVar3;
          }
          if (param_5 != (xmlChar *)0x0) {
            pxVar3 = _xmlDictLookup(local_20,param_5,-1);
            *(xmlChar **)((long)local_60 + 0x68) = pxVar3;
          }
        }
        if (param_6 == (xmlChar *)0x0) {
          *(undefined4 *)((long)local_60 + 0x58) = 0;
          *(undefined8 *)((long)local_60 + 0x50) = 0;
        }
        else {
          iVar1 = _xmlStrlen(param_6);
          *(int *)((long)local_60 + 0x58) = iVar1;
          if ((local_20 == (xmlDictPtr)0x0) || (4 < *(int *)((long)local_60 + 0x58))) {
            pxVar3 = _xmlStrndup(param_6,*(int *)((long)local_60 + 0x58));
            *(xmlChar **)((long)local_60 + 0x50) = pxVar3;
          }
          else {
            pxVar3 = _xmlDictLookup(local_20,param_6,*(int *)((long)local_60 + 0x58));
            *(xmlChar **)((long)local_60 + 0x50) = pxVar3;
          }
        }
        *(undefined8 *)((long)local_60 + 0x78) = 0;
        *(undefined8 *)((long)local_60 + 0x48) = 0;
        *(undefined4 *)((long)local_60 + 0x80) = 0;
        *(undefined8 *)((long)local_60 + 0x40) = *(undefined8 *)(param_1 + 0x40);
        iVar1 = _xmlHashAddEntry(local_18,param_2,local_60);
        if (iVar1 != 0) {
          FUN_10086a0c3(local_60);
          local_60 = (void *)0x0;
        }
      }
    }
  }
  return local_60;
}

