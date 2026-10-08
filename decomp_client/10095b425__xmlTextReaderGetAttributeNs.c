
xmlChar * _xmlTextReaderGetAttributeNs(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar *local_38;
  xmlChar *local_18;
  undefined8 *local_10;
  
  local_18 = (xmlChar *)0x0;
  if ((param_1 == 0) || (param_2 == (xmlChar *)0x0)) {
    local_38 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    local_38 = (xmlChar *)0x0;
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    if (*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) {
      iVar1 = _xmlStrEqual(param_3,(xmlChar *)"http://www.w3.org/2000/xmlns/");
      if (iVar1 == 0) {
        local_38 = _xmlGetNsProp(*(xmlNodePtr *)(param_1 + 0x70),param_2,param_3);
      }
      else {
        iVar1 = _xmlStrEqual(param_2,(xmlChar *)"xmlns");
        if (iVar1 == 0) {
          local_18 = param_2;
        }
        for (local_10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x60);
            local_10 != (undefined8 *)0x0; local_10 = (undefined8 *)*local_10) {
          if (((local_18 == (xmlChar *)0x0) && (local_10[3] == 0)) ||
             ((local_10[3] != 0 &&
              (iVar1 = _xmlStrEqual((xmlChar *)local_10[3],param_2), iVar1 != 0)))) {
            pxVar2 = _xmlStrdup((xmlChar *)local_10[2]);
            return pxVar2;
          }
        }
        local_38 = (xmlChar *)0x0;
      }
    }
    else {
      local_38 = (xmlChar *)0x0;
    }
  }
  else {
    local_38 = (xmlChar *)0x0;
  }
  return local_38;
}

