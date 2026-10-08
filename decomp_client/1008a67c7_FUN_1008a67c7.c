
undefined4
FUN_1008a67c7(long param_1,long param_2,long param_3,long *param_4,long *param_5,undefined8 *param_6
             ,int param_7,int param_8,int param_9)

{
  int iVar1;
  long lVar2;
  xmlNsPtr pxVar3;
  undefined4 local_5c;
  undefined8 *local_20;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_4 == (long *)0x0)) ||
     ((param_5 == (long *)0x0 || (param_6 == (undefined8 *)0x0)))) {
    local_5c = 0xffffffff;
  }
  else {
    *param_4 = 0;
    if (((*(long *)(param_3 + 0x18) == 0) || (**(char **)(param_3 + 0x18) != 'x')) ||
       ((*(char *)(*(long *)(param_3 + 0x18) + 1) != 'm' ||
        ((*(char *)(*(long *)(param_3 + 0x18) + 2) != 'l' ||
         (*(char *)(*(long *)(param_3 + 0x18) + 3) != '\0')))))) {
      if (((param_8 == 0) || (param_2 != 0)) && (*param_5 != 0)) {
        for (local_20 = (undefined8 *)*param_5; *(undefined8 **)*param_6 != local_20;
            local_20 = (undefined8 *)*local_20) {
          if (((((-2 < *(int *)((long)local_20 + 0x24)) &&
                (((param_8 == 0 || (*(int *)((long)local_20 + 0x24) == -1)) &&
                 (*(int *)(local_20 + 4) == -1)))) &&
               ((*(long *)(local_20[3] + 0x10) != 0 && (**(char **)(local_20[3] + 0x10) != '\0'))))
              && ((param_9 == 0 || (*(long *)(local_20[3] + 0x18) != 0)))) &&
             ((*(long *)(local_20[3] + 0x10) == *(long *)(param_3 + 0x10) ||
              (iVar1 = _xmlStrEqual(*(xmlChar **)(local_20[3] + 0x10),*(xmlChar **)(param_3 + 0x10))
              , iVar1 != 0)))) {
            local_20[2] = param_3;
            *param_4 = local_20[3];
            return 0;
          }
        }
      }
      if (param_2 == 0) {
        pxVar3 = (xmlNsPtr)
                 FUN_1008a5c6b(param_1,*(undefined8 *)(param_3 + 0x10),
                               *(undefined8 *)(param_3 + 0x18));
        if (pxVar3 == (xmlNsPtr)0x0) {
          return 0xffffffff;
        }
        lVar2 = FUN_1008a59a1(param_5,0,param_3,pxVar3,0xfffffffd);
        if (lVar2 == 0) {
          _xmlFreeNs(pxVar3);
          return 0xffffffff;
        }
        *param_4 = (long)pxVar3;
      }
      else {
        pxVar3 = (xmlNsPtr)
                 FUN_1008a661e(param_1,param_2,*(undefined8 *)(param_3 + 0x10),
                               *(undefined8 *)(param_3 + 0x18),0);
        if (pxVar3 == (xmlNsPtr)0x0) {
          return 0xffffffff;
        }
        if (*param_5 != 0) {
          for (local_20 = (undefined8 *)*param_5; *(undefined8 **)*param_6 != local_20;
              local_20 = (undefined8 *)*local_20) {
            if (((*(int *)((long)local_20 + 0x24) < param_7) && (*(int *)(local_20 + 4) == -1)) &&
               ((*(long *)(param_3 + 0x18) == *(long *)(local_20[3] + 0x18) ||
                (iVar1 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x18),
                                      *(xmlChar **)(local_20[3] + 0x18)), iVar1 != 0)))) {
              *(int *)(local_20 + 4) = param_7;
              break;
            }
          }
        }
        lVar2 = FUN_1008a59a1(param_5,param_6,param_3,pxVar3,param_7);
        if (lVar2 == 0) {
          _xmlFreeNs(pxVar3);
          return 0xffffffff;
        }
        *param_4 = (long)pxVar3;
      }
      local_5c = 0;
    }
    else {
      lVar2 = FUN_1008a5b7d(param_1);
      *param_4 = lVar2;
      if (*param_4 == 0) {
        local_5c = 0xffffffff;
      }
      else {
        local_5c = 0;
      }
    }
  }
  return local_5c;
}

