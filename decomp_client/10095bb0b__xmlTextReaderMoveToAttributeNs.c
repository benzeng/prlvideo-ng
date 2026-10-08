
undefined4 _xmlTextReaderMoveToAttributeNs(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 local_44;
  long local_28;
  undefined8 *local_18;
  xmlChar *local_10;
  
  local_10 = (xmlChar *)0x0;
  if (((param_1 == 0) || (param_2 == (xmlChar *)0x0)) || (param_3 == (xmlChar *)0x0)) {
    local_44 = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_44 = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    lVar1 = *(long *)(param_1 + 0x70);
    iVar2 = _xmlStrEqual(param_3,(xmlChar *)"http://www.w3.org/2000/xmlns/");
    if (iVar2 == 0) {
      for (local_28 = *(long *)(lVar1 + 0x58); local_28 != 0; local_28 = *(long *)(local_28 + 0x30))
      {
        iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),param_2);
        if (((iVar2 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
           (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),param_3),
           iVar2 != 0)) {
          *(long *)(param_1 + 0x78) = local_28;
          return 1;
        }
      }
      local_44 = 0;
    }
    else {
      iVar2 = _xmlStrEqual(param_2,(xmlChar *)"xmlns");
      if (iVar2 == 0) {
        local_10 = param_2;
      }
      for (local_18 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60);
          local_18 != (undefined8 *)0x0; local_18 = (undefined8 *)*local_18) {
        if (((local_10 == (xmlChar *)0x0) && (local_18[3] == 0)) ||
           ((local_18[3] != 0 && (iVar2 = _xmlStrEqual((xmlChar *)local_18[3],param_2), iVar2 != 0))
           )) {
          *(undefined8 **)(param_1 + 0x78) = local_18;
          return 1;
        }
      }
      local_44 = 0;
    }
  }
  else {
    local_44 = 0;
  }
  return local_44;
}

