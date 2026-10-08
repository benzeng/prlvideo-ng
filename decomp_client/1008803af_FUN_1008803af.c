
void FUN_1008803af(long *param_1,long param_2,int param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int local_50;
  int local_4c;
  long local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  int local_14;
  long local_10;
  
  local_20 = param_1[7];
  local_14 = 0;
  local_50 = param_4;
  local_4c = param_3;
  local_48 = param_2;
  if (param_2 == 0) {
    local_4c = 0;
    local_50 = 100;
    local_48 = (*(code *)_xmlMallocAtomic)(100);
    if (local_48 == 0) {
      _xmlErrMemory(param_1,0);
      return;
    }
  }
  local_2c = _xmlCurrentChar(param_1,&local_30);
  if (local_2c != 0) {
    if (**(char **)(param_1[7] + 0x20) == '\n') {
      *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
      *(undefined4 *)(param_1[7] + 0x38) = 1;
    }
    else {
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    }
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_30;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    local_28 = _xmlCurrentChar(param_1,&local_34);
    if (local_28 != 0) {
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
      local_24 = _xmlCurrentChar(param_1,&local_38);
      if (local_24 != 0) {
        while( true ) {
          if (local_24 < 0x100) {
            if ((((local_24 < 9) || (10 < local_24)) && (local_24 != 0xd)) && (local_24 < 0x20)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          else if ((((local_24 < 0x100) || (0xd7ff < local_24)) &&
                   ((local_24 < 0xe000 || (0xfffd < local_24)))) &&
                  ((local_24 < 0x10000 || (0x10ffff < local_24)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || (((local_24 == 0x3e && (local_28 == 0x2d)) && (local_2c == 0x2d)))) break;
          if ((local_28 == 0x2d) && (local_2c == 0x2d)) {
            FUN_100877520(param_1,0x50,0);
          }
          lVar2 = local_48;
          if (local_50 <= local_4c + 5) {
            local_50 = local_50 << 1;
            local_10 = (*(code *)_xmlRealloc)(local_48,(long)local_50);
            lVar2 = local_10;
            if (local_10 == 0) {
              (*(code *)_xmlFree)(local_48);
              _xmlErrMemory(param_1,0);
              return;
            }
          }
          local_48 = lVar2;
          if (local_30 == 1) {
            *(char *)(local_4c + local_48) = (char)local_2c;
            local_4c = local_4c + 1;
          }
          else {
            iVar3 = _xmlCopyCharMultiByte(local_4c + local_48,local_2c);
            local_4c = local_4c + iVar3;
          }
          local_2c = local_28;
          local_30 = local_34;
          local_28 = local_24;
          local_34 = local_38;
          local_14 = local_14 + 1;
          if (0x32 < local_14) {
            if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
               (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
              FUN_100879cbc(param_1);
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
          *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_38;
          if (**(char **)(param_1[7] + 0x20) == '%') {
            _xmlParserHandlePEReference(param_1);
          }
          local_24 = _xmlCurrentChar(param_1,&local_38);
          if (local_24 == 0) {
            if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
                (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
               (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
              FUN_100879c6f(param_1);
            }
            if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
               (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
              FUN_100879cbc(param_1);
            }
            local_24 = _xmlCurrentChar(param_1,&local_38);
          }
        }
        *(undefined1 *)(local_4c + local_48) = 0;
        if (local_24 < 0x100) {
          if ((((local_24 < 9) || (10 < local_24)) && (local_24 != 0xd)) && (local_24 < 0x20)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else if (((local_24 < 0x100) || (0xd7ff < local_24)) &&
                (((local_24 < 0xe000 || (0xfffd < local_24)) &&
                 ((local_24 < 0x10000 || (0x10ffff < local_24)))))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          FUN_1008780de(param_1,0x2d,"Comment not terminated \n<!--%.50s\n",local_48);
          (*(code *)_xmlFree)(local_48);
          return;
        }
        if (param_1[7] != local_20) {
          FUN_100877b3f(param_1,0x5a,"Comment doesn\'t start and stop in the same entity\n");
        }
        _xmlNextChar(param_1);
        if (((*param_1 != 0) && (*(long *)(*param_1 + 0xa0) != 0)) &&
           (*(int *)((long)param_1 + 0x14c) == 0)) {
          (**(code **)(*param_1 + 0xa0))(param_1[1],local_48);
        }
        (*(code *)_xmlFree)(local_48);
        return;
      }
    }
  }
  FUN_1008780de(param_1,0x2d,"Comment not terminated\n",0);
  (*(code *)_xmlFree)(local_48);
  return;
}

