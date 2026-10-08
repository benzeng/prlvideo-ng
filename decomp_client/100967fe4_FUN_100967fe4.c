
undefined4 * FUN_100967fe4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  xmlHashTablePtr pxVar3;
  undefined4 *local_60;
  xmlChar local_48 [32];
  undefined4 *local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  local_28 = (undefined4 *)FUN_10096154d(param_1,param_2);
  if (local_28 == (undefined4 *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    *local_28 = 0x13;
    if (*(long *)(param_1 + 0x68) == 0) {
      pxVar3 = _xmlHashCreate(10);
      *(xmlHashTablePtr *)(param_1 + 0x68) = pxVar3;
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      FUN_100960bbc(param_1,"create interleaves\n");
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) = uVar1 + 1;
      _snprintf((char *)local_48,0x20,"interleave%d",(ulong)uVar1);
      iVar2 = _xmlHashAddEntry(*(xmlHashTablePtr *)(param_1 + 0x68),local_48,local_28);
      if (iVar2 < 0) {
        FUN_100960ece(param_1,param_2,0x415,"Failed to add %s to hash table\n",local_48,0);
      }
    }
    local_10 = *(long *)(param_2 + 0x18);
    if (local_10 == 0) {
      FUN_100960ece(param_1,param_2,0x418,"Element interleave is empty\n",0,0);
    }
    for (; local_10 != 0; local_10 = *(long *)(local_10 + 0x30)) {
      if ((local_10 == 0) || (*(long *)(local_10 + 0x48) == 0)) {
LAB_10096817c:
        local_18 = FUN_1009687cf(param_1,local_10);
      }
      else {
        iVar2 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"element");
        if (iVar2 == 0) goto LAB_10096817c;
        iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),
                             PTR_s_http___relaxng_org_ns_structure__10227d2b0);
        if (iVar2 == 0) goto LAB_10096817c;
        local_18 = FUN_10096a490(param_1,local_10);
      }
      if (local_18 != 0) {
        *(undefined4 **)(local_18 + 0x38) = local_28;
        if (local_20 == 0) {
          local_20 = local_18;
          *(long *)(local_28 + 0xc) = local_18;
        }
        else {
          *(long *)(local_20 + 0x40) = local_18;
          local_20 = local_18;
        }
      }
    }
    local_60 = local_28;
  }
  return local_60;
}

