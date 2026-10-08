
uint FUN_10094b903(long param_1,byte *param_2,long *param_3,xmlNodePtr param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  byte *pbVar1;
  byte bVar2;
  xmlGenericErrorFunc pxVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  xmlChar *pxVar7;
  xmlGenericErrorFunc *ppxVar8;
  void **ppvVar9;
  char cVar10;
  bool bVar11;
  byte *local_218;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  byte *local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  byte *local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  byte *local_1a8;
  xmlChar *local_1a0;
  xmlChar *local_198;
  byte *local_190;
  byte local_188 [32];
  long local_168;
  byte *local_160;
  uint local_154;
  byte *local_150;
  byte *local_148;
  byte *local_140;
  uint local_134;
  uint local_130;
  uint local_12c;
  byte *local_128;
  uint local_11c;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  xmlChar *local_f8;
  xmlChar *local_f0;
  xmlNsPtr local_e8;
  xmlNodePtr local_e0;
  xmlIDPtr local_d8;
  xmlChar *local_d0;
  xmlNodePtr local_c8;
  xmlChar *local_c0;
  xmlNodePtr local_b8;
  xmlChar *local_b0;
  xmlEntityPtr local_a8;
  xmlNodePtr local_a0;
  xmlNodePtr local_98;
  xmlChar *local_90;
  xmlChar *local_88;
  xmlNsPtr local_80;
  long local_78;
  byte *local_70;
  byte *local_68;
  byte *local_60;
  int local_58;
  uint local_54;
  byte *local_50;
  byte *local_48;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_160 = (byte *)0x0;
  local_154 = 0;
  if (DAT_102313518 == 0) {
    _xmlSchemaInitTypes();
  }
  if (param_1 == 0) {
    return 0xffffffff;
  }
  local_218 = param_2;
  if (param_2 == (byte *)0x0) {
    local_218 = (byte *)0x101e41978;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if ((((param_5 == 0) && (local_218 != (byte *)0x0)) && (*(int *)(param_1 + 0xa0) != 1)) &&
     ((*(int *)(param_1 + 0xa0) != 0x2d && (*(int *)(param_1 + 0xa0) != 0x2e)))) {
    if (*(int *)(param_1 + 0xa0) == 2) {
      local_160 = (byte *)_xmlSchemaWhiteSpaceReplace(local_218);
    }
    else {
      local_160 = (byte *)_xmlSchemaCollapseString(local_218);
    }
    if (local_160 != (byte *)0x0) {
      local_218 = local_160;
    }
  }
  pbVar4 = local_118;
  switch(*(undefined4 *)(param_1 + 0xa0)) {
  case 0:
switchD_10094ba8f_caseD_0:
    if (local_160 != (byte *)0x0) {
      (*(code *)_xmlFree)(local_160);
    }
    return 0xffffffff;
  case 1:
    if (param_7 == 0) {
      local_150 = local_218;
      if (param_6 == 2) {
        for (; *local_150 != 0; local_150 = local_150 + 1) {
          if (((*local_150 == 0xd) || (*local_150 == 10)) || (*local_150 == 9)) goto LAB_10094c85d;
        }
      }
      else if (param_6 == 3) {
        do {
          while( true ) {
            if (*local_150 == 0) goto LAB_10094bcb9;
            if (((*local_150 == 0xd) || (*local_150 == 10)) || (*local_150 == 9))
            goto LAB_10094c85d;
            if (*local_150 == 0x20) break;
            local_150 = local_150 + 1;
          }
          local_150 = local_150 + 1;
        } while (*local_150 != 0x20);
        goto LAB_10094c85d;
      }
    }
LAB_10094bcb9:
    if ((param_9 != 0) && (param_3 != (long *)0x0)) {
      if (param_8 != 0) {
        if (param_6 == 3) {
          local_160 = (byte *)_xmlSchemaCollapseString(local_218);
        }
        else if (param_6 == 2) {
          local_160 = (byte *)_xmlSchemaWhiteSpaceReplace(local_218);
        }
        if (local_160 != (byte *)0x0) {
          local_218 = local_160;
        }
      }
      local_168 = FUN_100947ed5(1);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 2:
    if (param_7 == 0) {
      for (local_148 = local_218; *local_148 != 0; local_148 = local_148 + 1) {
        if (((*local_148 == 0xd) || (*local_148 == 10)) || (*local_148 == 9)) goto LAB_10094c85d;
      }
    }
    else if (param_8 != 0) {
      if (param_6 == 3) {
        local_160 = (byte *)_xmlSchemaCollapseString(local_218);
      }
      else {
        local_160 = (byte *)_xmlSchemaWhiteSpaceReplace(local_218);
      }
      if (local_160 != (byte *)0x0) {
        local_218 = local_160;
      }
    }
    if (param_3 != (long *)0x0) {
      local_168 = FUN_100947ed5(2);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 3:
    local_140 = local_218;
    local_130 = 0;
    local_190 = local_188;
    local_12c = 0xffffffff;
    if (local_218 != (byte *)0x0) {
      if (param_7 != 0) {
        for (; ((*local_140 == 0x20 || ((8 < *local_140 && (*local_140 < 0xb)))) ||
               (*local_140 == 0xd)); local_140 = local_140 + 1) {
        }
      }
      if (*local_140 == 0x2b) {
        local_140 = local_140 + 1;
      }
      else if (*local_140 == 0x2d) {
        local_130 = 1;
        local_140 = local_140 + 1;
      }
      local_134 = 0;
      for (; *local_140 == 0x30; local_140 = local_140 + 1) {
      }
      if (*local_140 != 0) {
LAB_10094bfd6:
        if (local_134 < 0x18) {
          if ((0x2f < *local_140) && (*local_140 < 0x3a)) goto code_r0x00010094bfa5;
          if (*local_140 == 0x2e) {
            if (local_134 == 0) {
              local_134 = 1;
            }
            pbVar4 = local_118;
            if ((local_12c == 0xffffffff) &&
               ((pbVar1 = local_140 + 1, *pbVar1 != 0 ||
                (bVar11 = local_140 != local_218, local_140 = pbVar1, bVar11)))) {
              local_12c = local_134;
              for (local_140 = pbVar1;
                  ((local_134 < 0x18 && (0x2f < *local_140)) && (*local_140 < 0x3a));
                  local_140 = local_140 + 1) {
                *local_190 = *local_140;
                local_190 = local_190 + 1;
                local_134 = local_134 + 1;
              }
              goto LAB_10094c0a8;
            }
            goto LAB_10094c85d;
          }
        }
      }
LAB_10094c0a8:
      if (param_7 != 0) {
        for (; ((*local_140 == 0x20 || ((8 < *local_140 && (*local_140 < 0xb)))) ||
               (*local_140 == 0xd)); local_140 = local_140 + 1) {
        }
      }
      pbVar4 = local_118;
      if (*local_140 == 0) {
        if ((param_3 != (long *)0x0) && (local_168 = FUN_100947ed5(3), local_168 != 0)) {
          if (local_12c != 0xffffffff) {
            for (; ((local_12c < local_134 && (local_188 < local_190)) && (local_190[-1] == 0x30));
                local_190 = local_190 + -1) {
              local_134 = local_134 - 1;
            }
          }
          *local_190 = 0;
          local_190 = local_188;
          if (local_188[0] != 0) {
            FUN_10094b75a(&local_190,local_168 + 0x10,local_168 + 0x18,local_168 + 0x20);
          }
          if (local_134 == 0) {
            local_134 = 1;
          }
          *(ulong *)(local_168 + 0x28) =
               *(ulong *)(local_168 + 0x28) & 0xfffffffeffffffff | (ulong)(local_130 & 1) << 0x20;
          cVar10 = (char)local_134;
          if (local_12c == 0xffffffff) {
            *(ulong *)(local_168 + 0x28) = *(ulong *)(local_168 + 0x28) & 0xffffff01ffffffff;
            *(char *)(local_168 + 0x2d) = cVar10;
          }
          else {
            *(ulong *)(local_168 + 0x28) =
                 *(ulong *)(local_168 + 0x28) & 0xffffff01ffffffff |
                 (ulong)(cVar10 - (char)local_12c & 0x7f) << 0x21;
            *(char *)(local_168 + 0x2d) = cVar10;
          }
          *param_3 = local_168;
        }
        goto LAB_10094bbaa;
      }
    }
    goto LAB_10094c85d;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    local_154 = FUN_10094a007(*(undefined4 *)(param_1 + 0xa0),local_218,param_3,param_7);
    break;
  case 0xc:
    local_154 = FUN_10094abf8(param_1,local_218,param_3,param_7);
    break;
  case 0xd:
  case 0xe:
    local_128 = local_218;
    local_11c = 0;
    if (local_218 != (byte *)0x0) {
      if (param_7 != 0) {
        for (; (*local_128 == 0x20 ||
               (((8 < *local_128 && (*local_128 < 0xb)) || (*local_128 == 0xd))));
            local_128 = local_128 + 1) {
        }
      }
      if (((*local_128 == 0x4e) && (local_128[1] == 0x61)) && (local_128[2] == 0x4e)) {
        local_128 = local_128 + 3;
        if (*local_128 == 0) {
          if (param_3 == (long *)0x0) goto LAB_10094bbaa;
          if (param_1 == DAT_102313590) {
            local_168 = FUN_100947ed5(0xd);
            if (local_168 == 0) {
              _xmlSchemaFreeValue(0);
              goto switchD_10094ba8f_caseD_0;
            }
            *(float *)(local_168 + 0x10) = (float)_xmlXPathNAN;
          }
          else {
            local_168 = FUN_100947ed5(0xe);
            if (local_168 == 0) {
              _xmlSchemaFreeValue(0);
              goto switchD_10094ba8f_caseD_0;
            }
            *(double *)(local_168 + 0x10) = _xmlXPathNAN;
          }
          *param_3 = local_168;
          goto LAB_10094bbaa;
        }
      }
      else {
        bVar2 = *local_128;
        if (bVar2 == 0x2d) {
          local_128 = local_128 + 1;
        }
        local_11c = (uint)(bVar2 == 0x2d);
        if (((*local_128 == 0x49) && (local_128[1] == 0x4e)) && (local_128[2] == 0x46)) {
          local_128 = local_128 + 3;
          if (*local_128 == 0) {
            if (param_3 == (long *)0x0) goto LAB_10094bbaa;
            if (param_1 == DAT_102313590) {
              local_168 = FUN_100947ed5(0xd);
              if (local_168 == 0) {
                _xmlSchemaFreeValue(0);
                goto switchD_10094ba8f_caseD_0;
              }
              if (local_11c == 0) {
                *(float *)(local_168 + 0x10) = (float)_xmlXPathPINF;
              }
              else {
                *(float *)(local_168 + 0x10) = (float)_xmlXPathNINF;
              }
            }
            else {
              local_168 = FUN_100947ed5(0xe);
              if (local_168 == 0) {
                _xmlSchemaFreeValue(0);
                goto switchD_10094ba8f_caseD_0;
              }
              if (local_11c == 0) {
                *(double *)(local_168 + 0x10) = _xmlXPathPINF;
              }
              else {
                *(double *)(local_168 + 0x10) = _xmlXPathNINF;
              }
            }
            *param_3 = local_168;
            goto LAB_10094bbaa;
          }
        }
        else {
          if ((local_11c == 0) && (*local_128 == 0x2b)) {
            local_128 = local_128 + 1;
          }
          if (((*local_128 != 0) && (*local_128 != 0x2b)) && (*local_128 != 0x2d)) {
            for (; (0x2f < *local_128 && (*local_128 < 0x3a)); local_128 = local_128 + 1) {
            }
            if (*local_128 == 0x2e) {
              do {
                local_128 = local_128 + 1;
                if (*local_128 < 0x30) break;
              } while (*local_128 < 0x3a);
            }
            if ((*local_128 == 0x65) || (*local_128 == 0x45)) {
              pbVar1 = local_128 + 1;
              if ((*pbVar1 == 0x2d) || (*pbVar1 == 0x2b)) {
                pbVar1 = local_128 + 2;
              }
              while ((local_128 = pbVar1, 0x2f < *local_128 && (*local_128 < 0x3a))) {
                pbVar1 = local_128 + 1;
              }
            }
            if (param_7 != 0) {
              for (; (*local_128 == 0x20 ||
                     (((8 < *local_128 && (*local_128 < 0xb)) || (*local_128 == 0xd))));
                  local_128 = local_128 + 1) {
              }
            }
            if (*local_128 == 0) {
              if (param_3 == (long *)0x0) goto LAB_10094bbaa;
              if (param_1 == DAT_102313590) {
                local_168 = FUN_100947ed5(0xd);
                if (local_168 != 0) {
                  iVar6 = _sscanf((char *)local_218,"%f",local_168 + 0x10);
                  if (iVar6 != 1) {
                    _xmlSchemaFreeValue(local_168);
                    pbVar4 = local_118;
                    goto LAB_10094c85d;
                  }
                  *param_3 = local_168;
                  goto LAB_10094bbaa;
                }
              }
              else {
                local_168 = FUN_100947ed5(0xe);
                if (local_168 != 0) {
                  iVar6 = _sscanf((char *)local_218,"%lf",local_168 + 0x10);
                  if (iVar6 != 1) {
                    _xmlSchemaFreeValue(local_168);
                    pbVar4 = local_118;
                    goto LAB_10094c85d;
                  }
                  *param_3 = local_168;
                  goto LAB_10094bbaa;
                }
              }
              goto switchD_10094ba8f_caseD_0;
            }
          }
        }
      }
    }
    goto LAB_10094c85d;
  case 0xf:
    local_118 = local_218;
    if (param_7 == 0) {
      if ((*local_218 == 0x30) && (local_218[1] == 0)) {
        local_154 = 0;
      }
      else if ((*local_218 == 0x31) && (local_218[1] == 0)) {
        local_154 = 1;
      }
      else if ((((*local_218 == 0x74) && (local_218[1] == 0x72)) && (local_218[2] == 0x75)) &&
              ((local_218[3] == 0x65 && (local_218[4] == 0)))) {
        local_154 = 1;
      }
      else {
        pbVar4 = local_218;
        if ((*local_218 != 0x66) ||
           (((pbVar4 = local_118, local_218[1] != 0x61 || (local_218[2] != 0x6c)) ||
            ((local_218[3] != 0x73 || ((local_218[4] != 0x65 || (local_218[5] != 0))))))))
        goto LAB_10094c85d;
        local_154 = 0;
      }
    }
    else {
      for (; ((*local_118 == 0x20 || ((8 < *local_118 && (*local_118 < 0xb)))) ||
             (*local_118 == 0xd)); local_118 = local_118 + 1) {
      }
      if (*local_118 == 0x30) {
        local_154 = 0;
        local_118 = local_118 + 1;
      }
      else if (*local_118 == 0x31) {
        local_154 = 1;
        local_118 = local_118 + 1;
      }
      else if (*local_118 == 0x74) {
        pbVar4 = local_118 + 2;
        if (((local_118[1] != 0x72) ||
            (pbVar1 = local_118 + 3, pbVar4 = pbVar1, local_118[2] != 0x75)) ||
           (local_118 = local_118 + 4, pbVar4 = local_118, *pbVar1 != 0x65)) goto LAB_10094c85d;
        local_154 = 1;
      }
      else if (*local_118 == 0x66) {
        pbVar4 = local_118 + 2;
        if ((((local_118[1] != 0x61) || (pbVar4 = local_118 + 3, local_118[2] != 0x6c)) ||
            (pbVar1 = local_118 + 4, pbVar4 = pbVar1, local_118[3] != 0x73)) ||
           (local_118 = local_118 + 5, pbVar4 = local_118, *pbVar1 != 0x65)) goto LAB_10094c85d;
        local_154 = 0;
      }
      if (*local_118 != 0) {
        for (; ((*local_118 == 0x20 || ((8 < *local_118 && (*local_118 < 0xb)))) ||
               (*local_118 == 0xd)); local_118 = local_118 + 1) {
        }
        pbVar4 = local_118;
        if (*local_118 != 0) goto LAB_10094c85d;
      }
    }
    if (param_3 != (long *)0x0) {
      local_168 = FUN_100947ed5(0xf);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      *(uint *)(local_168 + 0x10) = local_154;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x10:
    local_110 = local_218;
    if (param_7 == 0) {
      while( true ) {
        if (*local_110 == 0) goto LAB_10094cd98;
        if (((*local_110 == 0xd) || (*local_110 == 10)) || (*local_110 == 9)) break;
        if (*local_110 == 0x20) {
          local_110 = local_110 + 1;
          if ((*local_110 == 0) || (*local_110 == 0x20)) break;
        }
        else {
          local_110 = local_110 + 1;
        }
      }
      goto LAB_10094c85d;
    }
LAB_10094cd98:
    if (param_3 != (long *)0x0) {
      local_168 = FUN_100947ed5(0x10);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x11:
    if ((param_7 != 0) &&
       (local_160 = (byte *)_xmlSchemaCollapseString(local_218), local_160 != (byte *)0x0)) {
      local_218 = local_160;
    }
    iVar6 = _xmlCheckLanguageID(local_218);
    pbVar4 = local_118;
    if (iVar6 != 1) goto LAB_10094c85d;
    if (param_3 != (long *)0x0) {
      local_168 = FUN_100947ed5(0x11);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x12:
    iVar6 = _xmlValidateNMToken(local_218,1);
    pbVar4 = local_118;
    if (iVar6 != 0) goto LAB_10094c85d;
    if (param_3 != (long *)0x0) {
      local_168 = FUN_100947ed5(0x12);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x13:
    iVar6 = FUN_10094b4fa(DAT_102313688,local_218,param_3,param_4);
    if (iVar6 < 1) {
      local_154 = 1;
    }
    else {
      local_154 = 0;
    }
    break;
  case 0x14:
    local_154 = _xmlValidateName(local_218,1);
    if (((local_154 == 0) && (param_3 != (long *)0x0)) && (local_218 != (byte *)0x0)) {
      local_168 = FUN_100947ed5(0x14);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      for (local_108 = local_218;
          ((*local_108 == 0x20 || ((8 < *local_108 && (*local_108 < 0xb)))) || (*local_108 == 0xd));
          local_108 = local_108 + 1) {
      }
      for (local_100 = local_108;
          (((*local_100 != 0 && (*local_100 != 0x20)) && ((*local_100 < 9 || (10 < *local_100)))) &&
          (*local_100 != 0xd)); local_100 = local_100 + 1) {
      }
      pxVar7 = _xmlStrndup(local_108,(int)local_100 - (int)local_108);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    break;
  case 0x15:
    local_f8 = (xmlChar *)0x0;
    local_f0 = (xmlChar *)0x0;
    local_154 = _xmlValidateQName(local_218,1);
    if (local_154 == 0) {
      if (param_4 != (xmlNodePtr)0x0) {
        local_f0 = _xmlSplitQName2(local_218,&local_198);
        local_e8 = _xmlSearchNs(param_4->doc,param_4,local_198);
        if ((local_e8 == (xmlNsPtr)0x0) && (local_198 != (xmlChar *)0x0)) {
          (*(code *)_xmlFree)(local_198);
          pbVar4 = local_118;
          if (local_f0 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_f0);
            pbVar4 = local_118;
          }
          goto LAB_10094c85d;
        }
        if (local_e8 != (xmlNsPtr)0x0) {
          local_f8 = local_e8->href;
        }
        if (local_198 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_198);
        }
      }
      if (param_3 == (long *)0x0) {
        if (local_f0 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_f0);
        }
      }
      else {
        local_168 = FUN_100947ed5(0x15);
        if (local_168 == 0) {
          if (local_f0 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_f0);
          }
          goto switchD_10094ba8f_caseD_0;
        }
        if (local_f0 == (xmlChar *)0x0) {
          pxVar7 = _xmlStrdup(local_218);
          *(xmlChar **)(local_168 + 0x10) = pxVar7;
        }
        else {
          *(xmlChar **)(local_168 + 0x10) = local_f0;
        }
        if (local_f8 != (xmlChar *)0x0) {
          pxVar7 = _xmlStrdup(local_f8);
          *(xmlChar **)(local_168 + 0x18) = pxVar7;
        }
        *param_3 = local_168;
      }
    }
    break;
  case 0x16:
    local_154 = _xmlValidateNCName(local_218,1);
    if ((local_154 == 0) && (param_3 != (long *)0x0)) {
      local_168 = FUN_100947ed5(0x16);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    break;
  case 0x17:
    local_154 = _xmlValidateNCName(local_218,1);
    if ((local_154 == 0) && (param_3 != (long *)0x0)) {
      local_168 = FUN_100947ed5(0x17);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    if (((local_154 == 0) && (param_4 != (xmlNodePtr)0x0)) &&
       ((param_4->type == XML_ATTRIBUTE_NODE && (local_e0 = param_4, *(int *)&param_4->content != 2)
        ))) {
      local_d0 = (xmlChar *)FUN_10094b043(local_218);
      if (local_d0 == (xmlChar *)0x0) {
        local_d8 = _xmlAddID((xmlValidCtxtPtr)0x0,param_4->doc,local_218,(xmlAttrPtr)local_e0);
      }
      else {
        local_d8 = _xmlAddID((xmlValidCtxtPtr)0x0,param_4->doc,local_d0,(xmlAttrPtr)local_e0);
        (*(code *)_xmlFree)(local_d0);
      }
      if (local_d8 == (xmlIDPtr)0x0) {
        local_154 = 2;
      }
      else {
        *(undefined4 *)&local_e0->content = 2;
      }
    }
    break;
  case 0x18:
    local_154 = _xmlValidateNCName(local_218,1);
    if ((local_154 == 0) && (param_3 != (long *)0x0)) {
      local_168 = FUN_100947ed5(0x18);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    if (((local_154 == 0) && (param_4 != (xmlNodePtr)0x0)) && (param_4->type == XML_ATTRIBUTE_NODE))
    {
      local_c8 = param_4;
      local_c0 = (xmlChar *)FUN_10094b043(local_218);
      if (local_c0 == (xmlChar *)0x0) {
        _xmlAddRef((xmlValidCtxtPtr)0x0,param_4->doc,local_218,(xmlAttrPtr)local_c8);
      }
      else {
        _xmlAddRef((xmlValidCtxtPtr)0x0,param_4->doc,local_c0,(xmlAttrPtr)local_c8);
        (*(code *)_xmlFree)(local_c0);
      }
      *(undefined4 *)&local_c8->content = 3;
    }
    break;
  case 0x19:
    iVar6 = FUN_10094b4fa(DAT_102313660,local_218,param_3,param_4);
    if (iVar6 < 0) {
      local_154 = 2;
    }
    else {
      local_154 = 0;
    }
    if (((local_154 == 0) && (param_4 != (xmlNodePtr)0x0)) && (param_4->type == XML_ATTRIBUTE_NODE))
    {
      *(undefined4 *)&param_4->content = 4;
      local_b8 = param_4;
    }
    break;
  case 0x1a:
    local_154 = _xmlValidateNCName(local_218,1);
    if ((param_4 == (xmlNodePtr)0x0) || (param_4->doc == (_xmlDoc *)0x0)) {
      local_154 = 3;
    }
    if (local_154 == 0) {
      local_b0 = (xmlChar *)FUN_10094b043(local_218);
      if (local_b0 == (xmlChar *)0x0) {
        local_a8 = _xmlGetDocEntity(param_4->doc,local_218);
      }
      else {
        local_a8 = _xmlGetDocEntity(param_4->doc,local_b0);
        (*(code *)_xmlFree)(local_b0);
      }
      if ((local_a8 == (xmlEntityPtr)0x0) ||
         (local_a8->etype != XML_EXTERNAL_GENERAL_UNPARSED_ENTITY)) {
        local_154 = 4;
      }
    }
    if ((local_154 == 0) && (param_3 != (long *)0x0)) {
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"Unimplemented block at %s:%d\n","xmlschemastypes.c",0xaed);
    }
    if (((local_154 == 0) && (param_4 != (xmlNodePtr)0x0)) && (param_4->type == XML_ATTRIBUTE_NODE))
    {
      *(undefined4 *)&param_4->content = 5;
      local_a0 = param_4;
    }
    break;
  case 0x1b:
    if ((param_4 == (xmlNodePtr)0x0) || (param_4->doc == (_xmlDoc *)0x0)) {
      if (local_160 != (byte *)0x0) {
        (*(code *)_xmlFree)(local_160);
      }
      return 3;
    }
    iVar6 = FUN_10094b4fa(DAT_102313670,local_218,param_3,param_4);
    local_154 = (uint)(iVar6 < 1);
    if (((local_154 == 0) && (param_4 != (xmlNodePtr)0x0)) && (param_4->type == XML_ATTRIBUTE_NODE))
    {
      *(undefined4 *)&param_4->content = 6;
      local_98 = param_4;
    }
    break;
  case 0x1c:
    local_90 = (xmlChar *)0x0;
    local_88 = (xmlChar *)0x0;
    local_154 = _xmlValidateQName(local_218,1);
    if ((local_154 == 0) && (param_4 != (xmlNodePtr)0x0)) {
      local_88 = _xmlSplitQName2(local_218,&local_1a0);
      if (local_1a0 != (xmlChar *)0x0) {
        local_80 = _xmlSearchNs(param_4->doc,param_4,local_1a0);
        if (local_80 == (xmlNsPtr)0x0) {
          local_154 = 1;
        }
        else if (param_3 != (long *)0x0) {
          local_90 = _xmlStrdup(local_80->href);
        }
      }
      if ((local_88 != (xmlChar *)0x0) && ((param_3 == (long *)0x0 || (local_154 != 0)))) {
        (*(code *)_xmlFree)(local_88);
      }
      if (local_1a0 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_1a0);
      }
    }
    if ((param_4 == (xmlNodePtr)0x0) || (param_4->doc == (_xmlDoc *)0x0)) {
      local_154 = 3;
    }
    if (local_154 == 0) {
      iVar6 = _xmlValidateNotationUse((xmlValidCtxtPtr)0x0,param_4->doc,local_218);
      if (iVar6 == 1) {
        local_154 = 0;
      }
      else {
        local_154 = 1;
      }
    }
    if ((local_154 == 0) && (param_3 != (long *)0x0)) {
      local_168 = FUN_100947ed5(0x1c);
      if (local_168 == 0) {
        if (local_88 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_88);
        }
        if (local_90 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_90);
        }
        goto switchD_10094ba8f_caseD_0;
      }
      if (local_88 == (xmlChar *)0x0) {
        pxVar7 = _xmlStrdup(local_218);
        *(xmlChar **)(local_168 + 0x10) = pxVar7;
      }
      else {
        *(xmlChar **)(local_168 + 0x10) = local_88;
      }
      if (local_90 != (xmlChar *)0x0) {
        *(xmlChar **)(local_168 + 0x18) = local_90;
      }
      *param_3 = local_168;
    }
    break;
  case 0x1d:
    if (*local_218 != 0) {
      if ((param_7 != 0) &&
         (local_160 = (byte *)_xmlSchemaCollapseString(local_218), local_160 != (byte *)0x0)) {
        local_218 = local_160;
      }
      local_78 = _xmlParseURI(local_218);
      pbVar4 = local_118;
      if (local_78 == 0) goto LAB_10094c85d;
      _xmlFreeURI(local_78);
    }
    if (param_3 != (long *)0x0) {
      local_168 = FUN_100947ed5(0x1d);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    local_1a8 = local_218;
    local_20 = 0;
    if (local_218 == (byte *)0x0) goto LAB_10094c85d;
    if (param_7 != 0) {
      for (; (*local_1a8 == 0x20 ||
             (((8 < *local_1a8 && (*local_1a8 < 0xb)) || (*local_1a8 == 0xd))));
          local_1a8 = local_1a8 + 1) {
      }
    }
    if (*local_1a8 == 0x2d) {
      local_20 = 1;
      local_1a8 = local_1a8 + 1;
    }
    else if (*local_1a8 == 0x2b) {
      local_1a8 = local_1a8 + 1;
    }
    local_154 = FUN_10094b75a(&local_1a8,&local_1b0,&local_1b8,&local_1c0);
    pbVar4 = local_118;
    if (local_154 == 0xffffffff) goto LAB_10094c85d;
    if (param_7 != 0) {
      for (; ((*local_1a8 == 0x20 || ((8 < *local_1a8 && (*local_1a8 < 0xb)))) ||
             (*local_1a8 == 0xd)); local_1a8 = local_1a8 + 1) {
      }
    }
    if (*local_1a8 != 0) goto LAB_10094c85d;
    if (*(int *)(param_1 + 0xa0) == 0x1f) {
      if (local_20 == 0) {
joined_r0x00010094e1ba:
        if ((local_1c0 != 0) || ((local_1b8 != 0 || (local_1b0 != 0)))) goto LAB_10094c85d;
      }
    }
    else {
      if (*(int *)(param_1 + 0xa0) == 0x22) {
        if (local_20 == 1) goto LAB_10094c85d;
      }
      else {
        if (*(int *)(param_1 + 0xa0) != 0x20) {
          if ((*(int *)(param_1 + 0xa0) == 0x21) && (local_20 == 1)) goto joined_r0x00010094e1ba;
          goto LAB_10094e2c4;
        }
        if (local_20 == 0) goto LAB_10094c85d;
      }
      if (((local_1c0 == 0) && (local_1b8 == 0)) && (local_1b0 == 0)) goto LAB_10094c85d;
    }
LAB_10094e2c4:
    if ((param_3 != (long *)0x0) &&
       (local_168 = FUN_100947ed5(*(undefined4 *)(param_1 + 0xa0)), local_168 != 0)) {
      if (local_154 == 0) {
        local_154 = 1;
      }
      *(long *)(local_168 + 0x10) = local_1b0;
      *(long *)(local_168 + 0x18) = local_1b8;
      *(long *)(local_168 + 0x20) = local_1c0;
      *(ulong *)(local_168 + 0x28) =
           *(ulong *)(local_168 + 0x28) & 0xfffffffeffffffff | (ulong)(local_20 & 1) << 0x20;
      *(ulong *)(local_168 + 0x28) = *(ulong *)(local_168 + 0x28) & 0xffffff01ffffffff;
      *(char *)(local_168 + 0x2d) = (char)local_154;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x23:
  case 0x25:
  case 0x27:
  case 0x29:
    local_1c8 = local_218;
    local_1c = 0;
    if (local_218 != (byte *)0x0) {
      if (*local_218 == 0x2d) {
        local_1c = 1;
        local_1c8 = local_218 + 1;
      }
      else if (*local_218 == 0x2b) {
        local_1c8 = local_218 + 1;
      }
      local_154 = FUN_10094b75a(&local_1c8,&local_1d0,&local_1d8,&local_1e0);
      pbVar4 = local_118;
      if ((-1 < (int)local_154) && (*local_1c8 == 0)) {
        if (*(int *)(param_1 + 0xa0) == 0x25) {
          if ((0x399 < local_1e0) &&
             ((0x39a < local_1e0 ||
              ((0x202882f < local_1d8 &&
               (((0x2028830 < local_1d8 || ((local_1c == 0 && (0x343cfff < local_1d0)))) ||
                ((local_1c == 1 && (0x343d000 < local_1d0)))))))))) goto LAB_10094c85d;
        }
        else if (*(int *)(param_1 + 0xa0) == 0x23) {
          if ((local_1e0 != 0) ||
             ((0x14 < local_1d8 &&
              (((0x15 < local_1d8 || ((local_1c == 0 && (0x2d48aff < local_1d0)))) ||
               ((local_1c == 1 && (0x2d48b00 < local_1d0)))))))) goto LAB_10094c85d;
        }
        else if (*(int *)(param_1 + 0xa0) == 0x27) {
          if (((local_1d8 != 0) || ((local_1e0 != 0 || ((local_1c == 1 && (0x8000 < local_1d0))))))
             || ((local_1c == 0 && (0x7fff < local_1d0)))) goto LAB_10094c85d;
        }
        else if ((*(int *)(param_1 + 0xa0) == 0x29) &&
                ((((local_1d8 != 0 || (local_1e0 != 0)) || ((local_1c == 1 && (0x80 < local_1d0))))
                 || ((local_1c == 0 && (0x7f < local_1d0)))))) goto LAB_10094c85d;
        if ((param_3 != (long *)0x0) &&
           (local_168 = FUN_100947ed5(*(undefined4 *)(param_1 + 0xa0)), local_168 != 0)) {
          *(ulong *)(local_168 + 0x10) = local_1d0;
          *(ulong *)(local_168 + 0x18) = local_1d8;
          *(ulong *)(local_168 + 0x20) = local_1e0;
          *(ulong *)(local_168 + 0x28) =
               *(ulong *)(local_168 + 0x28) & 0xfffffffeffffffff | (ulong)(local_1c & 1) << 0x20;
          *(ulong *)(local_168 + 0x28) = *(ulong *)(local_168 + 0x28) & 0xffffff01ffffffff;
          *(char *)(local_168 + 0x2d) = (char)local_154;
          *param_3 = local_168;
        }
        goto LAB_10094bbaa;
      }
    }
    goto LAB_10094c85d;
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x2a:
    local_1e8 = local_218;
    if (((local_218 == (byte *)0x0) ||
        (local_154 = FUN_10094b75a(&local_1e8,&local_1f0,&local_1f8,&local_200), pbVar4 = local_118,
        (int)local_154 < 0)) || (*local_1e8 != 0)) goto LAB_10094c85d;
    if (*(int *)(param_1 + 0xa0) == 0x26) {
      if ((0x733 < local_200) &&
         ((0x734 < local_200 ||
          ((0x4051060 < local_1f8 && ((0x4051061 < local_1f8 || (0x91beff < local_1f0))))))))
      goto LAB_10094c85d;
    }
    else if (*(int *)(param_1 + 0xa0) == 0x24) {
      if ((local_200 != 0) ||
         ((0x29 < local_1f8 && ((0x2a < local_1f8 || (0x5a915ff < local_1f0))))))
      goto LAB_10094c85d;
    }
    else if (*(int *)(param_1 + 0xa0) == 0x28) {
      if (((local_1f8 != 0) || (local_200 != 0)) || (0xffff < local_1f0)) goto LAB_10094c85d;
    }
    else if ((*(int *)(param_1 + 0xa0) == 0x2a) &&
            (((local_1f8 != 0 || (local_200 != 0)) || (0xff < local_1f0)))) goto LAB_10094c85d;
    if ((param_3 != (long *)0x0) &&
       (local_168 = FUN_100947ed5(*(undefined4 *)(param_1 + 0xa0)), local_168 != 0)) {
      *(ulong *)(local_168 + 0x10) = local_1f0;
      *(ulong *)(local_168 + 0x18) = local_1f8;
      *(ulong *)(local_168 + 0x20) = local_200;
      *(ulong *)(local_168 + 0x28) = *(ulong *)(local_168 + 0x28) & 0xfffffffeffffffff;
      *(ulong *)(local_168 + 0x28) = *(ulong *)(local_168 + 0x28) & 0xffffff01ffffffff;
      *(char *)(local_168 + 0x2d) = (char)local_154;
      *param_3 = local_168;
    }
    goto LAB_10094bbaa;
  case 0x2b:
    local_70 = local_218;
    local_54 = 0;
    if (local_218 != (byte *)0x0) {
      if (param_7 != 0) {
        for (; (*local_70 == 0x20 || (((8 < *local_70 && (*local_70 < 0xb)) || (*local_70 == 0xd))))
            ; local_70 = local_70 + 1) {
        }
      }
      local_68 = local_70;
      for (; (((0x2f < *local_70 && (*local_70 < 0x3a)) ||
              ((0x40 < *local_70 && (*local_70 < 0x47)))) ||
             ((0x60 < *local_70 && (*local_70 < 0x67)))); local_70 = local_70 + 1) {
        local_54 = local_54 + 1;
      }
      if (param_7 != 0) {
        for (; (*local_70 == 0x20 || (((8 < *local_70 && (*local_70 < 0xb)) || (*local_70 == 0xd))))
            ; local_70 = local_70 + 1) {
        }
      }
      if ((*local_70 == 0) && ((local_54 & 1) == 0)) {
        if (param_3 != (long *)0x0) {
          local_168 = FUN_100947ed5(0x2b);
          if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
          local_70 = _xmlStrndup(local_68,local_54);
          if (local_70 == (byte *)0x0) {
            FUN_100947ea4(param_4,"allocating hexbin data");
            (*(code *)_xmlFree)(local_168);
            pbVar4 = local_118;
            goto LAB_10094c85d;
          }
          local_58 = (int)local_54 / 2;
          local_60 = local_70;
          while (bVar11 = 0 < (int)local_54, local_54 = local_54 - 1, bVar11) {
            if (0x60 < *local_60) {
              *local_60 = *local_60 - 0x20;
            }
            local_60 = local_60 + 1;
          }
          *(byte **)(local_168 + 0x10) = local_70;
          *(int *)(local_168 + 0x18) = local_58;
          *param_3 = local_168;
        }
        goto LAB_10094bbaa;
      }
    }
    goto LAB_10094c85d;
  case 0x2c:
    local_50 = local_218;
    local_38 = 0;
    local_34 = 0;
    if (local_218 != (byte *)0x0) {
      for (; *local_50 != 0; local_50 = local_50 + 1) {
        local_30 = FUN_100949f7e(*local_50);
        if (-1 < local_30) {
          if (0x3f < local_30) break;
          local_38 = local_38 + 1;
        }
      }
      do {
        if (*local_50 == 0) goto code_r0x00010094de2c;
        local_2c = FUN_100949f7e(*local_50);
        if ((-1 < local_2c) && (pbVar4 = local_118, local_2c < 0x40)) break;
        if (local_2c == 0x40) {
          local_34 = local_34 + 1;
        }
        local_50 = local_50 + 1;
      } while( true );
    }
LAB_10094c85d:
    local_118 = pbVar4;
    if (local_160 != (byte *)0x0) {
      (*(code *)_xmlFree)(local_160);
    }
    return 1;
  case 0x2d:
  case 0x2e:
    if ((param_9 != 0) && (param_3 != (long *)0x0)) {
      local_168 = FUN_100947ed5(0x2e);
      if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
      pxVar7 = _xmlStrdup(local_218);
      *(xmlChar **)(local_168 + 0x10) = pxVar7;
      *param_3 = local_168;
    }
LAB_10094bbaa:
    if (local_160 != (byte *)0x0) {
      (*(code *)_xmlFree)(local_160);
    }
    return 0;
  }
  if (local_160 != (byte *)0x0) {
    (*(code *)_xmlFree)(local_160);
  }
  return local_154;
code_r0x00010094de2c:
  uVar5 = local_38;
  if ((int)local_38 < 0) {
    uVar5 = local_38 + 3;
  }
  local_3c = ((int)uVar5 >> 2) * 3;
  pbVar4 = local_118;
  if (local_34 == 0) {
    if ((local_38 & 3) != 0) goto LAB_10094c85d;
  }
  else if (local_34 == 1) {
    if ((int)local_38 % 4 != 3) goto LAB_10094c85d;
    local_28 = FUN_100949f7e(*local_50);
    while (((int)local_28 < 0 || (0x3f < (int)local_28))) {
      local_50 = local_50 + -1;
      local_28 = FUN_100949f7e(*local_50);
    }
    pbVar4 = local_118;
    if ((local_28 & 0xffffffc3) != 0) goto LAB_10094c85d;
    local_3c = local_3c + 2;
  }
  else {
    if ((local_34 != 2) || ((int)local_38 % 4 != 2)) goto LAB_10094c85d;
    local_24 = FUN_100949f7e(*local_50);
    while (((int)local_24 < 0 || (0x3f < (int)local_24))) {
      local_50 = local_50 + -1;
      local_24 = FUN_100949f7e(*local_50);
    }
    pbVar4 = local_118;
    if ((local_24 & 0xffffffcf) != 0) goto LAB_10094c85d;
    local_3c = local_3c + 1;
  }
  if (param_3 != (long *)0x0) {
    local_168 = FUN_100947ed5(0x2c);
    if (local_168 == 0) goto switchD_10094ba8f_caseD_0;
    local_48 = (byte *)(*(code *)_xmlMallocAtomic)((long)(int)(local_34 + local_38 + 1));
    if (local_48 == (byte *)0x0) {
      FUN_100947ea4(param_4,"allocating base64 data");
      (*(code *)_xmlFree)(local_168);
      pbVar4 = local_118;
      goto LAB_10094c85d;
    }
    *(byte **)(local_168 + 0x10) = local_48;
    for (local_50 = local_218; *local_50 != 0; local_50 = local_50 + 1) {
      iVar6 = FUN_100949f7e(*local_50);
      if (-1 < iVar6) {
        *local_48 = *local_50;
        local_48 = local_48 + 1;
      }
    }
    *local_48 = 0;
    *(int *)(local_168 + 0x18) = local_3c;
    *param_3 = local_168;
  }
  goto LAB_10094bbaa;
code_r0x00010094bfa5:
  *local_190 = *local_140;
  local_140 = local_140 + 1;
  local_190 = local_190 + 1;
  local_134 = local_134 + 1;
  goto LAB_10094bfd6;
}

