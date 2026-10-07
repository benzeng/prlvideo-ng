
undefined * _xmlXPathNextNamespace(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  xmlNsPtr *ppxVar3;
  undefined8 local_30;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_30 = (undefined *)0x0;
  }
  else if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) == 1) {
    if ((*(long *)(*(long *)(param_1 + 0x18) + 200) == 0) && (param_2 != PTR_DAT_101111188)) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 200) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 200));
      }
      lVar1 = *(long *)(param_1 + 0x18);
      ppxVar3 = _xmlGetNsList((xmlDocPtr)**(undefined8 **)(param_1 + 0x18),
                              *(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8));
      *(xmlNsPtr **)(lVar1 + 200) = ppxVar3;
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0xd0) = 0;
      if (*(long *)(*(long *)(param_1 + 0x18) + 200) != 0) {
        while (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 200) +
                        (long)*(int *)(*(long *)(param_1 + 0x18) + 0xd0) * 8) != 0) {
          *(int *)(*(long *)(param_1 + 0x18) + 0xd0) =
               *(int *)(*(long *)(param_1 + 0x18) + 0xd0) + 1;
        }
      }
      local_30 = PTR_DAT_101111188;
    }
    else if (*(int *)(*(long *)(param_1 + 0x18) + 0xd0) < 1) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 200) != 0) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 200));
      }
      *(undefined8 *)(*(long *)(param_1 + 0x18) + 200) = 0;
      local_30 = (undefined *)0x0;
    }
    else {
      lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 200);
      lVar2 = *(long *)(param_1 + 0x18);
      *(int *)(lVar2 + 0xd0) = *(int *)(lVar2 + 0xd0) + -1;
      local_30 = *(undefined **)(lVar1 + (long)*(int *)(lVar2 + 0xd0) * 8);
    }
  }
  else {
    local_30 = (undefined *)0x0;
  }
  return local_30;
}

