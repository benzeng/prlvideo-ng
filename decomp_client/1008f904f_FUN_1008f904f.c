
undefined4 FUN_1008f904f(long param_1,xmlDocPtr param_2,long param_3)

{
  int iVar1;
  undefined4 local_64;
  xmlDocPtr local_48;
  long local_40;
  xmlDocPtr local_38;
  long local_30;
  xmlNodePtr local_20;
  xmlDtdPtr local_18;
  long local_10;
  
  if (param_1 == 0) {
    local_64 = 0xffffffff;
  }
  else if ((param_3 == 0) || (*(long *)(param_3 + 0x50) == 0)) {
    local_64 = 0;
  }
  else {
    local_18 = param_2->intSubset;
    if (local_18 == (xmlDtdPtr)0x0) {
      local_20 = _xmlDocGetRootElement(param_2);
      if (local_20 == (xmlNodePtr)0x0) {
        return 0xffffffff;
      }
      local_18 = _xmlCreateIntSubset(param_2,local_20->name,(xmlChar *)0x0,(xmlChar *)0x0);
      if (local_18 == (xmlDtdPtr)0x0) {
        return 0xffffffff;
      }
    }
    local_10 = *(long *)(param_3 + 0x50);
    if ((local_10 != 0) && (*(long *)(local_10 + 0x60) != 0)) {
      local_38 = param_2;
      local_30 = param_1;
      _xmlHashScan(*(xmlHashTablePtr *)(local_10 + 0x60),FUN_1008f8e4e,&local_38);
    }
    local_10 = *(long *)(param_3 + 0x58);
    if ((((local_10 != 0) && (*(long *)(local_10 + 0x60) != 0)) &&
        (local_48 = param_2, local_40 = param_1,
        iVar1 = _xmlStrEqual(local_18->ExternalID,*(xmlChar **)(local_10 + 0x68)), iVar1 == 0)) &&
       (iVar1 = _xmlStrEqual(local_18->SystemID,*(xmlChar **)(local_10 + 0x70)), iVar1 == 0)) {
      _xmlHashScan(*(xmlHashTablePtr *)(local_10 + 0x60),FUN_1008f8e4e,&local_48);
    }
    local_64 = 0;
  }
  return local_64;
}

