
xmlChar * FUN_10088bc04(long *param_1,undefined8 *param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *in_stack_fffffffffffffed8;
  undefined4 uVar3;
  int local_c8;
  int local_c4;
  xmlChar *local_c0;
  long local_b8;
  xmlChar *local_b0;
  xmlChar *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  long local_68;
  long local_60;
  undefined4 local_54;
  long local_50;
  uint local_44;
  xmlChar *local_40;
  long *local_38;
  xmlChar *local_30;
  long *local_28;
  int *local_20;
  
  local_90 = param_1[0x3a];
  local_88 = (int)param_1[0x3b];
  local_54 = *(undefined4 *)((long)param_1 + 0x1fc);
  if (**(char **)(param_1[7] + 0x20) == '<') {
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
    param_1[0x27] = param_1[0x27] + 1;
    if (**(char **)(param_1[7] + 0x20) == '\0') {
      _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
    }
    do {
      if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
          (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
        FUN_100879c6f(param_1);
      }
      local_68 = *(long *)(param_1[7] + 0x18);
      local_60 = *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18);
      local_80 = 0;
      local_84 = 0;
      local_7c = 0;
      local_70 = 0;
      local_6c = 0;
      *(undefined4 *)((long)param_1 + 0x1fc) = local_54;
      local_a8 = (xmlChar *)FUN_10088ac7b(param_1,&local_b0);
      if (local_a8 == (xmlChar *)0x0) {
        FUN_100877b3f(param_1,0x44,"StartTag: invalid element name\n");
        return (xmlChar *)0x0;
      }
      *param_4 = ((int)*(undefined8 *)(param_1[7] + 0x20) - (int)*(undefined8 *)(param_1[7] + 0x18))
                 - (int)local_60;
      _xmlSkipBlankChars(param_1);
      if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      if (*(long *)(param_1[7] + 0x18) == local_68) {
LAB_10088c725:
        if (((**(char **)(param_1[7] + 0x20) != '>') &&
            ((**(char **)(param_1[7] + 0x20) != '/' ||
             (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '>')))) &&
           (((8 < **(byte **)(param_1[7] + 0x20) && (**(byte **)(param_1[7] + 0x20) < 0xb)) ||
            ((**(char **)(param_1[7] + 0x20) == '\r' || (0x1f < **(byte **)(param_1[7] + 0x20)))))))
        {
          local_50 = *(long *)(param_1[7] + 0x20);
          local_44 = (uint)*(undefined8 *)(param_1[7] + 0x40);
          local_c4 = -1;
          local_c8 = 0;
          in_stack_fffffffffffffed8 = &local_c8;
          local_a0 = FUN_10088b948(param_1,local_b0,local_a8,&local_b8,&local_c0,&local_c4,
                                   in_stack_fffffffffffffed8);
          if ((local_a0 != 0) && (local_c0 != (xmlChar *)0x0)) {
            if (local_c4 < 0) {
              local_c4 = _xmlStrlen(local_c0);
            }
            if ((param_1[0x3d] == local_a0) && (local_b8 == 0)) {
              local_40 = _xmlDictLookup((xmlDictPtr)param_1[0x39],local_c0,local_c4);
              if (*local_40 != '\0') {
                local_38 = (long *)_xmlParseURI(local_40);
                if (local_38 == (long *)0x0) {
                  FUN_100877c2c(param_1,99,"xmlns: %s not a valid URI\n",local_40,0);
                }
                else {
                  if (*local_38 == 0) {
                    FUN_100877c2c(param_1,100,"xmlns: URI %s is not absolute\n",local_40,0);
                  }
                  _xmlFreeURI(local_38);
                }
              }
              local_74 = 1;
              while ((local_74 <= local_70 &&
                     (*(long *)(param_1[0x41] +
                               (long)(*(int *)((long)param_1 + 0x1fc) + local_74 * -2) * 8) != 0)))
              {
                local_74 = local_74 + 1;
              }
              if (local_70 < local_74) {
                iVar1 = FUN_100878ca6(param_1,0,local_40);
                if (0 < iVar1) {
                  local_70 = local_70 + 1;
                }
              }
              else {
                FUN_100877370(param_1,0,local_a0);
              }
              if (local_c8 != 0) {
                (*(code *)_xmlFree)(local_c0);
              }
              _xmlSkipBlankChars(param_1);
              goto LAB_10088c725;
            }
            if (param_1[0x3d] != local_b8) {
              if ((local_90 == 0) || (local_88 < local_80 + 5)) {
                iVar1 = FUN_100878ff8(param_1,local_80 + 5);
                if (iVar1 < 0) {
                  if (local_c0[local_c4] == '\0') {
                    (*(code *)_xmlFree)(local_c0);
                  }
                  goto LAB_10088c528;
                }
                local_88 = (int)param_1[0x3b];
                local_90 = param_1[0x3a];
              }
              *(int *)(param_1[0x42] + (long)local_84 * 4) = local_c8;
              local_84 = local_84 + 1;
              *(long *)((long)local_80 * 8 + local_90) = local_a0;
              *(long *)((long)(local_80 + 1) * 8 + local_90) = local_b8;
              *(undefined8 *)((long)(local_80 + 2) * 8 + local_90) = 0;
              *(xmlChar **)((long)(local_80 + 3) * 8 + local_90) = local_c0;
              local_c0 = local_c0 + local_c4;
              *(xmlChar **)((long)(local_80 + 4) * 8 + local_90) = local_c0;
              local_80 = local_80 + 5;
              if (local_c8 != 0) {
                local_6c = 1;
              }
              goto LAB_10088c528;
            }
            local_30 = _xmlDictLookup((xmlDictPtr)param_1[0x39],local_c0,local_c4);
            if (param_1[0x3c] == local_a0) {
              if ((xmlChar *)param_1[0x3e] != local_30) {
                FUN_1008782b1(param_1,200,"xml namespace prefix mapped to wrong URI\n",0,0,0);
              }
              if (local_c8 != 0) {
                (*(code *)_xmlFree)(local_c0);
              }
              _xmlSkipBlankChars(param_1);
              goto LAB_10088c725;
            }
            local_28 = (long *)_xmlParseURI(local_30);
            if (local_28 == (long *)0x0) {
              FUN_100877c2c(param_1,99,"xmlns:%s: \'%s\' is not a valid URI\n",local_a0,local_30);
            }
            else {
              if ((*(int *)((long)param_1 + 0x1a4) != 0) && (*local_28 == 0)) {
                FUN_100877c2c(param_1,100,"xmlns:%s: URI %s is not absolute\n",local_a0,local_30);
              }
              _xmlFreeURI(local_28);
            }
            local_74 = 1;
            while ((local_74 <= local_70 &&
                   (*(long *)(param_1[0x41] +
                             (long)(*(int *)((long)param_1 + 0x1fc) + local_74 * -2) * 8) !=
                    local_a0))) {
              local_74 = local_74 + 1;
            }
            if (local_70 < local_74) {
              iVar1 = FUN_100878ca6(param_1,local_a0,local_30);
              if (0 < iVar1) {
                local_70 = local_70 + 1;
              }
            }
            else {
              FUN_100877370(param_1,local_b8,local_a0);
            }
            if (local_c8 != 0) {
              (*(code *)_xmlFree)(local_c0);
            }
            _xmlSkipBlankChars(param_1);
            if (*(long *)(param_1[7] + 0x18) != local_68) goto LAB_10088d09e;
            goto LAB_10088c725;
          }
          if ((local_c0 != (xmlChar *)0x0) && (local_c0[local_c4] == '\0')) {
            (*(code *)_xmlFree)(local_c0);
          }
LAB_10088c528:
          if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
             (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
            FUN_100879cbc(param_1);
          }
          if (*(long *)(param_1[7] + 0x18) != local_68) goto LAB_10088d09e;
          if ((**(char **)(param_1[7] + 0x20) != '>') &&
             ((**(char **)(param_1[7] + 0x20) != '/' ||
              (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '>')))) {
            if ((**(char **)(param_1[7] + 0x20) != ' ') &&
               (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
                (**(char **)(param_1[7] + 0x20) != '\r')))) {
              FUN_100877b3f(param_1,0x41,"attributes construct error\n");
              goto LAB_10088c7d2;
            }
            _xmlSkipBlankChars(param_1);
            if ((((ulong)local_44 != *(ulong *)(param_1[7] + 0x40)) ||
                (*(long *)(param_1[7] + 0x20) != local_50)) ||
               ((local_a0 != 0 || (local_c0 != (xmlChar *)0x0)))) {
              if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
                 (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
                FUN_100879cbc(param_1);
              }
              if (*(long *)(param_1[7] + 0x18) != local_68) goto LAB_10088d09e;
              goto LAB_10088c725;
            }
            FUN_100877520(param_1,1,"xmlParseStartTag: problem parsing attributes\n");
          }
        }
LAB_10088c7d2:
        if ((param_1[0x44] != 0) &&
           (local_20 = _xmlHashLookup2((xmlHashTablePtr)param_1[0x44],local_a8,local_b0),
           local_20 != (int *)0x0)) {
          for (local_78 = 0; local_78 < *local_20; local_78 = local_78 + 1) {
            local_a0 = *(long *)(local_20 + (long)(local_78 << 2) * 2 + 2);
            local_b8 = *(long *)(local_20 + (long)(local_78 * 4 + 1) * 2 + 2);
            if ((param_1[0x3d] == local_a0) && (local_b8 == 0)) {
              local_74 = 1;
              while ((local_74 <= local_70 &&
                     (*(long *)(param_1[0x41] +
                               (long)(*(int *)((long)param_1 + 0x1fc) + local_74 * -2) * 8) != 0)))
              {
                local_74 = local_74 + 1;
              }
              if (((local_70 < local_74) &&
                  (local_98 = FUN_10088a9f3(param_1,0),
                  *(long *)(local_20 + (long)(local_78 * 4 + 2) * 2 + 2) != local_98)) &&
                 (iVar1 = FUN_100878ca6(param_1,0,
                                        *(undefined8 *)(local_20 + (long)(local_78 * 4 + 2) * 2 + 2)
                                       ), 0 < iVar1)) {
                local_70 = local_70 + 1;
              }
            }
            else if (param_1[0x3d] == local_b8) {
              local_74 = 1;
              while ((local_74 <= local_70 &&
                     (*(long *)(param_1[0x41] +
                               (long)(*(int *)((long)param_1 + 0x1fc) + local_74 * -2) * 8) !=
                      local_a0))) {
                local_74 = local_74 + 1;
              }
              if (((local_70 < local_74) &&
                  (local_98 = FUN_10088a9f3(param_1,local_a0), *(long *)(local_20 + 6) != local_98))
                 && (iVar1 = FUN_100878ca6(param_1,local_a0,
                                           *(undefined8 *)
                                            (local_20 + (long)(local_78 * 4 + 2) * 2 + 2)),
                    0 < iVar1)) {
                local_70 = local_70 + 1;
              }
            }
            else {
              local_74 = 0;
              while ((local_74 < local_80 &&
                     ((*(long *)((long)local_74 * 8 + local_90) != local_a0 ||
                      (*(long *)((long)local_74 * 8 + local_90 + 8) != local_b8))))) {
                local_74 = local_74 + 5;
              }
              if (local_80 <= local_74) {
                if ((local_90 == 0) || (local_88 < local_80 + 5)) {
                  iVar1 = FUN_100878ff8(param_1,local_80 + 5);
                  if (iVar1 < 0) {
                    return (xmlChar *)0x0;
                  }
                  local_88 = (int)param_1[0x3b];
                  local_90 = param_1[0x3a];
                }
                *(long *)((long)local_80 * 8 + local_90) = local_a0;
                *(long *)((long)(local_80 + 1) * 8 + local_90) = local_b8;
                if (local_b8 == 0) {
                  *(undefined8 *)((long)(local_80 + 2) * 8 + local_90) = 0;
                  local_80 = local_80 + 3;
                }
                else {
                  local_80 = local_80 + 2;
                  uVar2 = FUN_10088a9f3(param_1,local_b8);
                  *(undefined8 *)((long)local_80 * 8 + local_90) = uVar2;
                  local_80 = local_80 + 1;
                }
                *(undefined8 *)((long)local_80 * 8 + local_90) =
                     *(undefined8 *)(local_20 + (long)(local_78 * 4 + 2) * 2 + 2);
                *(undefined8 *)((long)(local_80 + 1) * 8 + local_90) =
                     *(undefined8 *)(local_20 + (long)(local_78 * 4 + 3) * 2 + 2);
                local_80 = local_80 + 2;
                local_7c = local_7c + 1;
              }
            }
          }
        }
        local_78 = 0;
        do {
          uVar3 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 0x20);
          if (local_80 <= local_78) {
            local_98 = FUN_10088a9f3(param_1,local_b0);
            if ((local_b0 != (xmlChar *)0x0) && (local_98 == 0)) {
              FUN_1008782b1(param_1,0xc9,"Namespace prefix %s on %s is not defined\n",local_b0,
                            local_a8,0);
            }
            *param_2 = local_b0;
            *param_3 = local_98;
            if (((*param_1 != 0) && (*(long *)(*param_1 + 0xe8) != 0)) &&
               (*(int *)((long)param_1 + 0x14c) == 0)) {
              if (local_70 < 1) {
                (**(code **)(*param_1 + 0xe8))
                          (param_1[1],local_a8,local_b0,local_98,0,0,CONCAT44(uVar3,local_80 / 5),
                           local_7c,local_90);
              }
              else {
                (**(code **)(*param_1 + 0xe8))
                          (param_1[1],local_a8,local_b0,local_98,local_70,
                           param_1[0x41] +
                           (long)(*(int *)((long)param_1 + 0x1fc) + local_70 * -2) * 8,
                           CONCAT44(uVar3,local_80 / 5),local_7c,local_90);
              }
            }
            if (local_6c != 0) {
              local_78 = 3;
              for (local_74 = 0; local_74 < local_84; local_74 = local_74 + 1) {
                if ((*(int *)(param_1[0x42] + (long)local_74 * 4) != 0) &&
                   (*(long *)((long)local_78 * 8 + local_90) != 0)) {
                  (*(code *)_xmlFree)(*(undefined8 *)((long)local_78 * 8 + local_90));
                }
                local_78 = local_78 + 5;
              }
            }
            return local_a8;
          }
          if (*(long *)((long)local_78 * 8 + local_90 + 8) == 0) {
            local_98 = 0;
          }
          else {
            local_98 = FUN_10088a9f3(param_1,*(undefined8 *)((long)local_78 * 8 + local_90 + 8));
            if (local_98 == 0) {
              FUN_1008782b1(param_1,0xc9,"Namespace prefix %s for %s on %s is not defined\n",
                            *(undefined8 *)((long)local_78 * 8 + local_90 + 8),
                            *(undefined8 *)((long)local_78 * 8 + local_90),local_a8);
            }
            *(long *)((long)local_78 * 8 + local_90 + 0x10) = local_98;
          }
          for (local_74 = 0; local_74 < local_78; local_74 = local_74 + 5) {
            if (*(long *)((long)local_78 * 8 + local_90) == *(long *)((long)local_74 * 8 + local_90)
               ) {
              if (*(long *)((long)local_78 * 8 + local_90 + 8) ==
                  *(long *)((long)local_74 * 8 + local_90 + 8)) {
                FUN_100877370(param_1,*(undefined8 *)((long)local_78 * 8 + local_90 + 8),
                              *(undefined8 *)((long)local_78 * 8 + local_90));
              }
              else {
                if ((local_98 == 0) || (*(long *)((long)local_74 * 8 + local_90 + 0x10) != local_98)
                   ) goto LAB_10088cdf0;
                FUN_1008782b1(param_1,0xcb,"Namespaced Attribute %s in \'%s\' redefined\n",
                              *(undefined8 *)((long)local_78 * 8 + local_90),local_98,0);
              }
              break;
            }
LAB_10088cdf0:
          }
          local_78 = local_78 + 5;
        } while( true );
      }
LAB_10088d09e:
      if (local_6c != 0) {
        local_78 = 3;
        for (local_74 = 0; local_74 < local_84; local_74 = local_74 + 1) {
          if ((*(int *)(param_1[0x42] + (long)local_74 * 4) != 0) &&
             (*(long *)((long)local_78 * 8 + local_90) != 0)) {
            (*(code *)_xmlFree)(*(undefined8 *)((long)local_78 * 8 + local_90));
          }
          local_78 = local_78 + 5;
        }
      }
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x18) + local_60;
    } while ((int)param_1[3] == 1);
  }
  return (xmlChar *)0x0;
}

