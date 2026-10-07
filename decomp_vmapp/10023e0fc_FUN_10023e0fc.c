
int FUN_10023e0fc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int local_4c;
  int local_38;
  int local_34;
  xmlChar *local_30;
  long local_20;
  
  local_20 = 0;
  if (*(int *)(*(long *)(param_1 + 0x60) + 0x18) < 1) {
    local_4c = -1;
  }
  else {
    if (*(long *)(param_2 + 0x10) == 0) {
      local_34 = 0;
      while ((lVar1 = local_20, local_34 < *(int *)(*(long *)(param_1 + 0x60) + 0x10) &&
             ((lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x30) + (long)local_34 * 8),
              lVar1 == 0 || (iVar4 = FUN_10023df8b(param_1,param_2,lVar1), iVar4 != 1))))) {
        local_34 = local_34 + 1;
      }
      local_20 = lVar1;
      if (local_20 == 0) {
        local_38 = -1;
      }
      else {
        local_30 = _xmlNodeListGetString
                             (*(xmlDocPtr *)(local_20 + 0x40),*(xmlNodePtr *)(local_20 + 0x18),1);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 8);
        *(long *)(*(long *)(param_1 + 0x60) + 8) = local_20;
        *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20) = local_30;
        local_38 = FUN_10023df44(param_1,*(undefined8 *)(param_2 + 0x30));
        if (*(long *)(*(long *)(param_1 + 0x60) + 0x20) != 0) {
          local_30 = *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20);
        }
        if (local_30 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_30);
        }
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = uVar2;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = uVar3;
        if (local_38 == 0) {
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x30) + (long)local_34 * 8) = 0;
          *(int *)(*(long *)(param_1 + 0x60) + 0x18) =
               *(int *)(*(long *)(param_1 + 0x60) + 0x18) + -1;
        }
      }
    }
    else {
      local_34 = 0;
      while ((lVar1 = local_20, local_34 < *(int *)(*(long *)(param_1 + 0x60) + 0x10) &&
             (((lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x30) + (long)local_34 * 8),
               lVar1 == 0 ||
               (iVar4 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),*(xmlChar **)(lVar1 + 0x10)),
               iVar4 == 0)) ||
              ((((*(long *)(param_2 + 0x18) != 0 && (**(char **)(param_2 + 0x18) != '\0')) ||
                (*(long *)(lVar1 + 0x48) != 0)) &&
               ((*(long *)(lVar1 + 0x48) == 0 ||
                (iVar4 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x18),
                                      *(xmlChar **)(*(long *)(lVar1 + 0x48) + 0x10)), iVar4 == 0))))
              ))))) {
        local_34 = local_34 + 1;
      }
      local_20 = lVar1;
      if (local_20 == 0) {
        local_38 = -1;
      }
      else {
        local_30 = _xmlNodeListGetString
                             (*(xmlDocPtr *)(local_20 + 0x40),*(xmlNodePtr *)(local_20 + 0x18),1);
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 8);
        *(long *)(*(long *)(param_1 + 0x60) + 8) = local_20;
        *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20) = local_30;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28) = 0;
        local_38 = FUN_10023df44(param_1,*(undefined8 *)(param_2 + 0x30));
        if (*(long *)(*(long *)(param_1 + 0x60) + 0x20) != 0) {
          local_30 = *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20);
        }
        if (local_30 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_30);
        }
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = uVar2;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = uVar3;
        if (local_38 == 0) {
          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x30) + (long)local_34 * 8) = 0;
          *(int *)(*(long *)(param_1 + 0x60) + 0x18) =
               *(int *)(*(long *)(param_1 + 0x60) + 0x18) + -1;
        }
      }
    }
    local_4c = local_38;
  }
  return local_4c;
}

