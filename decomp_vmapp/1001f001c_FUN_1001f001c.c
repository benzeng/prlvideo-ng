
long FUN_1001f001c(undefined8 param_1,undefined8 param_2,long param_3,int *param_4)

{
  int iVar1;
  long local_30;
  long local_18;
  long local_10;
  
  local_18 = 0;
  local_30 = param_3;
  do {
    if ((((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"attribute"), iVar1 == 0))
       || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)) {
      if ((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) {
        return local_30;
      }
      iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"attributeGroup");
      if (iVar1 == 0) {
        return local_30;
      }
      iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
      if (iVar1 == 0) {
        return local_30;
      }
    }
    local_10 = 0;
    if (((local_30 == 0) || (*(long *)(local_30 + 0x48) == 0)) ||
       ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"attribute"), iVar1 == 0 ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                              PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)))) {
      if ((((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) &&
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"attributeGroup"),
          iVar1 != 0)) &&
         (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)) {
        local_10 = FUN_1001f26bc(param_1,param_2,local_30,0);
      }
    }
    else {
      local_10 = FUN_1001f19cd(param_1,param_2,local_30,0);
    }
    if (local_10 != 0) {
      if (local_18 == 0) {
        if (*param_4 == 0x10) {
          *(long *)(param_4 + 0xe) = local_10;
        }
        else {
          *(long *)(param_4 + 0x10) = local_10;
        }
        local_18 = local_10;
      }
      else {
        *(long *)(local_18 + 8) = local_10;
        local_18 = local_10;
      }
    }
    local_30 = *(long *)(local_30 + 0x30);
  } while( true );
}

