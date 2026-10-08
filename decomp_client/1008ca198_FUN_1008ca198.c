
undefined4 FUN_1008ca198(long *param_1)

{
  int iVar1;
  undefined4 local_64;
  long local_50;
  xmlChar *local_48;
  xmlChar *local_40;
  long local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  long local_18;
  long local_10;
  
  local_38 = param_1[0x3a];
  local_2c = 0;
  local_28 = (int)param_1[0x3b];
  local_24 = 0;
  if ((param_1 == (long *)0x0) || (param_1[7] == 0)) {
    FUN_1008c3ec0(param_1,1,"htmlParseStartTag: context error\n",0,0);
    local_64 = 0xffffffff;
  }
  else if (**(char **)(param_1[7] + 0x20) == '<') {
    _xmlNextChar(param_1);
    if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
       (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
      _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
    }
    local_48 = (xmlChar *)FUN_1008c621c(param_1);
    if (local_48 == (xmlChar *)0x0) {
      FUN_1008c3ec0(param_1,0x44,"htmlParseStartTag: invalid element name\n",0,0);
      while (((((8 < **(byte **)(param_1[7] + 0x20) && (**(byte **)(param_1[7] + 0x20) < 0xb)) ||
               (**(char **)(param_1[7] + 0x20) == '\r')) || (0x1f < **(byte **)(param_1[7] + 0x20)))
             && (**(char **)(param_1[7] + 0x20) != '>'))) {
        _xmlNextChar(param_1);
      }
      local_64 = 0xffffffff;
    }
    else {
      iVar1 = _xmlStrEqual(local_48,(xmlChar *)"meta");
      if (iVar1 != 0) {
        local_24 = 1;
      }
      FUN_1008c4d9d(param_1,local_48);
      FUN_1008c500c(param_1,local_48);
      if (((int)param_1[0x25] < 1) || (iVar1 = _xmlStrEqual(local_48,(xmlChar *)"html"), iVar1 == 0)
         ) {
        if (((int)param_1[0x25] == 1) ||
           (iVar1 = _xmlStrEqual(local_48,(xmlChar *)"head"), iVar1 == 0)) {
          iVar1 = _xmlStrEqual(local_48,(xmlChar *)"body");
          if (iVar1 != 0) {
            for (local_1c = 0; local_1c < (int)param_1[0x25]; local_1c = local_1c + 1) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(param_1[0x26] + (long)local_1c * 8),
                                   (xmlChar *)"body");
              if (iVar1 != 0) {
                FUN_1008c3ec0(param_1,800,"htmlParseStartTag: misplaced <body> tag\n",local_48,0);
                while (((((8 < **(byte **)(param_1[7] + 0x20) &&
                          (**(byte **)(param_1[7] + 0x20) < 0xb)) ||
                         (**(char **)(param_1[7] + 0x20) == '\r')) ||
                        (0x1f < **(byte **)(param_1[7] + 0x20))) &&
                       (**(char **)(param_1[7] + 0x20) != '>'))) {
                  _xmlNextChar(param_1);
                }
                return 0;
              }
            }
          }
          FUN_1008c47ba(param_1);
          do {
            if ((((**(byte **)(param_1[7] + 0x20) < 9) || (10 < **(byte **)(param_1[7] + 0x20))) &&
                ((**(char **)(param_1[7] + 0x20) != '\r' && (**(byte **)(param_1[7] + 0x20) < 0x20))
                )) || ((**(char **)(param_1[7] + 0x20) == '>' ||
                       ((**(char **)(param_1[7] + 0x20) == '/' &&
                        (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>'))))))
            goto LAB_1008ca950;
            local_18 = param_1[0x27];
            if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
               (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
              _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
            }
            local_40 = (xmlChar *)FUN_1008c9d54(param_1,&local_50);
            if (local_40 == (xmlChar *)0x0) {
              if (local_50 != 0) {
                (*(code *)_xmlFree)(local_50);
              }
              while ((((((8 < **(byte **)(param_1[7] + 0x20) &&
                         (**(byte **)(param_1[7] + 0x20) < 0xb)) ||
                        (**(char **)(param_1[7] + 0x20) == '\r')) ||
                       (0x1f < **(byte **)(param_1[7] + 0x20))) &&
                      (((**(char **)(param_1[7] + 0x20) != ' ' &&
                        ((**(byte **)(param_1[7] + 0x20) < 9 ||
                         (10 < **(byte **)(param_1[7] + 0x20))))) &&
                       (**(char **)(param_1[7] + 0x20) != '\r')))) &&
                     ((**(char **)(param_1[7] + 0x20) != '>' &&
                      ((**(char **)(param_1[7] + 0x20) != '/' ||
                       (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '>'))))))) {
                _xmlNextChar(param_1);
              }
            }
            else {
              for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 2) {
                iVar1 = _xmlStrEqual(*(xmlChar **)((long)local_20 * 8 + local_38),local_40);
                if (iVar1 != 0) {
                  FUN_1008c3ec0(param_1,0x2a,"Attribute %s redefined\n",local_40,0);
                  if (local_50 != 0) {
                    (*(code *)_xmlFree)(local_50);
                  }
                  goto LAB_1008ca910;
                }
              }
              if (local_38 == 0) {
                local_28 = 0x16;
                local_38 = (*(code *)_xmlMalloc)(0xb0);
                if (local_38 == 0) {
                  FUN_1008c3d3c(param_1,0);
                  if (local_50 != 0) {
                    (*(code *)_xmlFree)(local_50);
                  }
                  goto LAB_1008ca910;
                }
                param_1[0x3a] = local_38;
                *(int *)(param_1 + 0x3b) = local_28;
              }
              else if (local_28 < local_2c + 4) {
                local_28 = local_28 << 1;
                local_10 = (*(code *)_xmlRealloc)(local_38,(long)local_28 * 8);
                if (local_10 == 0) {
                  FUN_1008c3d3c(param_1,0);
                  if (local_50 != 0) {
                    (*(code *)_xmlFree)(local_50);
                  }
                  goto LAB_1008ca910;
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
LAB_1008ca910:
            FUN_1008c47ba(param_1);
          } while (param_1[0x27] != local_18);
          FUN_1008c3ec0(param_1,1,"htmlParseStartTag: problem parsing attributes\n",0,0);
LAB_1008ca950:
          if (local_24 != 0) {
            FUN_1008ca087(param_1,local_38);
          }
          FUN_1008c40a7(param_1,local_48);
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x70) != 0)) {
            if (local_2c == 0) {
              (**(code **)(*param_1 + 0x70))(param_1[1],local_48,0);
            }
            else {
              (**(code **)(*param_1 + 0x70))(param_1[1],local_48,local_38);
            }
          }
          if (local_38 != 0) {
            for (local_20 = 1; local_20 < local_2c; local_20 = local_20 + 2) {
              if (*(long *)((long)local_20 * 8 + local_38) != 0) {
                (*(code *)_xmlFree)(*(undefined8 *)((long)local_20 * 8 + local_38));
              }
            }
          }
          local_64 = 0;
        }
        else {
          FUN_1008c3ec0(param_1,800,"htmlParseStartTag: misplaced <head> tag\n",local_48,0);
          local_64 = 0;
        }
      }
      else {
        FUN_1008c3ec0(param_1,800,"htmlParseStartTag: misplaced <html> tag\n",local_48,0);
        local_64 = 0;
      }
    }
  }
  else {
    local_64 = 0xffffffff;
  }
  return local_64;
}

