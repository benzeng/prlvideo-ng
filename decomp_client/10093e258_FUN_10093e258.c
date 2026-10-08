
undefined4 FUN_10093e258(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  int *local_b0;
  int *local_a8;
  int local_a0;
  int local_9c;
  undefined8 *local_98;
  int *local_90;
  long local_88;
  undefined1 *local_80;
  int local_74;
  int local_70;
  int local_6c;
  long *local_68;
  long local_60;
  undefined8 *local_58;
  long local_50;
  int *local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  
  local_98 = (undefined8 *)0x0;
  local_90 = *(int **)(*(long *)(param_1 + 0xb8) + 0x38);
  if (*(long *)(param_1 + 200) != 0) {
    local_b0 = *(int **)(param_1 + 200);
    while (local_b0 != (int *)0x0) {
      local_a0 = _xmlStreamPop(*(undefined8 *)(local_b0 + 0xe));
      if (local_a0 == -1) {
        FUN_10091c652(param_1,"xmlSchemaXPathProcessHistory","calling xmlStreamPop()");
        return 0xffffffff;
      }
      if (local_b0[8] == 0) goto LAB_10093eeef;
      local_9c = *(int *)(*(long *)(local_b0 + 6) + (long)local_b0[8] * 4 + -4);
      if (local_9c == param_2) {
        if (*local_b0 == 2) {
          if ((*local_90 == 4) || ((*local_90 == 1 && (local_90[0x28] != 0x2d)))) {
            if ((local_98 != (undefined8 *)0x0) ||
               (*(long *)(*(long *)(param_1 + 0xb8) + 0x30) != 0)) {
              local_88 = *(long *)(local_b0 + 10);
              local_74 = local_b0[4] - *(int *)(local_88 + 4);
              local_70 = *(int *)(*(long *)(local_b0 + 0xc) + 0x10);
              if (*(long *)(local_88 + 0x18) == 0) {
                if (local_74 < 10) {
                  *(undefined4 *)(local_88 + 0x20) = 10;
                }
                else {
                  *(int *)(local_88 + 0x20) = local_74 * 2;
                }
                uVar3 = (*(code *)_xmlMalloc)((long)*(int *)(local_88 + 0x20) * 8);
                *(undefined8 *)(local_88 + 0x18) = uVar3;
                if (*(long *)(local_88 + 0x18) == 0) {
                  FUN_10091bc84(0,"allocating an array of key-sequences",0);
                  return 0xffffffff;
                }
                puVar6 = *(undefined1 **)(local_88 + 0x18);
                for (lVar5 = (long)*(int *)(local_88 + 0x20) * 8; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar6 = 0;
                  puVar6 = puVar6 + 1;
                }
              }
              else if (*(int *)(local_88 + 0x20) <= local_74) {
                local_6c = *(int *)(local_88 + 0x20);
                *(int *)(local_88 + 0x20) = *(int *)(local_88 + 0x20) * 2;
                uVar3 = (*(code *)_xmlRealloc)
                                  (*(undefined8 *)(local_88 + 0x18),
                                   (long)*(int *)(local_88 + 0x20) * 8);
                *(undefined8 *)(local_88 + 0x18) = uVar3;
                if (*(long *)(local_88 + 0x18) == 0) {
                  FUN_10091bc84(0,"reallocating an array of key-sequences",0);
                  return 0xffffffff;
                }
                for (; local_6c < *(int *)(local_88 + 0x20); local_6c = local_6c + 1) {
                  *(undefined8 *)(*(long *)(local_88 + 0x18) + (long)local_6c * 8) = 0;
                }
              }
              local_80 = *(undefined1 **)(*(long *)(local_88 + 0x18) + (long)local_74 * 8);
              if (local_80 == (undefined1 *)0x0) {
                local_80 = (undefined1 *)
                           (*(code *)_xmlMalloc)
                                     ((long)*(int *)(*(long *)(*(long *)(local_88 + 0x10) + 8) +
                                                    0x40) * 8);
                if (local_80 == (undefined1 *)0x0) {
                  FUN_10091bc84(0,"allocating an IDC key-sequence",0);
                  return 0xffffffff;
                }
                puVar6 = local_80;
                for (lVar5 = (long)*(int *)(*(long *)(*(long *)(local_88 + 0x10) + 8) + 0x40) * 8;
                    lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar6 = 0;
                  puVar6 = puVar6 + 1;
                }
                *(undefined1 **)(*(long *)(local_88 + 0x18) + (long)local_74 * 8) = local_80;
              }
              else if (*(long *)(local_80 + (long)local_70 * 8) != 0) {
                local_c0 = 0;
                uVar3 = FUN_10091aa12(&local_c0,*(undefined8 *)(*(long *)(local_88 + 0x10) + 8));
                FUN_10091c684(param_1,0x755,0,*(undefined8 *)(*(long *)(local_88 + 0x10) + 8),
                              "The field \'%s\' of %s evaluates to a node-set with more than one member"
                              ,*(undefined8 *)(*(long *)(local_b0 + 0xc) + 0x18),uVar3);
                if (local_c0 != 0) {
                  (*(code *)_xmlFree)(local_c0);
                  local_c0 = 0;
                }
                local_b0[8] = local_b0[8] + -1;
                goto LAB_10093eeef;
              }
              if (local_98 == (undefined8 *)0x0) {
                local_98 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
                if (local_98 == (undefined8 *)0x0) {
                  FUN_10091bc84(0,"allocating a IDC key",0);
                  (*(code *)_xmlFree)(local_80);
                  *(undefined8 *)(*(long *)(local_88 + 0x18) + (long)local_74 * 8) = 0;
                  return 0xffffffff;
                }
                *local_98 = local_90;
                local_98[1] = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x30);
                *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x30) = 0;
                iVar1 = FUN_10093d606(param_1,local_98);
                if (iVar1 == -1) {
                  FUN_10093d9ba(local_98);
                  return 0xffffffff;
                }
              }
              *(undefined8 **)(local_80 + (long)local_70 * 8) = local_98;
              goto LAB_10093eed8;
            }
            FUN_10091c684(param_1,0x755,0,
                          *(undefined8 *)(*(long *)(*(long *)(local_b0 + 10) + 0x10) + 8),
                          "Warning: No precomputed value available, the value was either invalid or something strange happend"
                          ,0,0);
            local_b0[8] = local_b0[8] + -1;
          }
          else {
            local_b8 = 0;
            uVar3 = FUN_10091aa12(&local_b8,
                                  *(undefined8 *)(*(long *)(*(long *)(local_b0 + 10) + 0x10) + 8));
            FUN_10091c684(param_1,0x755,0,
                          *(undefined8 *)(*(long *)(*(long *)(local_b0 + 10) + 0x10) + 8),
                          "The field \'%s\' of %s does evaluate to a node of non-simple type",
                          *(undefined8 *)(*(long *)(local_b0 + 0xc) + 0x18),uVar3);
            if (local_b8 != 0) {
              (*(code *)_xmlFree)(local_b8);
              local_b8 = 0;
            }
            local_b0[8] = local_b0[8] + -1;
          }
        }
        else {
          if (*local_b0 == 1) {
            local_68 = (long *)0x0;
            local_50 = *(long *)(local_b0 + 10);
            local_48 = *(int **)(*(long *)(local_50 + 0x10) + 8);
            local_34 = local_48[0x10];
            local_40 = param_2 - *(int *)(local_50 + 4);
            if ((*(long *)(local_50 + 0x18) == 0) || (*(int *)(local_50 + 0x20) <= local_40)) {
              iVar1 = *local_48;
joined_r0x00010093ea35:
              if (iVar1 == 0x17) {
                local_d8 = 0;
                uVar3 = FUN_10091aa12(&local_d8,local_48);
                FUN_10091c684(param_1,0x755,0,local_48,"Not all fields of %s evaluate to a node",
                              uVar3,0);
                if (local_d8 != 0) {
                  (*(code *)_xmlFree)(local_d8);
                  local_d8 = 0;
                }
              }
            }
            else {
              local_68 = (long *)(*(long *)(local_50 + 0x18) + (long)local_40 * 8);
              if (*local_68 == 0) {
                iVar1 = *local_48;
                goto joined_r0x00010093ea35;
              }
              for (local_3c = 0; local_3c < local_34; local_3c = local_3c + 1) {
                if (*(long *)(*local_68 + (long)local_3c * 8) == 0) {
                  iVar1 = *local_48;
                  goto joined_r0x00010093ea35;
                }
              }
              local_60 = FUN_10093d892(param_1,local_50);
              if ((*local_48 == 0x18) || (*(int *)(local_60 + 0x18) == 0)) {
LAB_10093ec2d:
                local_58 = (undefined8 *)(*(code *)_xmlMalloc)(0x18);
                if (local_58 == (undefined8 *)0x0) {
                  FUN_10091bc84(0,"allocating an IDC node-table item",0);
                  (*(code *)_xmlFree)(*local_68);
                  *local_68 = 0;
                  return 0xffffffff;
                }
                *local_58 = 0;
                local_58[1] = 0;
                local_58[2] = 0;
                if (*local_48 == 0x18) {
                  uVar2 = FUN_10093d23a(param_1,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),
                                        *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20));
                  *(undefined4 *)((long)local_58 + 0x14) = uVar2;
                  if (*(int *)((long)local_58 + 0x14) == -1) {
                    (*(code *)_xmlFree)(local_58);
                    (*(code *)_xmlFree)(*local_68);
                    *local_68 = 0;
                    return 0xffffffff;
                  }
                }
                else {
                  iVar1 = FUN_10093d4a6(param_1,local_58);
                  if (iVar1 == -1) {
                    (*(code *)_xmlFree)(local_58);
                    (*(code *)_xmlFree)(*local_68);
                    *local_68 = 0;
                    return 0xffffffff;
                  }
                  *(undefined4 *)((long)local_58 + 0x14) = 0xffffffff;
                }
                *local_58 = *(undefined8 *)(param_1 + 0x68);
                *(undefined4 *)(local_58 + 2) = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x10);
                local_58[1] = *local_68;
                *local_68 = 0;
                iVar1 = FUN_10093d766(local_60,local_58);
                if (iVar1 == -1) {
                  if (*local_48 == 0x18) {
                    (*(code *)_xmlFree)(local_58[1]);
                    (*(code *)_xmlFree)(local_58);
                  }
                  return 0xffffffff;
                }
              }
              else {
                local_3c = 0;
                local_a0 = 0;
                do {
                  local_20 = *(long *)(*(long *)(*(long *)(local_60 + 0x10) + (long)local_3c * 8) +
                                      8);
                  for (local_38 = 0; local_38 < local_34; local_38 = local_38 + 1) {
                    local_30 = *(long *)(*local_68 + (long)local_38 * 8);
                    local_28 = *(long *)((long)local_38 * 8 + local_20);
                    local_a0 = FUN_10093b64b(*(undefined8 *)(local_30 + 8),
                                             *(undefined8 *)(local_28 + 8));
                    if (local_a0 == -1) {
                      return 0xffffffff;
                    }
                    if (local_a0 == 0) break;
                  }
                } while ((local_a0 != 1) &&
                        (local_3c = local_3c + 1, local_3c < *(int *)(local_60 + 0x18)));
                if (*(int *)(local_60 + 0x18) == local_3c) goto LAB_10093ec2d;
                local_c8 = 0;
                local_d0 = 0;
                uVar3 = FUN_10091aa12(&local_d0,local_48);
                uVar4 = FUN_10093e056(param_1,&local_c8,*local_68,local_34);
                FUN_10091c684(param_1,0x755,0,local_48,"Duplicate key-sequence %s in %s",uVar4,uVar3
                             );
                if (local_c8 != 0) {
                  (*(code *)_xmlFree)(local_c8);
                  local_c8 = 0;
                }
                if (local_d0 != 0) {
                  (*(code *)_xmlFree)(local_d0);
                  local_d0 = 0;
                }
              }
            }
            if ((local_68 != (long *)0x0) && (*local_68 != 0)) {
              (*(code *)_xmlFree)(*local_68);
              *local_68 = 0;
            }
          }
LAB_10093eed8:
          local_b0[8] = local_b0[8] + -1;
        }
LAB_10093eeef:
        if ((local_b0[8] == 0) && (local_b0[4] == param_2)) {
          if (*(int **)(param_1 + 200) != local_b0) {
            FUN_10091c652(param_1,"xmlSchemaXPathProcessHistory",
                          "The state object to be removed is not the first in the list");
          }
          local_a8 = *(int **)(local_b0 + 2);
          *(undefined8 *)(param_1 + 200) = *(undefined8 *)(local_b0 + 2);
          *(undefined8 *)(local_b0 + 2) = *(undefined8 *)(param_1 + 0xd0);
          *(int **)(param_1 + 0xd0) = local_b0;
          local_b0 = local_a8;
        }
        else {
          local_b0 = *(int **)(local_b0 + 2);
        }
      }
      else {
        local_b0 = *(int **)(local_b0 + 2);
      }
    }
  }
  return 0;
}

