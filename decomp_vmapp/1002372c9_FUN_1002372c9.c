
undefined4 FUN_1002372c9(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 local_2c;
  long local_28;
  undefined4 local_10;
  
  local_10 = 0;
  local_28 = param_2;
  if (param_2 == 0) {
    FUN_10022d5a6(param_1,0,0x40d,"grammar has no children\n",0,0);
    local_2c = 0xffffffff;
  }
  else {
    for (; local_28 != 0; local_28 = *(long *)(local_28 + 0x30)) {
      if ((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) {
LAB_1002373cd:
        if ((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"define");
          if (iVar1 != 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___relaxng_org_ns_structure__1011151b0);
            if (iVar1 != 0) {
              iVar1 = FUN_100234a21(param_1,local_28);
              if (iVar1 != 0) {
                local_10 = 0xffffffff;
              }
              goto LAB_1002374d3;
            }
          }
        }
        if ((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"include");
          if (iVar1 != 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___relaxng_org_ns_structure__1011151b0);
            if (iVar1 != 0) {
              iVar1 = FUN_1002348d0(param_1,local_28);
              if (iVar1 != 0) {
                local_10 = 0xffffffff;
              }
              goto LAB_1002374d3;
            }
          }
        }
        FUN_10022d5a6(param_1,local_28,0x40c,"grammar has unexpected child %s\n",
                      *(undefined8 *)(local_28 + 0x10),0);
        local_10 = 0xffffffff;
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"start");
        if (iVar1 == 0) goto LAB_1002373cd;
        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                             PTR_s_http___relaxng_org_ns_structure__1011151b0);
        if (iVar1 == 0) goto LAB_1002373cd;
        if (*(long *)(local_28 + 0x18) == 0) {
          FUN_10022d5a6(param_1,local_28,0x452,"start has no children\n",0,0);
        }
        else {
          iVar1 = FUN_100237047(param_1,*(undefined8 *)(local_28 + 0x18));
          if (iVar1 != 0) {
            local_10 = 0xffffffff;
          }
        }
      }
LAB_1002374d3:
    }
    local_2c = local_10;
  }
  return local_2c;
}

