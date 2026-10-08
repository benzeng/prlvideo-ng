
xmlNsPtr _xmlNewReconciliedNs(xmlDocPtr param_1,xmlNodePtr param_2,long param_3)

{
  ulong uVar1;
  xmlNsPtr local_78;
  xmlChar local_58 [64];
  xmlNsPtr local_18;
  uint local_c;
  
  local_c = 1;
  if (param_2 == (xmlNodePtr)0x0) {
    local_78 = (xmlNsPtr)0x0;
  }
  else if ((param_3 == 0) || (*(int *)(param_3 + 8) != 0x12)) {
    local_78 = (xmlNsPtr)0x0;
  }
  else {
    local_78 = _xmlSearchNsByHref(param_1,param_2,*(xmlChar **)(param_3 + 0x10));
    if (local_78 == (xmlNsPtr)0x0) {
      local_18 = local_78;
      if (*(long *)(param_3 + 0x18) == 0) {
        _snprintf((char *)local_58,0x32,"default");
      }
      else {
        _snprintf((char *)local_58,0x32,"%.20s",*(undefined8 *)(param_3 + 0x18));
      }
      local_18 = _xmlSearchNs(param_1,param_2,local_58);
      while (local_18 != (xmlNsPtr)0x0) {
        if (1000 < (int)local_c) {
          return (xmlNsPtr)0x0;
        }
        if (*(long *)(param_3 + 0x18) == 0) {
          uVar1 = (ulong)local_c;
          local_c = local_c + 1;
          _snprintf((char *)local_58,0x32,"default%d",uVar1);
        }
        else {
          uVar1 = (ulong)local_c;
          local_c = local_c + 1;
          _snprintf((char *)local_58,0x32,"%.20s%d",*(undefined8 *)(param_3 + 0x18),uVar1);
        }
        local_18 = _xmlSearchNs(param_1,param_2,local_58);
      }
      local_78 = _xmlNewNs(param_2,*(xmlChar **)(param_3 + 0x10),local_58);
    }
  }
  return local_78;
}

