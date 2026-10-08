
undefined4 FUN_10096a96f(long param_1,long param_2)

{
  int iVar1;
  undefined4 local_3c;
  undefined4 *local_18;
  long local_10;
  
  if (param_2 == 0) {
    FUN_100960ece(param_1,0,0x452,"start has no children\n",0,0);
    return 0xffffffff;
  }
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x48) == 0)) ||
      (iVar1 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"empty"), iVar1 == 0)) ||
     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                           PTR_s_http___relaxng_org_ns_structure__10227d2b0), iVar1 == 0)) {
    if (((param_2 == 0) || (*(long *)(param_2 + 0x48) == 0)) ||
       ((iVar1 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"notAllowed"), iVar1 == 0 ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                              PTR_s_http___relaxng_org_ns_structure__10227d2b0), iVar1 == 0)))) {
      local_18 = (undefined4 *)FUN_10096a7f3(param_1,param_2,1);
    }
    else {
      local_18 = (undefined4 *)FUN_10096154d(param_1,param_2);
      if (local_18 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      *local_18 = 1;
      if (*(long *)(param_2 + 0x18) != 0) {
        FUN_100960ece(param_1,param_2,0x41f,"element notAllowed is not empty\n",0,0);
      }
    }
  }
  else {
    local_18 = (undefined4 *)FUN_10096154d(param_1,param_2);
    if (local_18 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    *local_18 = 0;
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_100960ece(param_1,param_2,0x400,"element empty is not empty\n",0,0);
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) == 0) {
    *(undefined4 **)(*(long *)(param_1 + 0x30) + 0x18) = local_18;
  }
  else {
    for (local_10 = *(long *)(*(long *)(param_1 + 0x30) + 0x18); *(long *)(local_10 + 0x40) != 0;
        local_10 = *(long *)(local_10 + 0x40)) {
    }
    *(undefined4 **)(local_10 + 0x40) = local_18;
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    local_3c = 0;
  }
  else {
    FUN_100960ece(param_1,*(long *)(param_2 + 0x30),0x451,"start more than one children\n",0,0);
    local_3c = 0xffffffff;
  }
  return local_3c;
}

