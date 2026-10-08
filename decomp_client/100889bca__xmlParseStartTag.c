
long _xmlParseStartTag(long *param_1)

{
  int iVar1;
  long local_50;
  long local_48;
  xmlChar *local_40;
  long local_38;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  uint local_14;
  long local_10;
  
  local_38 = param_1[0x3a];
  local_2c = 0;
  local_28 = (int)param_1[0x3b];
  if (**(char **)(param_1[7] + 0x20) == '<') {
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
    param_1[0x27] = param_1[0x27] + 1;
    if (**(char **)(param_1[7] + 0x20) == '\0') {
      _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
    }
    local_48 = _xmlParseName(param_1);
    if (local_48 != 0) {
      _xmlSkipBlankChars(param_1);
      if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      do {
        if (((**(char **)(param_1[7] + 0x20) == '>') ||
            ((**(char **)(param_1[7] + 0x20) == '/' &&
             (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>')))) ||
           (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
            ((**(char **)(param_1[7] + 0x20) != '\r' && (**(byte **)(param_1[7] + 0x20) < 0x20))))))
        goto LAB_10088a1cd;
        local_20 = *(long *)(param_1[7] + 0x20);
        local_14 = (uint)*(undefined8 *)(param_1[7] + 0x40);
        local_40 = (xmlChar *)_xmlParseAttribute(param_1,&local_50);
        if ((local_40 == (xmlChar *)0x0) || (local_50 == 0)) {
          if (local_50 != 0) {
            (*(code *)_xmlFree)(local_50);
          }
        }
        else {
          for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 2) {
            iVar1 = _xmlStrEqual(*(xmlChar **)((long)local_24 * 8 + local_38),local_40);
            if (iVar1 != 0) {
              FUN_100877370(param_1,0,local_40);
              (*(code *)_xmlFree)(local_50);
              goto LAB_100889f40;
            }
          }
          if (local_38 == 0) {
            local_28 = 0x16;
            local_38 = (*(code *)_xmlMalloc)(0xb0);
            if (local_38 == 0) {
              _xmlErrMemory(param_1,0);
              if (local_50 != 0) {
                (*(code *)_xmlFree)(local_50);
              }
              goto LAB_100889f40;
            }
            param_1[0x3a] = local_38;
            *(int *)(param_1 + 0x3b) = local_28;
          }
          else if (local_28 < local_2c + 4) {
            local_28 = local_28 << 1;
            local_10 = (*(code *)_xmlRealloc)(local_38,(long)local_28 * 8);
            if (local_10 == 0) {
              _xmlErrMemory(param_1,0);
              if (local_50 != 0) {
                (*(code *)_xmlFree)(local_50);
              }
              goto LAB_100889f40;
            }
            param_1[0x3a] = local_10;
            *(int *)(param_1 + 0x3b) = local_28;
            local_38 = local_10;
          }
          *(xmlChar **)((long)local_2c * 8 + local_38) = local_40;
          *(long *)((long)(local_2c + 1) * 8 + local_38) = local_50;
          local_2c = local_2c + 2;
          *(undefined8 *)((long)local_2c * 8 + local_38) = 0;
          *(undefined8 *)((long)local_2c * 8 + local_38 + 8) = 0;
        }
LAB_100889f40:
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100879cbc(param_1);
        }
        if ((**(char **)(param_1[7] + 0x20) == '>') ||
           ((**(char **)(param_1[7] + 0x20) == '/' &&
            (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>')))) goto LAB_10088a1cd;
        if ((**(char **)(param_1[7] + 0x20) != ' ') &&
           (((**(byte **)(param_1[7] + 0x20) < 9 || (10 < **(byte **)(param_1[7] + 0x20))) &&
            (**(char **)(param_1[7] + 0x20) != '\r')))) {
          FUN_100877b3f(param_1,0x41,"attributes construct error\n");
        }
        _xmlSkipBlankChars(param_1);
        if ((((ulong)local_14 == *(ulong *)(param_1[7] + 0x40)) &&
            (*(long *)(param_1[7] + 0x20) == local_20)) &&
           ((local_40 == (xmlChar *)0x0 && (local_50 == 0)))) {
          FUN_100877b3f(param_1,1,"xmlParseStartTag: problem parsing attributes\n");
LAB_10088a1cd:
          if (((*param_1 != 0) && (*(long *)(*param_1 + 0x70) != 0)) &&
             (*(int *)((long)param_1 + 0x14c) == 0)) {
            if (local_2c < 1) {
              (**(code **)(*param_1 + 0x70))(param_1[1],local_48,0);
            }
            else {
              (**(code **)(*param_1 + 0x70))(param_1[1],local_48,local_38);
            }
          }
          if (local_38 != 0) {
            for (local_24 = 1; local_24 < local_2c; local_24 = local_24 + 2) {
              if (*(long *)((long)local_24 * 8 + local_38) != 0) {
                (*(code *)_xmlFree)(*(undefined8 *)((long)local_24 * 8 + local_38));
              }
            }
          }
          return local_48;
        }
        if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
            (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
          FUN_100879c6f(param_1);
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100879cbc(param_1);
        }
      } while( true );
    }
    FUN_100877b3f(param_1,0x44,"xmlParseStartTag: invalid element name\n");
  }
  return 0;
}

