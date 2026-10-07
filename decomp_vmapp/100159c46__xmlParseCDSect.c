
void _xmlParseCDSect(long *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int local_3c;
  int local_38;
  int local_34;
  long local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_24 = 100;
  local_14 = 0;
  if (((((**(char **)(param_1[7] + 0x20) == '<') &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '[')) &&
      ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'C' &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'D')))) &&
     (((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == 'A' &&
       ((*(char *)(*(long *)(param_1[7] + 0x20) + 6) == 'T' &&
        (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'A')))) &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 8) == '[')))) {
    param_1[0x27] = param_1[0x27] + 9;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 9;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 9;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) == '\0') &&
       (iVar3 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar3 < 1)) {
      _xmlPopInput(param_1);
    }
    *(undefined4 *)(param_1 + 0x22) = 8;
    local_20 = _xmlCurrentChar(param_1,&local_34);
    if (local_20 < 0x100) {
      if ((((local_20 < 9) || (10 < local_20)) && (local_20 != 0xd)) && (local_20 < 0x20)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else if ((((local_20 < 0x100) || (0xd7ff < local_20)) &&
             ((local_20 < 0xe000 || (0xfffd < local_20)))) &&
            ((local_20 < 0x10000 || (0x10ffff < local_20)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_100143bf8(param_1,0x3f,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
    }
    else {
      if (**(char **)(param_1[7] + 0x20) == '\n') {
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
      }
      else {
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_34;
      if (**(char **)(param_1[7] + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      local_1c = _xmlCurrentChar(param_1,&local_38);
      if (local_1c < 0x100) {
        if ((((local_1c < 9) || (10 < local_1c)) && (local_1c != 0xd)) && (local_1c < 0x20)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else if ((((local_1c < 0x100) || (0xd7ff < local_1c)) &&
               ((local_1c < 0xe000 || (0xfffd < local_1c)))) &&
              ((local_1c < 0x10000 || (0x10ffff < local_1c)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_100143bf8(param_1,0x3f,0);
        *(undefined4 *)(param_1 + 0x22) = 7;
      }
      else {
        if (**(char **)(param_1[7] + 0x20) == '\n') {
          *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
          *(undefined4 *)(param_1[7] + 0x38) = 1;
        }
        else {
          *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
        }
        *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_38;
        if (**(char **)(param_1[7] + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        local_18 = _xmlCurrentChar(param_1,&local_3c);
        local_30 = (*(code *)_xmlMallocAtomic)((long)local_24);
        if (local_30 != 0) {
          while( true ) {
            if (local_18 < 0x100) {
              if ((((local_18 < 9) || (10 < local_18)) && (local_18 != 0xd)) && (local_18 < 0x20)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            else if ((((local_18 < 0x100) || (0xd7ff < local_18)) &&
                     ((local_18 < 0xe000 || (0xfffd < local_18)))) &&
                    ((local_18 < 0x10000 || (0x10ffff < local_18)))) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) || (((local_20 == 0x5d && (local_1c == 0x5d)) && (local_18 == 0x3e))))
            break;
            lVar2 = local_30;
            if (local_24 <= local_28 + 5) {
              local_24 = local_24 << 1;
              local_10 = (*(code *)_xmlRealloc)(local_30,(long)local_24);
              lVar2 = local_10;
              if (local_10 == 0) {
                (*(code *)_xmlFree)(local_30);
                _xmlErrMemory(param_1,0);
                return;
              }
            }
            local_30 = lVar2;
            if (local_34 == 1) {
              *(char *)(local_28 + local_30) = (char)local_20;
              local_28 = local_28 + 1;
            }
            else {
              iVar3 = _xmlCopyCharMultiByte(local_28 + local_30,local_20);
              local_28 = local_28 + iVar3;
            }
            local_20 = local_1c;
            local_34 = local_38;
            local_1c = local_18;
            local_38 = local_3c;
            local_14 = local_14 + 1;
            if (0x32 < local_14) {
              if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
                 (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
                FUN_100146394(param_1);
              }
              local_14 = 0;
            }
            if (**(char **)(param_1[7] + 0x20) == '\n') {
              *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
              *(undefined4 *)(param_1[7] + 0x38) = 1;
            }
            else {
              *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
            }
            *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_3c;
            if (**(char **)(param_1[7] + 0x20) == '%') {
              _xmlParserHandlePEReference(param_1);
            }
            local_18 = _xmlCurrentChar(param_1,&local_3c);
          }
          *(undefined1 *)(local_28 + local_30) = 0;
          *(undefined4 *)(param_1 + 0x22) = 7;
          if (local_18 != 0x3e) {
            FUN_1001447b6(param_1,0x3f,"CData section not finished\n%.50s\n",local_30);
            (*(code *)_xmlFree)(local_30);
            return;
          }
          if (**(char **)(param_1[7] + 0x20) == '\n') {
            *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
            *(undefined4 *)(param_1[7] + 0x38) = 1;
          }
          else {
            *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
          }
          *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_3c;
          if (**(char **)(param_1[7] + 0x20) == '%') {
            _xmlParserHandlePEReference(param_1);
          }
          if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) {
            if (*(long *)(*param_1 + 200) == 0) {
              if (*(long *)(*param_1 + 0x88) != 0) {
                (**(code **)(*param_1 + 0x88))(param_1[1],local_30,local_28);
              }
            }
            else {
              (**(code **)(*param_1 + 200))(param_1[1],local_30,local_28);
            }
          }
          (*(code *)_xmlFree)(local_30);
          return;
        }
        _xmlErrMemory(param_1,0);
      }
    }
  }
  return;
}

