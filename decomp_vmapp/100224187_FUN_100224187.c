
void FUN_100224187(undefined8 param_1,xmlNodePtr param_2)

{
  xmlDtdPtr cur;
  long lVar1;
  undefined8 uVar2;
  xmlDeregisterNodeFunc *ppxVar3;
  xmlDtdPtr local_18;
  
  if (param_2 != (xmlNodePtr)0x0) {
    if (___xmlRegisterCallbacks != 0) {
      ppxVar3 = ___xmlDeregisterNodeDefaultValue();
      if (*ppxVar3 != (xmlDeregisterNodeFunc)0x0) {
        ppxVar3 = ___xmlDeregisterNodeDefaultValue();
        (**ppxVar3)(param_2);
      }
    }
    if (param_2[1]._private != (void *)0x0) {
      FUN_100224169(param_2[1]._private);
    }
    param_2[1]._private = (void *)0x0;
    if (*(long *)&param_2[1].type != 0) {
      _xmlFreeRefTable(*(xmlRefTablePtr *)&param_2[1].type);
    }
    *(undefined8 *)&param_2[1].type = 0;
    local_18 = (xmlDtdPtr)param_2->properties;
    cur = (xmlDtdPtr)param_2->content;
    if (cur == local_18) {
      local_18 = (xmlDtdPtr)0x0;
    }
    if (local_18 != (xmlDtdPtr)0x0) {
      _xmlUnlinkNode((xmlNodePtr)param_2->properties);
      param_2->properties = (_xmlAttr *)0x0;
      _xmlFreeDtd(local_18);
    }
    if (cur != (xmlDtdPtr)0x0) {
      _xmlUnlinkNode((xmlNodePtr)param_2->content);
      param_2->content = (xmlChar *)0x0;
      _xmlFreeDtd(cur);
    }
    if (param_2->children != (_xmlNode *)0x0) {
      FUN_100223b93(param_1,param_2->children);
    }
    if (param_2->psvi != (void *)0x0) {
      (*(code *)_xmlFree)(param_2->psvi);
    }
    if (param_2->name != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(param_2->name);
    }
    lVar1._0_2_ = param_2->line;
    lVar1._2_2_ = param_2->extra;
    lVar1._4_4_ = *(undefined4 *)&param_2->field_0x74;
    if (lVar1 != 0) {
      uVar2._0_2_ = param_2->line;
      uVar2._2_2_ = param_2->extra;
      uVar2._4_4_ = *(undefined4 *)&param_2->field_0x74;
      (*(code *)_xmlFree)(uVar2);
    }
    if (param_2->nsDef != (xmlNs *)0x0) {
      _xmlFreeNsList(param_2->nsDef);
    }
    if (param_2[1].name != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(param_2[1].name);
    }
    if (param_2[1].last != (_xmlNode *)0x0) {
      _xmlDictFree((xmlDictPtr)param_2[1].last);
    }
    (*(code *)_xmlFree)(param_2);
  }
  return;
}

