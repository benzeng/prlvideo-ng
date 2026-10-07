
void FUN_10019572e(long *param_1)

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
  undefined4 local_14;
  long local_10;
  
  local_30 = 0;
  local_24 = 100;
  if ((((*(int *)((long)param_1 + 0x114) == 0) && (**(char **)(param_1[7] + 0x20) == '<')) &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
     ((*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '-' &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == '-')))) {
    local_14 = (undefined4)param_1[0x22];
    *(undefined4 *)(param_1 + 0x22) = 5;
    if ((500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) &&
       (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
      _xmlParserInputShrink(param_1[7]);
    }
    param_1[0x27] = param_1[0x27] + 4;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 4;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 4;
    local_30 = (*(code *)_xmlMallocAtomic)((long)local_24);
    if (local_30 != 0) {
      local_20 = FUN_100190973(param_1,&local_34);
      if (**(char **)(param_1[7] + 0x20) == '\n') {
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
      }
      else {
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      *(undefined4 *)((long)param_1 + 0x114) = 0;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_34;
      param_1[0x27] = param_1[0x27] + 1;
      local_1c = FUN_100190973(param_1,&local_38);
      if (**(char **)(param_1[7] + 0x20) == '\n') {
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
      }
      else {
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      *(undefined4 *)((long)param_1 + 0x114) = 0;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_38;
      param_1[0x27] = param_1[0x27] + 1;
      local_18 = FUN_100190973(param_1,&local_3c);
      local_28 = 0;
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
        if ((!bVar1) || (((local_18 == 0x3e && (local_1c == 0x2d)) && (local_20 == 0x2d)))) break;
        lVar2 = local_30;
        if (local_24 <= local_28 + 5) {
          local_24 = local_24 << 1;
          local_10 = (*(code *)_xmlRealloc)(local_30,(long)local_24);
          lVar2 = local_10;
          if (local_10 == 0) {
            (*(code *)_xmlFree)(local_30);
            FUN_100190414(param_1,"growing buffer failed\n");
            *(undefined4 *)(param_1 + 0x22) = local_14;
            return;
          }
        }
        local_30 = lVar2;
        if (local_34 == 1) {
          *(char *)(local_28 + local_30) = (char)local_20;
          local_28 = local_28 + 1;
        }
        else {
          iVar3 = _xmlCopyChar(local_34,local_28 + local_30,local_20);
          local_28 = local_28 + iVar3;
        }
        local_20 = local_1c;
        local_34 = local_38;
        local_1c = local_18;
        local_38 = local_3c;
        if (**(char **)(param_1[7] + 0x20) == '\n') {
          *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
          *(undefined4 *)(param_1[7] + 0x38) = 1;
        }
        else {
          *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
        }
        *(undefined4 *)((long)param_1 + 0x114) = 0;
        *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_3c;
        param_1[0x27] = param_1[0x27] + 1;
        local_18 = FUN_100190973(param_1,&local_3c);
        if (local_18 == 0) {
          if ((500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) &&
             (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
            _xmlParserInputShrink(param_1[7]);
          }
          if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
             (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
            _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
          }
          local_18 = FUN_100190973(param_1,&local_3c);
        }
      }
      *(undefined1 *)(local_28 + local_30) = 0;
      if (local_18 < 0x100) {
        if ((((local_18 < 9) || (10 < local_18)) && (local_18 != 0xd)) && (local_18 < 0x20)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else if (((local_18 < 0x100) || (0xd7ff < local_18)) &&
              (((local_18 < 0xe000 || (0xfffd < local_18)) &&
               ((local_18 < 0x10000 || (0x10ffff < local_18)))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_100190598(param_1,0x2d,"Comment not terminated \n<!--%.50s\n",local_30,0);
        (*(code *)_xmlFree)(local_30);
      }
      else {
        _xmlNextChar(param_1);
        if (((*param_1 != 0) && (*(long *)(*param_1 + 0xa0) != 0)) &&
           (*(int *)((long)param_1 + 0x14c) == 0)) {
          (**(code **)(*param_1 + 0xa0))(param_1[1],local_30);
        }
        (*(code *)_xmlFree)(local_30);
      }
      *(undefined4 *)(param_1 + 0x22) = local_14;
      return;
    }
    FUN_100190414(param_1,"buffer allocation failed\n");
    *(undefined4 *)(param_1 + 0x22) = local_14;
  }
  return;
}

