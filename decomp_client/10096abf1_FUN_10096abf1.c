
undefined4 FUN_10096abf1(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 local_2c;
  long local_28;
  undefined4 local_10;
  
  local_10 = 0;
  local_28 = param_2;
  if (param_2 == 0) {
    FUN_100960ece(param_1,0,0x40d,"grammar has no children\n",0,0);
    local_2c = 0xffffffff;
  }
  else {
    for (; local_28 != 0; local_28 = *(long *)(local_28 + 0x30)) {
      if ((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) {
LAB_10096acf5:
        if ((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"define");
          if (iVar1 != 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___relaxng_org_ns_structure__10227d2b0);
            if (iVar1 != 0) {
              iVar1 = FUN_100968349(param_1,local_28);
              if (iVar1 != 0) {
                local_10 = 0xffffffff;
              }
              goto LAB_10096adfb;
            }
          }
        }
        if ((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"include");
          if (iVar1 != 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___relaxng_org_ns_structure__10227d2b0);
            if (iVar1 != 0) {
              iVar1 = FUN_1009681f8(param_1,local_28);
              if (iVar1 != 0) {
                local_10 = 0xffffffff;
              }
              goto LAB_10096adfb;
            }
          }
        }
        FUN_100960ece(param_1,local_28,0x40c,"grammar has unexpected child %s\n",
                      *(undefined8 *)(local_28 + 0x10),0);
        local_10 = 0xffffffff;
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"start");
        if (iVar1 == 0) goto LAB_10096acf5;
        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                             PTR_s_http___relaxng_org_ns_structure__10227d2b0);
        if (iVar1 == 0) goto LAB_10096acf5;
        if (*(long *)(local_28 + 0x18) == 0) {
          FUN_100960ece(param_1,local_28,0x452,"start has no children\n",0,0);
        }
        else {
          iVar1 = FUN_10096a96f(param_1,*(undefined8 *)(local_28 + 0x18));
          if (iVar1 != 0) {
            local_10 = 0xffffffff;
          }
        }
      }
LAB_10096adfb:
    }
    local_2c = local_10;
  }
  return local_2c;
}

