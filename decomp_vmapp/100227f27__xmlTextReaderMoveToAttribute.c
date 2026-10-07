
undefined4 _xmlTextReaderMoveToAttribute(long param_1,xmlChar *param_2)

{
  int iVar1;
  undefined4 local_3c;
  xmlChar *local_28;
  xmlChar *local_20;
  undefined8 *local_18;
  long local_10;
  
  local_28 = (xmlChar *)0x0;
  if ((param_1 == 0) || (param_2 == (xmlChar *)0x0)) {
    local_3c = 0xffffffff;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_3c = 0xffffffff;
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
    local_20 = _xmlSplitQName2(param_2,&local_28);
    if (local_20 == (xmlChar *)0x0) {
      iVar1 = _xmlStrEqual(param_2,(xmlChar *)"xmlns");
      if (iVar1 == 0) {
        for (local_10 = *(long *)(*(long *)(param_1 + 0x70) + 0x58); local_10 != 0;
            local_10 = *(long *)(local_10 + 0x30)) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),param_2);
          if ((iVar1 != 0) &&
             ((*(long *)(local_10 + 0x48) == 0 ||
              (*(long *)(*(long *)(local_10 + 0x48) + 0x18) == 0)))) {
            *(long *)(param_1 + 0x78) = local_10;
            return 1;
          }
        }
        local_3c = 0;
      }
      else {
        for (local_18 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60);
            local_18 != (undefined8 *)0x0; local_18 = (undefined8 *)*local_18) {
          if (local_18[3] == 0) {
            *(undefined8 **)(param_1 + 0x78) = local_18;
            return 1;
          }
        }
        local_3c = 0;
      }
    }
    else {
      iVar1 = _xmlStrEqual(local_28,(xmlChar *)"xmlns");
      if (iVar1 == 0) {
        for (local_10 = *(long *)(*(long *)(param_1 + 0x70) + 0x58); local_10 != 0;
            local_10 = *(long *)(local_10 + 0x30)) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),local_20);
          if (((iVar1 != 0) && (*(long *)(local_10 + 0x48) != 0)) &&
             (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x18),local_28),
             iVar1 != 0)) {
            *(long *)(param_1 + 0x78) = local_10;
            goto LAB_1002280e3;
          }
        }
      }
      else {
        for (local_18 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60);
            local_18 != (undefined8 *)0x0; local_18 = (undefined8 *)*local_18) {
          if ((local_18[3] != 0) &&
             (iVar1 = _xmlStrEqual((xmlChar *)local_18[3],local_20), iVar1 != 0)) {
            *(undefined8 **)(param_1 + 0x78) = local_18;
LAB_1002280e3:
            if (local_20 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_20);
            }
            if (local_28 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_28);
            }
            return 1;
          }
        }
      }
      if (local_20 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_20);
      }
      if (local_28 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_28);
      }
      local_3c = 0;
    }
  }
  else {
    local_3c = 0;
  }
  return local_3c;
}

