
void FUN_100246b7d(long param_1,xmlChar *param_2,xmlChar *param_3,undefined8 *param_4)

{
  int iVar1;
  xmlAttributePtr pxVar2;
  xmlChar local_78 [56];
  xmlElementPtr local_40;
  xmlChar *local_38;
  int local_30;
  int local_2c;
  xmlAttributePtr local_28;
  xmlChar *local_20;
  xmlAttributePtr local_18;
  xmlChar *local_10;
  
  local_30 = 1;
  local_40 = _xmlGetDtdQElementDesc
                       (*(xmlDtdPtr *)(*(long *)(param_1 + 0x10) + 0x50),param_2,param_3);
  if (local_40 == (xmlElementPtr)0x0) {
    local_40 = _xmlGetDtdQElementDesc
                         (*(xmlDtdPtr *)(*(long *)(param_1 + 0x10) + 0x58),param_2,param_3);
    local_30 = 0;
  }
  while( true ) {
    if (local_40 == (xmlElementPtr)0x0) {
      return;
    }
    local_28 = local_40->attributes;
    if (((*(int *)(*(long *)(param_1 + 0x10) + 0x4c) == 1) &&
        (*(long *)(*(long *)(param_1 + 0x10) + 0x58) != 0)) && (*(int *)(param_1 + 0x9c) != 0)) {
      for (; local_28 != (xmlAttributePtr)0x0; local_28 = local_28->nexth) {
        if (((local_28->defaultValue != (xmlChar *)0x0) &&
            (pxVar2 = _xmlGetDtdQAttrDesc(*(xmlDtdPtr *)(*(long *)(param_1 + 0x10) + 0x58),
                                          local_28->elem,local_28->name,local_28->prefix),
            pxVar2 == local_28)) &&
           (pxVar2 = _xmlGetDtdQAttrDesc(*(xmlDtdPtr *)(*(long *)(param_1 + 0x10) + 0x50),
                                         local_28->elem,local_28->name,local_28->prefix),
           pxVar2 == (xmlAttributePtr)0x0)) {
          if (local_28->prefix == (xmlChar *)0x0) {
            local_20 = _xmlStrdup(local_28->name);
          }
          else {
            local_20 = _xmlStrdup(local_28->prefix);
            local_20 = _xmlStrcat(local_20,(xmlChar *)":");
            local_20 = _xmlStrcat(local_20,local_28->name);
          }
          local_38 = (xmlChar *)0x0;
          if (param_4 != (undefined8 *)0x0) {
            local_2c = 0;
            local_38 = (xmlChar *)*param_4;
            while ((local_38 != (xmlChar *)0x0 &&
                   (iVar1 = _xmlStrEqual(local_38,local_20), iVar1 == 0))) {
              local_2c = local_2c + 2;
              local_38 = (xmlChar *)param_4[local_2c];
            }
          }
          if (local_38 == (xmlChar *)0x0) {
            FUN_100244133(param_1,0x21a,
                          "standalone: attribute %s on %s defaulted from external subset\n",local_20
                          ,local_28->elem);
          }
        }
      }
    }
    for (local_28 = local_40->attributes; local_28 != (xmlAttributePtr)0x0;
        local_28 = local_28->nexth) {
      if ((local_28->defaultValue != (xmlChar *)0x0) &&
         ((((local_28->prefix != (xmlChar *)0x0 &&
            (iVar1 = _xmlStrEqual(local_28->prefix,(xmlChar *)"xmlns"), iVar1 != 0)) ||
           (((local_28->prefix == (xmlChar *)0x0 &&
             (iVar1 = _xmlStrEqual(local_28->name,(xmlChar *)"xmlns"), iVar1 != 0)) ||
            ((*(uint *)(param_1 + 0x1b0) >> 2 & 1) != 0)))) &&
          ((local_18 = _xmlGetDtdQAttrDesc(*(xmlDtdPtr *)(*(long *)(param_1 + 0x10) + 0x50),
                                           local_28->elem,local_28->name,local_28->prefix),
           local_18 == local_28 || (local_18 == (xmlAttributePtr)0x0)))))) {
        local_10 = _xmlBuildQName(local_28->name,local_28->prefix,local_78,0x32);
        if (local_10 == (xmlChar *)0x0) {
          FUN_1002440a9(param_1,"xmlSAX2StartElement");
          return;
        }
        local_38 = (xmlChar *)0x0;
        if (param_4 != (undefined8 *)0x0) {
          local_2c = 0;
          local_38 = (xmlChar *)*param_4;
          while ((local_38 != (xmlChar *)0x0 &&
                 (iVar1 = _xmlStrEqual(local_38,local_10), iVar1 == 0))) {
            local_2c = local_2c + 2;
            local_38 = (xmlChar *)param_4[local_2c];
          }
        }
        if (local_38 == (xmlChar *)0x0) {
          FUN_100245c9d(param_1,local_10,local_28->defaultValue,param_3);
        }
        if ((local_78 != local_10) && (local_28->name != local_10)) {
          (*(code *)_xmlFree)(local_10);
        }
      }
    }
    if (local_30 != 1) break;
    local_40 = _xmlGetDtdQElementDesc
                         (*(xmlDtdPtr *)(*(long *)(param_1 + 0x10) + 0x58),param_2,param_3);
    local_30 = 0;
  }
  return;
}

