
void FUN_1008ba782(xmlNodePtr param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  xmlDictPtr local_10;
  
  if (param_1 != (xmlNodePtr)0x0) {
    if (param_1->doc == (_xmlDoc *)0x0) {
      local_10 = (xmlDictPtr)0x0;
    }
    else {
      local_10 = param_1->doc->dict;
    }
    _xmlUnlinkNode(param_1);
    if (param_1->nsDef != (xmlNs *)0x0) {
      _xmlFreeEnumeration((xmlEnumerationPtr)param_1->nsDef);
    }
    if (local_10 == (xmlDictPtr)0x0) {
      lVar3._0_2_ = param_1->line;
      lVar3._2_2_ = param_1->extra;
      lVar3._4_4_ = *(undefined4 *)&param_1->field_0x74;
      if (lVar3 != 0) {
        uVar4._0_2_ = param_1->line;
        uVar4._2_2_ = param_1->extra;
        uVar4._4_4_ = *(undefined4 *)&param_1->field_0x74;
        (*(code *)_xmlFree)(uVar4);
      }
      if (param_1->name != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(param_1->name);
      }
      if (param_1->properties != (_xmlAttr *)0x0) {
        (*(code *)_xmlFree)(param_1->properties);
      }
      if (param_1->psvi != (void *)0x0) {
        (*(code *)_xmlFree)(param_1->psvi);
      }
    }
    else {
      lVar1._0_2_ = param_1->line;
      lVar1._2_2_ = param_1->extra;
      lVar1._4_4_ = *(undefined4 *)&param_1->field_0x74;
      if (lVar1 != 0) {
        iVar5 = _xmlDictOwns(local_10,*(xmlChar **)&param_1->line);
        if (iVar5 == 0) {
          uVar2._0_2_ = param_1->line;
          uVar2._2_2_ = param_1->extra;
          uVar2._4_4_ = *(undefined4 *)&param_1->field_0x74;
          (*(code *)_xmlFree)(uVar2);
        }
      }
      if (param_1->name != (xmlChar *)0x0) {
        iVar5 = _xmlDictOwns(local_10,param_1->name);
        if (iVar5 == 0) {
          (*(code *)_xmlFree)(param_1->name);
        }
      }
      if (param_1->psvi != (void *)0x0) {
        iVar5 = _xmlDictOwns(local_10,param_1->psvi);
        if (iVar5 == 0) {
          (*(code *)_xmlFree)(param_1->psvi);
        }
      }
      if (param_1->properties != (_xmlAttr *)0x0) {
        iVar5 = _xmlDictOwns(local_10,(xmlChar *)param_1->properties);
        if (iVar5 == 0) {
          (*(code *)_xmlFree)(param_1->properties);
        }
      }
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

