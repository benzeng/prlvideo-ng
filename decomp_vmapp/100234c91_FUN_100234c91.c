
undefined4 * FUN_100234c91(long param_1,xmlNodePtr param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  bool bVar3;
  xmlNodePtr node;
  xmlChar *pxVar4;
  undefined8 uVar5;
  xmlNodePtr local_28;
  xmlChar *local_20;
  undefined4 *local_10;
  
  bVar3 = false;
  pvVar2 = param_2->psvi;
  if (pvVar2 == (void *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10 = (undefined4 *)FUN_10022dc25(param_1,param_2);
    if (local_10 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *local_10 = 0xc;
    if (*(long *)((long)pvVar2 + 0x18) == 0) {
      node = _xmlDocGetRootElement(*(xmlDocPtr *)((long)pvVar2 + 0x10));
      if (node == (xmlNodePtr)0x0) {
        FUN_10022d5a6(param_1,param_2,0x407,"xmlRelaxNGParse: %s is empty\n",
                      *(undefined8 *)(param_1 + 0x80),0);
        return (undefined4 *)0x0;
      }
      pxVar4 = _xmlGetProp(node,(xmlChar *)"ns");
      if (pxVar4 == (xmlChar *)0x0) {
        local_20 = (xmlChar *)0x0;
        local_28 = param_2;
        while (((local_28 != (xmlNodePtr)0x0 && (local_28->type == XML_ELEMENT_NODE)) &&
               (local_20 = _xmlGetProp(local_28,(xmlChar *)"ns"), local_20 == (xmlChar *)0x0))) {
          local_28 = local_28->parent;
        }
        if (local_20 != (xmlChar *)0x0) {
          _xmlSetProp(node,(xmlChar *)"ns",local_20);
          bVar3 = true;
          (*(code *)_xmlFree)(local_20);
        }
      }
      else {
        (*(code *)_xmlFree)(pxVar4);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x80;
      uVar5 = FUN_10023920b(param_1,node);
      *(undefined8 *)((long)pvVar2 + 0x20) = uVar5;
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      if ((*(long *)((long)pvVar2 + 0x20) != 0) &&
         (*(long *)(*(long *)((long)pvVar2 + 0x20) + 8) != 0)) {
        *(undefined8 *)((long)pvVar2 + 0x18) =
             *(undefined8 *)(*(long *)(*(long *)((long)pvVar2 + 0x20) + 8) + 0x18);
      }
      if (bVar3) {
        _xmlUnsetProp(node,(xmlChar *)"ns");
      }
    }
    *(undefined8 *)(local_10 + 0xc) = *(undefined8 *)((long)pvVar2 + 0x18);
  }
  return local_10;
}

