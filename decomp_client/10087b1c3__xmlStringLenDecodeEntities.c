
long _xmlStringLenDecodeEntities
               (long param_1,ulong param_2,int param_3,uint param_4,byte param_5,byte param_6,
               uint param_7)

{
  xmlGenericErrorFunc pxVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  xmlGenericErrorFunc *ppxVar7;
  void **ppvVar8;
  long local_c8;
  ulong local_a8;
  long local_a0;
  int local_94;
  long local_90;
  int local_84;
  char *local_80;
  ulong local_78;
  long local_70;
  uint local_64;
  int local_60;
  int local_5c;
  char *local_58;
  long local_50;
  int local_44;
  undefined1 *local_40;
  long local_38;
  char *local_30;
  long local_28;
  long local_20;
  
  local_90 = 0;
  local_84 = 0;
  local_80 = (char *)0x0;
  local_60 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 < 0)) {
    local_c8 = 0;
  }
  else {
    local_78 = (long)param_3 + param_2;
    local_a8 = param_2;
    local_a0 = param_1;
    if (*(int *)(param_1 + 0x188) < 0x29) {
      local_84 = 300;
      local_90 = (*(code *)_xmlMallocAtomic)(300);
      if (local_90 == 0) {
LAB_10087b8e4:
        _xmlErrMemory(local_a0,0);
        local_c8 = 0;
      }
      else {
        if (local_a8 < local_78) {
          local_64 = _xmlStringCurrentChar(local_a0,local_a8,&local_94);
        }
        else {
          local_64 = 0;
        }
        while (((local_64 != 0 && (param_5 != local_64)) &&
               ((param_6 != local_64 && (((param_7 & 0xff) != local_64 && (local_64 != 0))))))) {
          if ((local_64 == 0x26) && (*(char *)(local_a8 + 1) == '#')) {
            local_5c = FUN_10087a77a(local_a0,&local_a8);
            lVar3 = local_90;
            if (local_5c != 0) {
              iVar5 = _xmlCopyCharMultiByte(local_60 + local_90,local_5c);
              local_60 = local_60 + iVar5;
              lVar3 = local_90;
            }
          }
          else if ((local_64 == 0x26) && (((byte)param_4 & 1) == 1)) {
            piVar6 = ___xmlParserDebugEntities();
            if (*piVar6 != 0) {
              ppxVar7 = ___xmlGenericError();
              uVar2 = local_a8;
              pxVar1 = *ppxVar7;
              ppvVar8 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar8,"String decoding Entity Reference: %.30s\n",uVar2);
            }
            local_70 = _xmlParseStringEntityRef(local_a0,&local_a8);
            if ((local_70 == 0) || (*(int *)(local_70 + 0x5c) != 6)) {
              if ((local_70 == 0) || (*(long *)(local_70 + 0x50) == 0)) {
                lVar3 = local_90;
                if (local_70 != 0) {
                  local_44 = _xmlStrlen(*(xmlChar **)(local_70 + 0x10));
                  local_40 = *(undefined1 **)(local_70 + 0x10);
                  *(undefined1 *)(local_60 + local_90) = 0x26;
                  local_60 = local_60 + 1;
                  lVar3 = local_90;
                  if ((local_84 - local_44) + -100 < local_60) {
                    local_84 = local_84 << 1;
                    local_38 = (*(code *)_xmlRealloc)(local_90,(long)local_84);
                    lVar3 = local_38;
                    if (local_38 == 0) goto LAB_10087b8e4;
                  }
                  for (; local_90 = lVar3, 0 < local_44; local_44 = local_44 + -1) {
                    *(undefined1 *)(local_60 + local_90) = *local_40;
                    local_40 = local_40 + 1;
                    local_60 = local_60 + 1;
                    lVar3 = local_90;
                  }
                  *(undefined1 *)(local_60 + local_90) = 0x3b;
                  local_60 = local_60 + 1;
                  lVar3 = local_90;
                }
              }
              else {
                *(int *)(local_a0 + 0x188) = *(int *)(local_a0 + 0x188) + 1;
                local_58 = (char *)_xmlStringDecodeEntities
                                             (local_a0,*(undefined8 *)(local_70 + 0x50),param_4,0,0,
                                              0);
                *(int *)(local_a0 + 0x188) = *(int *)(local_a0 + 0x188) + -1;
                lVar3 = local_90;
                pcVar4 = local_58;
                if (local_58 != (char *)0x0) {
                  while (local_80 = pcVar4, local_90 = lVar3, *local_80 != '\0') {
                    *(char *)(local_60 + local_90) = *local_80;
                    local_80 = local_80 + 1;
                    local_60 = local_60 + 1;
                    lVar3 = local_90;
                    pcVar4 = local_80;
                    if (local_84 + -100 < local_60) {
                      local_84 = local_84 << 1;
                      local_50 = (*(code *)_xmlRealloc)(local_90,(long)local_84);
                      lVar3 = local_50;
                      pcVar4 = local_80;
                      if (local_50 == 0) goto LAB_10087b8e4;
                    }
                  }
                  (*(code *)_xmlFree)(local_58);
                  lVar3 = local_90;
                }
              }
            }
            else if (*(long *)(local_70 + 0x50) == 0) {
              FUN_100877b3f(local_a0,1,"predefined entity has no content\n");
              lVar3 = local_90;
            }
            else {
              iVar5 = _xmlCopyCharMultiByte(local_60 + local_90,**(undefined1 **)(local_70 + 0x50));
              local_60 = local_60 + iVar5;
              lVar3 = local_90;
            }
          }
          else if ((local_64 == 0x25) && (((byte)(param_4 >> 1) & 1) == 1)) {
            piVar6 = ___xmlParserDebugEntities();
            if (*piVar6 != 0) {
              ppxVar7 = ___xmlGenericError();
              uVar2 = local_a8;
              pxVar1 = *ppxVar7;
              ppvVar8 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar8,"String decoding PE Reference: %.30s\n",uVar2);
            }
            local_70 = _xmlParseStringPEReference(local_a0,&local_a8);
            lVar3 = local_90;
            if (local_70 != 0) {
              *(int *)(local_a0 + 0x188) = *(int *)(local_a0 + 0x188) + 1;
              local_30 = (char *)_xmlStringDecodeEntities
                                           (local_a0,*(undefined8 *)(local_70 + 0x50),param_4,0,0,0)
              ;
              *(int *)(local_a0 + 0x188) = *(int *)(local_a0 + 0x188) + -1;
              lVar3 = local_90;
              pcVar4 = local_30;
              if (local_30 != (char *)0x0) {
                while (local_80 = pcVar4, local_90 = lVar3, *local_80 != '\0') {
                  *(char *)(local_60 + local_90) = *local_80;
                  local_80 = local_80 + 1;
                  local_60 = local_60 + 1;
                  lVar3 = local_90;
                  pcVar4 = local_80;
                  if (local_84 + -100 < local_60) {
                    local_84 = local_84 << 1;
                    local_28 = (*(code *)_xmlRealloc)(local_90,(long)local_84);
                    lVar3 = local_28;
                    pcVar4 = local_80;
                    if (local_28 == 0) goto LAB_10087b8e4;
                  }
                }
                (*(code *)_xmlFree)(local_30);
                lVar3 = local_90;
              }
            }
          }
          else {
            if (local_94 == 1) {
              *(char *)(local_60 + local_90) = (char)local_64;
              local_60 = local_60 + 1;
            }
            else {
              iVar5 = _xmlCopyCharMultiByte(local_60 + local_90,local_64);
              local_60 = local_60 + iVar5;
            }
            local_a8 = (long)local_94 + local_a8;
            lVar3 = local_90;
            if (local_84 + -100 < local_60) {
              local_84 = local_84 << 1;
              local_20 = (*(code *)_xmlRealloc)(local_90,(long)local_84);
              lVar3 = local_20;
              if (local_20 == 0) goto LAB_10087b8e4;
            }
          }
          local_90 = lVar3;
          if (local_a8 < local_78) {
            local_64 = _xmlStringCurrentChar(local_a0,local_a8,&local_94);
          }
          else {
            local_64 = 0;
          }
        }
        *(undefined1 *)(local_60 + local_90) = 0;
        local_c8 = local_90;
      }
    }
    else {
      FUN_100877520(param_1,0x59,0);
      local_c8 = 0;
    }
  }
  return local_c8;
}

