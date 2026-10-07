
undefined4 * FUN_1002327d1(undefined8 param_1,xmlNodePtr param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  undefined4 *local_50;
  long local_38;
  undefined4 *local_30;
  void *local_28;
  xmlChar *local_20;
  xmlChar *local_18;
  int local_c;
  
  local_30 = (undefined4 *)0x0;
  local_28 = (void *)0x0;
  local_c = 0;
  local_30 = (undefined4 *)FUN_10022dc25(param_1,param_2);
  if (local_30 == (undefined4 *)0x0) {
    local_50 = (undefined4 *)0x0;
  }
  else {
    *local_30 = 7;
    local_20 = _xmlGetProp(param_2,(xmlChar *)"type");
    if (local_20 != (xmlChar *)0x0) {
      FUN_100239887(local_20);
      iVar1 = _xmlValidateNCName(local_20,0);
      if (iVar1 != 0) {
        FUN_10022d5a6(param_1,param_2,0x458,"value type \'%s\' is not an NCName\n",local_20,0);
      }
      local_18 = (xmlChar *)FUN_1002325d8(param_1,param_2);
      if (local_18 == (xmlChar *)0x0) {
        local_18 = _xmlStrdup((xmlChar *)"http://relaxng.org/ns/structure/1.0");
      }
      *(xmlChar **)(local_30 + 4) = local_20;
      *(xmlChar **)(local_30 + 6) = local_18;
      local_28 = _xmlHashLookup(DAT_1011b8920,local_18);
      if (local_28 == (void *)0x0) {
        FUN_10022d5a6(param_1,param_2,0x45c,"Use of unregistered type library \'%s\'\n",local_18,0);
        *(undefined8 *)(local_30 + 10) = 0;
      }
      else {
        *(void **)(local_30 + 10) = local_28;
        if (*(long *)((long)local_28 + 0x10) == 0) {
          FUN_10022d5a6(param_1,param_2,0x402,
                        "Internal error with type library \'%s\': no \'have\'\n",local_18,0);
        }
        else {
          local_c = (**(code **)((long)local_28 + 0x10))
                              (*(undefined8 *)((long)local_28 + 8),*(undefined8 *)(local_30 + 4));
          if (local_c != 1) {
            FUN_10022d5a6(param_1,param_2,0x457,
                          "Error type \'%s\' is not exported by type library \'%s\'\n",
                          *(undefined8 *)(local_30 + 4),local_18);
          }
        }
      }
    }
    if (param_2->children == (_xmlNode *)0x0) {
      pxVar2 = _xmlStrdup((xmlChar *)"");
      *(xmlChar **)(local_30 + 8) = pxVar2;
    }
    else if (((param_2->children->type == XML_TEXT_NODE) ||
             (param_2->children->type == XML_CDATA_SECTION_NODE)) &&
            (param_2->children->next == (_xmlNode *)0x0)) {
      if (local_30 != (undefined4 *)0x0) {
        pxVar2 = _xmlNodeGetContent(param_2);
        *(xmlChar **)(local_30 + 8) = pxVar2;
        if (*(long *)(local_30 + 8) == 0) {
          FUN_10022d5a6(param_1,param_2,0x460,"Element <value> has no content\n",0,0);
        }
        else if (((local_28 != (void *)0x0) && (*(long *)((long)local_28 + 0x18) != 0)) &&
                (local_c == 1)) {
          local_38 = 0;
          local_c = (**(code **)((long)local_28 + 0x18))
                              (*(undefined8 *)((long)local_28 + 8),*(undefined8 *)(local_30 + 4),
                               *(undefined8 *)(local_30 + 8),&local_38,param_2);
          if (local_c == 1) {
            if (local_38 != 0) {
              *(long *)(local_30 + 0x12) = local_38;
            }
          }
          else {
            FUN_10022d5a6(param_1,param_2,0x41b,"Value \'%s\' is not acceptable for type \'%s\'\n",
                          *(undefined8 *)(local_30 + 8),*(undefined8 *)(local_30 + 4));
          }
        }
      }
    }
    else {
      FUN_10022d5a6(param_1,param_2,0x454,"Expecting a single text value for <value>content\n",0,0);
    }
    local_50 = local_30;
  }
  return local_50;
}

