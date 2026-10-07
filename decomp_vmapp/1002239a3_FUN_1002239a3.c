
void FUN_1002239a3(long param_1,xmlNodePtr param_2)

{
  xmlDictPtr dict;
  int iVar1;
  xmlDeregisterNodeFunc *ppxVar2;
  
  dict = *(xmlDictPtr *)(*(long *)(param_1 + 0x20) + 0x1c8);
  if (param_2 != (xmlNodePtr)0x0) {
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlDeregisterNodeDefaultValue(), *ppxVar2 != (xmlDeregisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlDeregisterNodeDefaultValue();
      (**ppxVar2)(param_2);
    }
    if ((((param_2->parent != (_xmlNode *)0x0) && (param_2->parent->doc != (_xmlDoc *)0x0)) &&
        ((param_2->parent->doc->intSubset != (_xmlDtd *)0x0 ||
         (param_2->parent->doc->extSubset != (_xmlDtd *)0x0)))) &&
       (iVar1 = _xmlIsID(param_2->parent->doc,param_2->parent,(xmlAttrPtr)param_2), iVar1 != 0)) {
      FUN_1002238aa(param_2->parent->doc,param_2);
    }
    if (param_2->children != (_xmlNode *)0x0) {
      FUN_100223b93(param_1,param_2->children);
    }
    if ((param_2->name != (xmlChar *)0x0) &&
       ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,param_2->name), iVar1 == 0)))) {
      (*(code *)_xmlFree)(param_2->name);
    }
    if (((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
       (99 < *(int *)(*(long *)(param_1 + 0x20) + 0x248))) {
      (*(code *)_xmlFree)(param_2);
    }
    else {
      param_2->next = *(_xmlNode **)(*(long *)(param_1 + 0x20) + 0x250);
      *(xmlNodePtr *)(*(long *)(param_1 + 0x20) + 0x250) = param_2;
      *(int *)(*(long *)(param_1 + 0x20) + 0x248) = *(int *)(*(long *)(param_1 + 0x20) + 0x248) + 1;
    }
    return;
  }
  return;
}

