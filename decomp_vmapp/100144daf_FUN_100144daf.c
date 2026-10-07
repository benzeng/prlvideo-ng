
void FUN_100144daf(long param_1,xmlChar *param_2,xmlChar *param_3,xmlChar *param_4)

{
  xmlHashTablePtr pxVar1;
  xmlChar *pxVar2;
  int local_2c;
  int *local_28;
  xmlChar *local_20;
  xmlChar *local_18;
  int *local_10;
  
  if (*(long *)(param_1 + 0x220) == 0) {
    pxVar1 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x1c8));
    *(xmlHashTablePtr *)(param_1 + 0x220) = pxVar1;
    if (*(long *)(param_1 + 0x220) != 0) goto LAB_100144e0e;
LAB_1001450a0:
    _xmlErrMemory(param_1,0);
  }
  else {
LAB_100144e0e:
    local_20 = _xmlSplitQName3(param_2,&local_2c);
    if (local_20 == (xmlChar *)0x0) {
      local_20 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_2,-1);
      local_18 = (xmlChar *)0x0;
    }
    else {
      local_20 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),local_20,-1);
      local_18 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_2,local_2c);
    }
    local_28 = _xmlHashLookup2(*(xmlHashTablePtr *)(param_1 + 0x220),local_20,local_18);
    if (local_28 == (int *)0x0) {
      local_28 = (int *)(*(code *)_xmlMalloc)(0xa8);
      if (local_28 == (int *)0x0) goto LAB_1001450a0;
      *local_28 = 0;
      local_28[1] = 4;
      _xmlHashUpdateEntry2
                (*(xmlHashTablePtr *)(param_1 + 0x220),local_20,local_18,local_28,
                 (xmlHashDeallocator)0x0);
    }
    else if (local_28[1] <= *local_28) {
      local_10 = (int *)(*(code *)_xmlRealloc)(local_28,(long)local_28[1] * 0x40 + 0x28);
      if (local_10 == (int *)0x0) goto LAB_1001450a0;
      local_10[1] = local_10[1] * 2;
      local_28 = local_10;
      _xmlHashUpdateEntry2
                (*(xmlHashTablePtr *)(param_1 + 0x220),local_20,local_18,local_10,
                 (xmlHashDeallocator)0x0);
    }
    local_20 = _xmlSplitQName3(param_3,&local_2c);
    if (local_20 == (xmlChar *)0x0) {
      local_20 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_3,-1);
      local_18 = (xmlChar *)0x0;
    }
    else {
      local_20 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),local_20,-1);
      local_18 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_3,local_2c);
    }
    *(xmlChar **)(local_28 + (long)(*local_28 << 2) * 2 + 2) = local_20;
    *(xmlChar **)(local_28 + (long)(*local_28 * 4 + 1) * 2 + 2) = local_18;
    local_2c = _xmlStrlen(param_4);
    pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x1c8),param_4,local_2c);
    *(xmlChar **)(local_28 + (long)(*local_28 * 4 + 2) * 2 + 2) = pxVar2;
    *(xmlChar **)(local_28 + (long)(*local_28 * 4 + 3) * 2 + 2) = pxVar2 + local_2c;
    *local_28 = *local_28 + 1;
  }
  return;
}

