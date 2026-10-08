
long FUN_10087dc89(long param_1,int *param_2,int param_3)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long local_c8;
  int local_a8;
  char local_a1;
  long local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  char *local_88;
  long local_80;
  int local_74;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  char *local_50;
  long local_48;
  long local_40;
  int local_34;
  undefined1 *local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_a1 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = (char *)0x0;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    *(undefined4 *)(param_1 + 0x110) = 0xc;
    local_a1 = '\"';
    _xmlNextChar(param_1);
  }
  else {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\'') {
      FUN_100877520(param_1,0x27,0);
      return 0;
    }
    local_a1 = '\'';
    *(undefined4 *)(param_1 + 0x110) = 0xc;
    _xmlNextChar(param_1);
  }
  local_94 = 100;
  local_a0 = (*(code *)_xmlMallocAtomic)(100);
  if (local_a0 == 0) {
LAB_10087e7fa:
    _xmlErrMemory(param_1,0);
    local_c8 = 0;
  }
  else {
    local_90 = _xmlCurrentChar(param_1,&local_a8);
    while (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != local_a1 && (local_90 != 0x3c)) &&
           (local_90 != 0))) {
      if (local_90 == 0x26) {
        local_8c = 0;
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '#') {
          local_74 = _xmlParseCharRef(param_1);
          if (local_74 == 0x26) {
            if (*(int *)(param_1 + 0x1c) == 0) {
              lVar1 = local_a0;
              if (local_94 + -10 < local_98) {
                local_94 = local_94 << 1;
                local_68 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
                lVar1 = local_68;
                if (local_68 == 0) goto LAB_10087e7fa;
              }
              local_a0 = lVar1;
              *(undefined1 *)(local_98 + local_a0) = 0x26;
              *(undefined1 *)((local_98 + 1) + local_a0) = 0x23;
              *(undefined1 *)((local_98 + 2) + local_a0) = 0x33;
              *(undefined1 *)((local_98 + 3) + local_a0) = 0x38;
              *(undefined1 *)((local_98 + 4) + local_a0) = 0x3b;
              local_98 = local_98 + 5;
            }
            else {
              lVar1 = local_a0;
              if (local_94 + -10 < local_98) {
                local_94 = local_94 << 1;
                local_70 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
                lVar1 = local_70;
                if (local_70 == 0) goto LAB_10087e7fa;
              }
              local_a0 = lVar1;
              *(undefined1 *)(local_98 + local_a0) = 0x26;
              local_98 = local_98 + 1;
            }
          }
          else {
            lVar1 = local_a0;
            if (local_94 + -10 < local_98) {
              local_94 = local_94 << 1;
              local_60 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
              lVar1 = local_60;
              if (local_60 == 0) goto LAB_10087e7fa;
            }
            local_a0 = lVar1;
            iVar3 = _xmlCopyChar(0,local_98 + local_a0,local_74);
            local_98 = local_98 + iVar3;
          }
        }
        else {
          local_80 = _xmlParseEntityRef(param_1);
          if ((local_80 == 0) || (*(int *)(local_80 + 0x5c) != 6)) {
            if ((local_80 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
              if (local_80 != 0) {
                local_34 = _xmlStrlen(*(xmlChar **)(local_80 + 0x10));
                local_30 = *(undefined1 **)(local_80 + 0x10);
                if (((*(int *)(local_80 + 0x5c) != 6) && (*(long *)(local_80 + 0x50) != 0)) &&
                   (local_28 = _xmlStringDecodeEntities
                                         (param_1,*(undefined8 *)(local_80 + 0x50),1,0,0,0),
                   local_28 != 0)) {
                  (*(code *)_xmlFree)(local_28);
                }
                *(undefined1 *)(local_98 + local_a0) = 0x26;
                local_98 = local_98 + 1;
                lVar1 = local_a0;
                if ((local_94 - local_34) + -10 < local_98) {
                  local_94 = local_94 << 1;
                  local_20 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
                  lVar1 = local_20;
                  if (local_20 == 0) goto LAB_10087e7fa;
                }
                for (; local_a0 = lVar1, 0 < local_34; local_34 = local_34 + -1) {
                  *(undefined1 *)(local_98 + local_a0) = *local_30;
                  local_30 = local_30 + 1;
                  local_98 = local_98 + 1;
                  lVar1 = local_a0;
                }
                *(undefined1 *)(local_98 + local_a0) = 0x3b;
                local_98 = local_98 + 1;
              }
            }
            else if (*(int *)(local_80 + 0x5c) == 6) {
              lVar1 = local_a0;
              if (local_94 + -10 < local_98) {
                local_94 = local_94 << 1;
                local_40 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
                lVar1 = local_40;
                if (local_40 == 0) goto LAB_10087e7fa;
              }
              local_a0 = lVar1;
              if (*(long *)(local_80 + 0x50) != 0) {
                *(undefined1 *)(local_98 + local_a0) = **(undefined1 **)(local_80 + 0x50);
                local_98 = local_98 + 1;
              }
            }
            else {
              local_50 = (char *)_xmlStringDecodeEntities
                                           (param_1,*(undefined8 *)(local_80 + 0x50),1,0,0,0);
              lVar1 = local_a0;
              pcVar2 = local_50;
              if (local_50 != (char *)0x0) {
                while (local_88 = pcVar2, local_a0 = lVar1, *local_88 != '\0') {
                  *(char *)(local_98 + local_a0) = *local_88;
                  local_88 = local_88 + 1;
                  local_98 = local_98 + 1;
                  lVar1 = local_a0;
                  pcVar2 = local_88;
                  if (local_94 + -10 < local_98) {
                    local_94 = local_94 << 1;
                    local_48 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
                    lVar1 = local_48;
                    pcVar2 = local_88;
                    if (local_48 == 0) goto LAB_10087e7fa;
                  }
                }
                (*(code *)_xmlFree)(local_50);
              }
            }
          }
          else {
            lVar1 = local_a0;
            if (local_94 + -10 < local_98) {
              local_94 = local_94 << 1;
              local_58 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
              lVar1 = local_58;
              if (local_58 == 0) goto LAB_10087e7fa;
            }
            local_a0 = lVar1;
            if ((*(int *)(param_1 + 0x1c) == 0) && (**(char **)(local_80 + 0x50) == '&')) {
              *(undefined1 *)(local_98 + local_a0) = 0x26;
              *(undefined1 *)((local_98 + 1) + local_a0) = 0x23;
              *(undefined1 *)((local_98 + 2) + local_a0) = 0x33;
              *(undefined1 *)((local_98 + 3) + local_a0) = 0x38;
              *(undefined1 *)((local_98 + 4) + local_a0) = 0x3b;
              local_98 = local_98 + 5;
            }
            else {
              *(undefined1 *)(local_98 + local_a0) = **(undefined1 **)(local_80 + 0x50);
              local_98 = local_98 + 1;
            }
          }
        }
      }
      else {
        if (((local_90 == 0x20) || (local_90 == 0xd)) || ((local_90 == 10 || (local_90 == 9)))) {
          if ((local_98 != 0) || (lVar1 = local_a0, param_3 == 0)) {
            if ((param_3 == 0) || (lVar1 = local_a0, local_8c == 0)) {
              if (local_a8 == 1) {
                *(undefined1 *)(local_98 + local_a0) = 0x20;
                local_98 = local_98 + 1;
              }
              else {
                iVar3 = _xmlCopyCharMultiByte(local_98 + local_a0,0x20);
                local_98 = local_98 + iVar3;
              }
              lVar1 = local_a0;
              if (local_94 + -10 < local_98) {
                local_94 = local_94 << 1;
                local_18 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
                lVar1 = local_18;
                if (local_18 == 0) goto LAB_10087e7fa;
              }
            }
            local_a0 = lVar1;
            local_8c = 1;
            lVar1 = local_a0;
          }
        }
        else {
          local_8c = 0;
          if (local_a8 == 1) {
            *(char *)(local_98 + local_a0) = (char)local_90;
            local_98 = local_98 + 1;
          }
          else {
            iVar3 = _xmlCopyCharMultiByte(local_98 + local_a0,local_90);
            local_98 = local_98 + iVar3;
          }
          lVar1 = local_a0;
          if (local_94 + -10 < local_98) {
            local_94 = local_94 << 1;
            local_10 = (*(code *)_xmlRealloc)(local_a0,(long)local_94);
            lVar1 = local_10;
            if (local_10 == 0) goto LAB_10087e7fa;
          }
        }
        local_a0 = lVar1;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
          *(int *)(*(long *)(param_1 + 0x38) + 0x34) =
               *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
          *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
        }
        else {
          *(int *)(*(long *)(param_1 + 0x38) + 0x38) =
               *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
        }
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + (long)local_a8;
        if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
      }
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      local_90 = _xmlCurrentChar(param_1,&local_a8);
    }
    if ((local_8c != 0) && (param_3 != 0)) {
      while (*(char *)(local_98 + local_a0 + -1) == ' ') {
        local_98 = local_98 + -1;
      }
    }
    *(undefined1 *)(local_98 + local_a0) = 0;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '<') {
      FUN_100877520(param_1,0x26,0);
    }
    else if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == local_a1) {
      _xmlNextChar(param_1);
    }
    else {
      FUN_100877b3f(param_1,0x28,"AttValue: \' expected\n");
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_98;
    }
    local_c8 = local_a0;
  }
  return local_c8;
}

