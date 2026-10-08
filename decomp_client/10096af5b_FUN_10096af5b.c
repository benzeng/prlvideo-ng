
void FUN_10096af5b(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  xmlHashTablePtr pxVar3;
  xmlChar local_58 [32];
  xmlChar *local_38;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  long local_18;
  undefined4 *local_10;
  
  local_30 = -1;
  local_2c = 0;
  local_28 = (undefined4 *)param_1;
  if (*(long *)(param_1 + 0x58) != 0) {
    for (; local_28 != (undefined4 *)0x0; local_28 = *(undefined4 **)((long)local_28 + 0x58)) {
      local_38 = _xmlGetProp(*(xmlNodePtr *)((long)local_28 + 8),(xmlChar *)"combine");
      if (local_38 == (xmlChar *)0x0) {
        if (local_2c == 0) {
          local_2c = 1;
        }
        else {
          FUN_100960ece(param_2,*(undefined8 *)(param_1 + 8),0x41e,
                        "Some defines for %s needs the combine attribute\n",param_3,0);
        }
      }
      else {
        iVar2 = _xmlStrEqual(local_38,(xmlChar *)"choice");
        if (iVar2 == 0) {
          iVar2 = _xmlStrEqual(local_38,(xmlChar *)"interleave");
          if (iVar2 == 0) {
            FUN_100960ece(param_2,*(undefined8 *)(param_1 + 8),0x45a,
                          "Defines for %s use unknown combine value \'%s\'\'\n",param_3,local_38);
          }
          else if (local_30 == -1) {
            local_30 = 0;
          }
          else if (local_30 == 1) {
            FUN_100960ece(param_2,*(undefined8 *)(param_1 + 8),0x3f2,
                          "Defines for %s use both \'choice\' and \'interleave\'\n",param_3,0);
          }
        }
        else if (local_30 == -1) {
          local_30 = 1;
        }
        else if (local_30 == 0) {
          FUN_100960ece(param_2,*(undefined8 *)(param_1 + 8),0x3f2,
                        "Defines for %s use both \'choice\' and \'interleave\'\n",param_3,0);
        }
        (*(code *)_xmlFree)(local_38);
      }
    }
    if (local_30 == -1) {
      local_30 = 0;
    }
    local_28 = (undefined4 *)FUN_10096154d(param_2,*(undefined8 *)(param_1 + 8));
    if (local_28 != (undefined4 *)0x0) {
      if (local_30 == 0) {
        *local_28 = 0x13;
      }
      else {
        *local_28 = 0x11;
      }
      local_20 = (undefined4 *)0x0;
      for (local_18 = param_1; local_18 != 0; local_18 = *(long *)(local_18 + 0x58)) {
        if (*(long *)(local_18 + 0x30) != 0) {
          if (*(long *)(*(long *)(local_18 + 0x30) + 0x40) == 0) {
            local_10 = *(undefined4 **)(local_18 + 0x30);
          }
          else {
            local_10 = (undefined4 *)
                       FUN_10096154d(param_2,*(undefined8 *)(*(long *)(local_18 + 0x30) + 8));
            if (local_10 == (undefined4 *)0x0) break;
            *local_10 = 0x12;
            *(undefined8 *)(local_10 + 0xc) = *(undefined8 *)(local_18 + 0x30);
          }
          if (local_20 == (undefined4 *)0x0) {
            *(undefined4 **)(local_28 + 0xc) = local_10;
          }
          else {
            *(undefined4 **)(local_20 + 0x10) = local_10;
          }
          local_20 = local_10;
        }
        *(undefined4 **)(local_18 + 0x30) = local_28;
      }
      *(undefined4 **)(param_1 + 0x30) = local_28;
      if (local_30 == 0) {
        if (*(long *)(param_2 + 0x68) == 0) {
          pxVar3 = _xmlHashCreate(10);
          *(xmlHashTablePtr *)(param_2 + 0x68) = pxVar3;
        }
        if (*(long *)(param_2 + 0x68) == 0) {
          FUN_100960ece(param_2,*(undefined8 *)(param_1 + 8),0x416,
                        "Failed to create interleaves hash table\n",0,0);
        }
        else {
          uVar1 = *(uint *)(param_2 + 0x60);
          *(uint *)(param_2 + 0x60) = uVar1 + 1;
          _snprintf((char *)local_58,0x20,"interleave%d",(ulong)uVar1);
          iVar2 = _xmlHashAddEntry(*(xmlHashTablePtr *)(param_2 + 0x68),local_58,local_28);
          if (iVar2 < 0) {
            FUN_100960ece(param_2,*(undefined8 *)(param_1 + 8),0x416,
                          "Failed to add %s to hash table\n",local_58,0);
          }
        }
      }
    }
  }
  return;
}

