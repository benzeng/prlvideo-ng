
void FUN_100957138(long param_1)

{
  int iVar1;
  xmlDictPtr local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      local_10 = *(xmlDictPtr *)(*(long *)(param_1 + 0x28) + 0x98);
    }
    if (((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 8) != 0)) &&
       ((local_10 == (xmlDictPtr)0x0 ||
        (iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 8)), iVar1 == 0)))) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 8));
    }
    (*(code *)_xmlFree)(param_1);
    return;
  }
  return;
}

