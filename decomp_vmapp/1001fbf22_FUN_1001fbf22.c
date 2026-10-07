
undefined4 FUN_1001fbf22(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_18;
  long local_10;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (undefined4 *)0x0)) {
    return 0xffffffff;
  }
  *param_4 = 0;
  lVar1 = *(long *)(param_1 + 0xa0);
  for (local_10 = *(long *)(param_3 + 0x58); local_10 != 0; local_10 = *(long *)(local_10 + 0x30)) {
    if (*(long *)(local_10 + 0x48) == 0) {
      iVar2 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"id");
      if ((iVar2 == 0) &&
         (iVar2 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"mixed"), iVar2 == 0)) {
        FUN_1001ea19e(param_1,0xbdb,0,0,local_10);
      }
    }
    else {
      iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
      if (iVar2 != 0) {
        FUN_1001ea19e(param_1,0xbdb,0,0,local_10);
      }
    }
  }
  FUN_1001ef36d(param_1,0,0,param_3,"id");
  iVar2 = FUN_1001efa9f(param_1,0,0,param_3,"mixed",0);
  if ((iVar2 != 0) && (((*(uint *)(lVar1 + 0x58) ^ 1) & 1) != 0)) {
    *(uint *)(lVar1 + 0x58) = *(uint *)(lVar1 + 0x58) | 1;
  }
  local_18 = *(long *)(param_3 + 0x18);
  if ((((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
      (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"annotation"), iVar2 != 0)) &&
     (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)) {
    uVar3 = FUN_1001f020a(param_1,param_2,local_18);
    FUN_1001f31b2(lVar1,uVar3);
    local_18 = *(long *)(local_18 + 0x30);
  }
  if (local_18 == 0) {
    FUN_1001eac65(param_1,0xbda,0,0,param_3,0,0,"(annotation?, (restriction | extension))");
    FUN_1001eac65(param_1,0xbda,0,0,param_3,0,0,"(annotation?, (restriction | extension))");
  }
  else if (((*(long *)(local_18 + 0x48) != 0) &&
           (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"restriction"),
           iVar2 != 0)) &&
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)) {
    FUN_1001fa87e(param_1,param_2,local_18,10);
    *param_4 = 1;
    local_18 = *(long *)(local_18 + 0x30);
    goto LAB_1001fc298;
  }
  if (((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
     ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"extension"), iVar2 != 0 &&
      (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                            PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)))) {
    FUN_1001fb65a(param_1,param_2,local_18,10);
    *param_4 = 1;
    local_18 = *(long *)(local_18 + 0x30);
  }
LAB_1001fc298:
  if (local_18 != 0) {
    FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_18,0,"(annotation?, (restriction | extension))");
  }
  return 0;
}

