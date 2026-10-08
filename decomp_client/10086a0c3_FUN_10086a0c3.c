
void FUN_10086a0c3(long param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = (xmlDictPtr)0x0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      local_10 = *(xmlDictPtr *)(*(long *)(param_1 + 0x40) + 0x98);
    }
    if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x80) == 1)) &&
       (*(long *)(*(long *)(param_1 + 0x18) + 0x28) == param_1)) {
      _xmlFreeNodeList(*(xmlNodePtr *)(param_1 + 0x18));
    }
    if (local_10 == (xmlDictPtr)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x60));
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x68));
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x78));
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x50));
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x48));
      }
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 0x10));
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
        }
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 0x60));
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x60));
        }
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 0x68));
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x68));
        }
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 0x78));
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x78));
        }
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 0x50));
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x50));
        }
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        iVar1 = _xmlDictOwns(local_10,*(xmlChar **)(param_1 + 0x48));
        if (iVar1 == 0) {
          (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x48));
        }
      }
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

