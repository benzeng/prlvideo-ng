
void _xmlParseComment(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long local_38;
  int local_2c;
  int local_28;
  byte *local_20;
  int local_14;
  
  local_38 = 0;
  local_2c = 100;
  local_28 = 0;
  if ((((**(char **)(param_1[7] + 0x20) == '<') &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
      (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '-')) &&
     (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == '-')) {
    uVar1 = (undefined4)param_1[0x22];
    *(undefined4 *)(param_1 + 0x22) = 5;
    param_1[0x27] = param_1[0x27] + 4;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 4;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 4;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if ((**(char **)(param_1[7] + 0x20) == '\0') &&
       (iVar2 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar2 < 1)) {
      _xmlPopInput(param_1);
    }
    if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
        (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
       (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
      FUN_100146347(param_1);
    }
    if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
       (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
      FUN_100146394(param_1);
    }
    local_20 = *(byte **)(param_1[7] + 0x20);
    do {
      if (*local_20 == 10) {
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
        while (local_20 = local_20 + 1, *local_20 == 10) {
          *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
          *(undefined4 *)(param_1[7] + 0x38) = 1;
        }
      }
      while( true ) {
        while( true ) {
          local_14 = *(int *)(param_1[7] + 0x38);
          for (; ((0x2d < *local_20 && (-1 < (char)*local_20)) ||
                 (((0x1f < *local_20 && (*local_20 < 0x2d)) || (*local_20 == 9))));
              local_20 = local_20 + 1) {
            local_14 = local_14 + 1;
          }
          *(int *)(param_1[7] + 0x38) = local_14;
          if (*local_20 != 10) break;
          *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
          *(undefined4 *)(param_1[7] + 0x38) = 1;
          while (local_20 = local_20 + 1, *local_20 == 10) {
            *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
            *(undefined4 *)(param_1[7] + 0x38) = 1;
          }
        }
        iVar2 = (int)local_20 - (int)*(undefined8 *)(param_1[7] + 0x20);
        if (((0 < iVar2) && (*param_1 != 0)) && (*(long *)(*param_1 + 0xa0) != 0)) {
          if (local_38 == 0) {
            if ((*local_20 == 0x2d) && (local_20[1] == 0x2d)) {
              local_2c = iVar2 + 1;
            }
            else {
              local_2c = iVar2 + 100;
            }
            lVar3 = (*(code *)_xmlMallocAtomic)((long)local_2c);
            if (lVar3 == 0) {
              _xmlErrMemory(param_1,0);
              *(undefined4 *)(param_1 + 0x22) = uVar1;
              return;
            }
            local_28 = 0;
          }
          else {
            lVar3 = local_38;
            if (local_2c <= iVar2 + local_28 + 1) {
              local_2c = iVar2 + local_28 + local_2c + 100;
              lVar3 = (*(code *)_xmlRealloc)(local_38,(long)local_2c);
              if (lVar3 == 0) {
                (*(code *)_xmlFree)(local_38);
                _xmlErrMemory(param_1,0);
                *(undefined4 *)(param_1 + 0x22) = uVar1;
                return;
              }
            }
          }
          local_38 = lVar3;
          puVar4 = *(undefined1 **)(param_1[7] + 0x20);
          puVar5 = (undefined1 *)(local_28 + local_38);
          for (lVar3 = (long)iVar2; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_28 = local_28 + iVar2;
          *(undefined1 *)(local_28 + local_38) = 0;
        }
        *(byte **)(param_1[7] + 0x20) = local_20;
        if (((*local_20 == 10) && (*local_20 == 0xd)) && (local_20[1] == 10)) break;
        if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
            (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
          FUN_100146347(param_1);
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100146394(param_1);
        }
        local_20 = *(byte **)(param_1[7] + 0x20);
        if (*local_20 != 0x2d) goto LAB_10014d614;
        if (local_20[1] == 0x2d) {
          if (local_20[2] == 0x3e) {
            param_1[0x27] = param_1[0x27] + 3;
            *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 3;
            *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 3;
            if (**(char **)(param_1[7] + 0x20) == '%') {
              _xmlParserHandlePEReference(param_1);
            }
            if ((**(char **)(param_1[7] + 0x20) == '\0') &&
               (iVar2 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar2 < 1)) {
              _xmlPopInput(param_1);
            }
            if (((*param_1 != 0) && (*(long *)(*param_1 + 0xa0) != 0)) &&
               (*(int *)((long)param_1 + 0x14c) == 0)) {
              if (local_38 == 0) {
                (**(code **)(*param_1 + 0xa0))(param_1[1],"");
              }
              else {
                (**(code **)(*param_1 + 0xa0))(param_1[1],local_38);
              }
            }
            if (local_38 != 0) {
              (*(code *)_xmlFree)(local_38);
            }
            *(undefined4 *)(param_1 + 0x22) = uVar1;
            return;
          }
          if (local_38 == 0) {
            FUN_1001447b6(param_1,0x2d,"Comment not terminated \n",0);
          }
          else {
            FUN_1001447b6(param_1,0x2d,"Comment not terminated \n<!--%.50s\n",local_38);
          }
          local_20 = local_20 + 1;
          *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
        }
        local_20 = local_20 + 1;
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      *(byte **)(param_1[7] + 0x20) = local_20 + 1;
      local_20 = local_20 + 2;
      *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
      *(undefined4 *)(param_1[7] + 0x38) = 1;
LAB_10014d614:
    } while (((0x1f < *local_20) && (-1 < (char)*local_20)) || (*local_20 == 9));
    FUN_10014ca87(param_1,local_38,local_28,local_2c);
    *(undefined4 *)(param_1 + 0x22) = uVar1;
  }
  return;
}

