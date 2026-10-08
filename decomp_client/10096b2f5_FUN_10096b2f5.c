
void FUN_10096b2f5(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  xmlHashTablePtr pxVar3;
  xmlChar local_48 [32];
  long local_28;
  xmlChar *local_20;
  int local_18;
  int local_14;
  undefined4 *local_10;
  
  local_18 = -1;
  local_14 = 0;
  local_28 = *(long *)(param_2 + 0x18);
  if ((local_28 != 0) && (local_10 = (undefined4 *)local_28, *(long *)(local_28 + 0x40) != 0)) {
    for (; local_10 != (undefined4 *)0x0; local_10 = *(undefined4 **)((long)local_10 + 0x40)) {
      if (((*(long *)((long)local_10 + 8) == 0) ||
          (*(long *)(*(long *)((long)local_10 + 8) + 0x28) == 0)) ||
         (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(*(long *)((long)local_10 + 8) + 0x28) + 0x10)
                               ,(xmlChar *)"start"), iVar2 == 0)) {
        local_20 = (xmlChar *)0x0;
        FUN_100960ece(param_1,*(undefined8 *)((long)local_10 + 8),0x453,
                      "Internal error: start element not found\n",0,0);
      }
      else {
        local_20 = _xmlGetProp(*(xmlNodePtr *)(*(long *)((long)local_10 + 8) + 0x28),
                               (xmlChar *)"combine");
      }
      if (local_20 == (xmlChar *)0x0) {
        if (local_14 == 0) {
          local_14 = 1;
        }
        else {
          FUN_100960ece(param_1,*(undefined8 *)((long)local_10 + 8),0x41e,
                        "Some <start> element miss the combine attribute\n",0,0);
        }
      }
      else {
        iVar2 = _xmlStrEqual(local_20,(xmlChar *)"choice");
        if (iVar2 == 0) {
          iVar2 = _xmlStrEqual(local_20,(xmlChar *)"interleave");
          if (iVar2 == 0) {
            FUN_100960ece(param_1,*(undefined8 *)((long)local_10 + 8),0x45a,
                          "<start> uses unknown combine value \'%s\'\'\n",local_20,0);
          }
          else if (local_18 == -1) {
            local_18 = 0;
          }
          else if (local_18 == 1) {
            FUN_100960ece(param_1,*(undefined8 *)((long)local_10 + 8),0x450,
                          "<start> use both \'choice\' and \'interleave\'\n",0,0);
          }
        }
        else if (local_18 == -1) {
          local_18 = 1;
        }
        else if (local_18 == 0) {
          FUN_100960ece(param_1,*(undefined8 *)((long)local_10 + 8),0x450,
                        "<start> use both \'choice\' and \'interleave\'\n",0,0);
        }
        (*(code *)_xmlFree)(local_20);
      }
    }
    if (local_18 == -1) {
      local_18 = 0;
    }
    local_10 = (undefined4 *)FUN_10096154d(param_1,*(undefined8 *)(local_28 + 8));
    if (local_10 != (undefined4 *)0x0) {
      if (local_18 == 0) {
        *local_10 = 0x13;
      }
      else {
        *local_10 = 0x11;
      }
      *(undefined8 *)(local_10 + 0xc) = *(undefined8 *)(param_2 + 0x18);
      *(undefined4 **)(param_2 + 0x18) = local_10;
      if (local_18 == 0) {
        if (*(long *)(param_1 + 0x68) == 0) {
          pxVar3 = _xmlHashCreate(10);
          *(xmlHashTablePtr *)(param_1 + 0x68) = pxVar3;
        }
        if (*(long *)(param_1 + 0x68) == 0) {
          FUN_100960ece(param_1,*(undefined8 *)(local_10 + 2),0x416,
                        "Failed to create interleaves hash table\n",0,0);
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x60);
          *(uint *)(param_1 + 0x60) = uVar1 + 1;
          _snprintf((char *)local_48,0x20,"interleave%d",(ulong)uVar1);
          iVar2 = _xmlHashAddEntry(*(xmlHashTablePtr *)(param_1 + 0x68),local_48,local_10);
          if (iVar2 < 0) {
            FUN_100960ece(param_1,*(undefined8 *)(local_10 + 2),0x416,
                          "Failed to add %s to hash table\n",local_48,0);
          }
        }
      }
    }
  }
  return;
}

