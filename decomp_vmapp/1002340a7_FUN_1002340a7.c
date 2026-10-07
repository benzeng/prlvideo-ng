
void FUN_1002340a7(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  xmlHashTablePtr pxVar5;
  int *local_60;
  long *local_58;
  int *local_50;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_50 = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 1;
  if (*(int *)(param_2 + 0x44) == 0) {
    for (local_60 = *(int **)(param_1 + 0x30); local_60 != (int *)0x0;
        local_60 = *(int **)((long)local_60 + 0x40)) {
      local_24 = local_24 + 1;
    }
    lVar3 = (*(code *)_xmlMalloc)((long)local_24 * 8);
    if (lVar3 != 0) {
      for (local_60 = *(int **)(param_1 + 0x30); local_60 != (int *)0x0;
          local_60 = *(int **)(local_60 + 0x10)) {
        uVar4 = (*(code *)_xmlMalloc)(0x18);
        *(undefined8 *)((long)local_28 * 8 + lVar3) = uVar4;
        if (*(long *)((long)local_28 * 8 + lVar3) == 0) goto LAB_100234600;
        if (*local_60 == 3) {
          local_20 = local_20 + 1;
        }
        **(undefined8 **)((long)local_28 * 8 + lVar3) = local_60;
        lVar1 = *(long *)((long)local_28 * 8 + lVar3);
        uVar4 = FUN_100233685(param_2,local_60,0);
        *(undefined8 *)(lVar1 + 8) = uVar4;
        lVar1 = *(long *)((long)local_28 * 8 + lVar3);
        uVar4 = FUN_100233685(param_2,local_60,1);
        *(undefined8 *)(lVar1 + 0x10) = uVar4;
        local_28 = local_28 + 1;
      }
      local_50 = (int *)(*(code *)_xmlMalloc)(0x20);
      if (local_50 != (int *)0x0) {
        local_50[0] = 0;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        local_50[4] = 0;
        local_50[5] = 0;
        local_50[6] = 0;
        local_50[7] = 0;
        *local_50 = local_28;
        pxVar5 = _xmlHashCreate(local_28);
        *(xmlHashTablePtr *)(local_50 + 2) = pxVar5;
        for (local_38 = 0; local_38 < local_28; local_38 = local_38 + 1) {
          lVar1 = *(long *)((long)local_38 * 8 + lVar3);
          local_34 = local_38;
          while (local_34 = local_34 + 1, local_34 < local_28) {
            if (*(long *)((long)local_34 * 8 + lVar3) != 0) {
              iVar2 = FUN_100233407(param_2,*(undefined8 *)(lVar1 + 8),
                                    *(undefined8 *)(*(long *)((long)local_34 * 8 + lVar3) + 8));
              if (iVar2 == 0) {
                FUN_10022d5a6(param_2,*(undefined8 *)(param_1 + 8),0x3fd,
                              "Element or text conflicts in interleave\n",0,0);
              }
              iVar2 = FUN_100233407(param_2,*(undefined8 *)(lVar1 + 0x10),
                                    *(undefined8 *)(*(long *)((long)local_34 * 8 + lVar3) + 0x10));
              if (iVar2 == 0) {
                FUN_10022d5a6(param_2,*(undefined8 *)(param_1 + 8),0x3e9,
                              "Attributes conflicts in interleave\n",0,0);
              }
            }
          }
          local_58 = *(long **)(lVar1 + 8);
          if ((local_58 == (long *)0x0) || (*local_58 == 0)) {
            local_1c = 0;
          }
          else {
            for (; *local_58 != 0; local_58 = local_58 + 1) {
              if (*(int *)*local_58 == 3) {
                iVar2 = _xmlHashAddEntry2(*(xmlHashTablePtr *)(local_50 + 2),(xmlChar *)"#text",
                                          (xmlChar *)0x0,(void *)(long)(local_38 + 1));
                if (iVar2 != 0) {
                  local_1c = -1;
                }
              }
              else if ((*(int *)*local_58 == 4) && (*(long *)(*local_58 + 0x10) != 0)) {
                if ((*(long *)(*local_58 + 0x18) == 0) || (**(char **)(*local_58 + 0x18) == '\0')) {
                  local_2c = _xmlHashAddEntry2(*(xmlHashTablePtr *)(local_50 + 2),
                                               *(xmlChar **)(*local_58 + 0x10),(xmlChar *)0x0,
                                               (void *)(long)(local_38 + 1));
                }
                else {
                  local_2c = _xmlHashAddEntry2(*(xmlHashTablePtr *)(local_50 + 2),
                                               *(xmlChar **)(*local_58 + 0x10),
                                               *(xmlChar **)(*local_58 + 0x18),
                                               (void *)(long)(local_38 + 1));
                }
                if (local_2c != 0) {
                  local_1c = -1;
                }
              }
              else if (*(int *)*local_58 == 4) {
                if ((*(long *)(*local_58 + 0x18) == 0) || (**(char **)(*local_58 + 0x18) == '\0')) {
                  local_2c = _xmlHashAddEntry2(*(xmlHashTablePtr *)(local_50 + 2),(xmlChar *)"#any",
                                               (xmlChar *)0x0,(void *)(long)(local_38 + 1));
                }
                else {
                  local_2c = _xmlHashAddEntry2(*(xmlHashTablePtr *)(local_50 + 2),(xmlChar *)"#any",
                                               *(xmlChar **)(*local_58 + 0x18),
                                               (void *)(long)(local_38 + 1));
                }
                if (*(long *)(*local_58 + 0x50) != 0) {
                  local_1c = 2;
                }
                if (local_2c != 0) {
                  local_1c = -1;
                }
              }
              else {
                local_1c = -1;
              }
            }
          }
        }
        *(long *)(local_50 + 6) = lVar3;
        *(int **)(param_1 + 0x28) = local_50;
        if (local_20 != 0) {
          *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) | 8;
        }
        if (local_1c == 1) {
          local_50[4] = 1;
        }
        if (local_1c != 2) {
          return;
        }
        local_50[4] = 3;
        return;
      }
    }
LAB_100234600:
    FUN_10022d294(param_2,"in interleave computation\n");
    if (lVar3 != 0) {
      for (local_38 = 0; local_38 < local_28; local_38 = local_38 + 1) {
        if (*(long *)((long)local_38 * 8 + lVar3) != 0) {
          if (*(long *)(*(long *)((long)local_38 * 8 + lVar3) + 8) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)(*(long *)((long)local_38 * 8 + lVar3) + 8));
          }
          (*(code *)_xmlFree)(*(undefined8 *)((long)local_38 * 8 + lVar3));
        }
      }
      (*(code *)_xmlFree)(lVar3);
    }
    FUN_10022ddf2(local_50);
  }
  return;
}

