
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int FUN_10015dd25(long *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  xmlGenericErrorFunc pxVar3;
  uint uVar4;
  int iVar5;
  xmlSAXLocator *pxVar6;
  xmlChar *pxVar7;
  xmlGenericErrorFunc *ppxVar8;
  void **ppvVar9;
  char local_148 [160];
  undefined8 local_a8;
  undefined8 local_a0;
  uchar local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  ulong local_90;
  ulong local_88;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  char local_6e;
  char local_6d;
  int local_6c;
  int local_68;
  xmlCharEncoding local_64;
  long local_60;
  int local_54;
  long local_50;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  long local_28;
  char local_1d;
  int local_1c;
  
  local_78 = 0;
  if (param_1[7] == 0) {
    return 0;
  }
  if ((param_1[7] != 0) && (0x1000 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) {
    FUN_100146347(param_1);
    param_1[0x28] = 0;
  }
  FUN_10015d5cf(param_1,&local_88,&local_90);
switchD_10015e085_default:
  do {
    if (((int)param_1[0x11] != 0) && (*(int *)((long)param_1 + 0x14c) == 1)) {
      return 0;
    }
    while ((**(char **)(param_1[7] + 0x20) == '\0' && (1 < (int)param_1[8]))) {
      _xmlPopInput(param_1);
    }
    if (param_1[7] == 0) {
      return local_78;
    }
    if (*(long *)param_1[7] == 0) {
      local_74 = *(int *)(param_1[7] + 0x30) -
                 ((int)*(undefined8 *)(param_1[7] + 0x20) - (int)*(undefined8 *)(param_1[7] + 0x18))
      ;
    }
    else {
      if ((*(long *)(*(long *)param_1[7] + 0x28) != 0) &&
         (*(int *)(*(long *)(*(long *)param_1[7] + 0x28) + 8) != 0)) {
        local_6c = (int)*(undefined8 *)(param_1[7] + 0x18) -
                   (int)**(undefined8 **)(*(long *)param_1[7] + 0x20);
        local_68 = (int)*(undefined8 *)(param_1[7] + 0x20) - (int)*(undefined8 *)(param_1[7] + 0x18)
        ;
        _xmlParserInputBufferPush(*(xmlParserInputBufferPtr *)param_1[7],0,"");
        *(long *)(param_1[7] + 0x18) = **(long **)(*(long *)param_1[7] + 0x20) + (long)local_6c;
        *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x18) + (long)local_68;
        *(ulong *)(param_1[7] + 0x28) =
             **(long **)(*(long *)param_1[7] + 0x20) +
             (ulong)*(uint *)(*(long *)(*(long *)param_1[7] + 0x20) + 8);
      }
      local_74 = *(int *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) -
                 ((int)*(undefined8 *)(param_1[7] + 0x20) - (int)*(undefined8 *)(param_1[7] + 0x18))
      ;
    }
    if (local_74 < 1) {
      return local_78;
    }
    switch((int)param_1[0x22]) {
    case 0:
      if ((int)param_1[0x33] == 0) {
        if (local_74 < 4) {
          return local_78;
        }
        local_98 = **(uchar **)(param_1[7] + 0x20);
        local_97 = *(undefined1 *)(*(long *)(param_1[7] + 0x20) + 1);
        local_96 = *(undefined1 *)(*(long *)(param_1[7] + 0x20) + 2);
        local_95 = *(undefined1 *)(*(long *)(param_1[7] + 0x20) + 3);
        local_64 = _xmlDetectCharEncoding(&local_98,4);
        _xmlSwitchEncoding(param_1,local_64);
      }
      else {
        if (local_74 < 2) {
          return local_78;
        }
        local_6e = **(char **)(param_1[7] + 0x20);
        local_6d = *(char *)(*(long *)(param_1[7] + 0x20) + 1);
        if (local_6e == '\0') {
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x58) != 0)) {
            pcVar2 = *(code **)(*param_1 + 0x58);
            pxVar6 = ___xmlDefaultSAXLocator();
            (*pcVar2)(param_1[1],pxVar6);
          }
          FUN_100143bf8(param_1,4,0);
          *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
          if (*param_1 == 0) {
            return local_78;
          }
          if (*(long *)(*param_1 + 0x68) == 0) {
            return local_78;
          }
          (**(code **)(*param_1 + 0x68))(param_1[1]);
          return local_78;
        }
        if ((local_6e == '<') && (local_6d == '?')) {
          if (local_74 < 5) {
            return local_78;
          }
          if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3f,0x3e,0), iVar5 < 0)) {
            return local_78;
          }
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x58) != 0)) {
            pcVar2 = *(code **)(*param_1 + 0x58);
            pxVar6 = ___xmlDefaultSAXLocator();
            (*pcVar2)(param_1[1],pxVar6);
          }
          if ((((*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'x') &&
               (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'm')) &&
              (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'l')) &&
             (((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == ' ' ||
               ((8 < *(byte *)(*(long *)(param_1[7] + 0x20) + 5) &&
                (*(byte *)(*(long *)(param_1[7] + 0x20) + 5) < 0xb)))) ||
              (*(char *)(*(long *)(param_1[7] + 0x20) + 5) == '\r')))) {
            local_78 = local_78 + 5;
            _xmlParseXMLDecl(param_1);
            if ((int)param_1[0x11] == 0x20) {
              *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
              return 0;
            }
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1[7] + 0x60);
            if ((param_1[5] == 0) && (*(long *)(param_1[7] + 0x50) != 0)) {
              pxVar7 = _xmlStrdup(*(xmlChar **)(param_1[7] + 0x50));
              param_1[5] = (long)pxVar7;
            }
            if (((*param_1 != 0) && (*(long *)(*param_1 + 0x60) != 0)) &&
               (*(int *)((long)param_1 + 0x14c) == 0)) {
              (**(code **)(*param_1 + 0x60))(param_1[1]);
            }
            *(undefined4 *)(param_1 + 0x22) = 1;
          }
          else {
            pxVar7 = _xmlCharStrdup("1.0");
            param_1[4] = (long)pxVar7;
            if (((*param_1 != 0) && (*(long *)(*param_1 + 0x60) != 0)) &&
               (*(int *)((long)param_1 + 0x14c) == 0)) {
              (**(code **)(*param_1 + 0x60))(param_1[1]);
            }
            *(undefined4 *)(param_1 + 0x22) = 1;
          }
        }
        else {
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x58) != 0)) {
            pcVar2 = *(code **)(*param_1 + 0x58);
            pxVar6 = ___xmlDefaultSAXLocator();
            (*pcVar2)(param_1[1],pxVar6);
          }
          pxVar7 = _xmlCharStrdup("1.0");
          param_1[4] = (long)pxVar7;
          if (param_1[4] == 0) {
            _xmlErrMemory(param_1,0);
          }
          else {
            if (((*param_1 != 0) && (*(long *)(*param_1 + 0x60) != 0)) &&
               (*(int *)((long)param_1 + 0x14c) == 0)) {
              (**(code **)(*param_1 + 0x60))(param_1[1]);
            }
            *(undefined4 *)(param_1 + 0x22) = 1;
          }
        }
      }
      break;
    case 1:
      _xmlSkipBlankChars(param_1);
      if (*(long *)param_1[7] == 0) {
        local_74 = *(int *)(param_1[7] + 0x30) -
                   ((int)*(undefined8 *)(param_1[7] + 0x20) -
                   (int)*(undefined8 *)(param_1[7] + 0x18));
      }
      else {
        local_74 = *(int *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) -
                   ((int)*(undefined8 *)(param_1[7] + 0x20) -
                   (int)*(undefined8 *)(param_1[7] + 0x18));
      }
      if (local_74 < 2) {
        return local_78;
      }
      local_6e = **(char **)(param_1[7] + 0x20);
      local_6d = *(char *)(*(long *)(param_1[7] + 0x20) + 1);
      if ((local_6e == '<') && (local_6d == '?')) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3f,0x3e,0), iVar5 < 0)) {
          return local_78;
        }
        _xmlParsePI(param_1);
      }
      else if ((local_6e == '<') &&
              (((local_6d == '!' && (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '-')) &&
               (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == '-')))) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x2d,0x2d,0x3e), iVar5 < 0)) {
          return local_78;
        }
        _xmlParseComment(param_1);
        *(undefined4 *)(param_1 + 0x22) = 1;
      }
      else if (((((local_6e == '<') && (local_6d == '!')) &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'D')) &&
               ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'O' &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'C')))) &&
              ((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == 'T' &&
               (((*(char *)(*(long *)(param_1[7] + 0x20) + 6) == 'Y' &&
                 (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'P')) &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 8) == 'E')))))) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3e,0,0), iVar5 < 0)) {
          return local_78;
        }
        *(undefined4 *)(param_1 + 0x2a) = 1;
        _xmlParseDocTypeDecl(param_1);
        if (**(char **)(param_1[7] + 0x20) == '[') {
          *(undefined4 *)(param_1 + 0x22) = 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x2a) = 2;
          if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
             (*(long *)(*param_1 + 0xd0) != 0)) {
            (**(code **)(*param_1 + 0xd0))(param_1[1],param_1[0x2b],param_1[0x2d],param_1[0x2c]);
          }
          *(undefined4 *)(param_1 + 0x2a) = 0;
          *(undefined4 *)(param_1 + 0x22) = 4;
        }
      }
      else {
        if (((local_6e == '<') && (local_6d == '!')) && (local_74 < 9)) {
          return local_78;
        }
        *(undefined4 *)(param_1 + 0x22) = 6;
        *(undefined4 *)((long)param_1 + 0x1c4) = 1;
        FUN_10015d5cf(param_1,&local_88,&local_90);
      }
      break;
    case 2:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == PI\n");
      *(undefined4 *)(param_1 + 0x22) = 7;
      break;
    case 3:
      local_1d = '\0';
      local_30 = (int)*(undefined8 *)(param_1[7] + 0x20) - (int)*(undefined8 *)(param_1[7] + 0x18);
      if ((int)local_30 < 0) {
        return 0;
      }
      if ((long)(int)local_30 < param_1[0x28]) {
        local_30 = (uint)param_1[0x28];
      }
      local_28 = **(long **)(*(long *)param_1[7] + 0x20);
      do {
        if (*(uint *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) <= local_30) {
          return local_78;
        }
        if (local_1d == '\0') {
          if ((((*(char *)((int)local_30 + local_28) == '<') &&
               (local_1c = 0, local_30 + 4 < *(uint *)(*(long *)(*(long *)param_1[7] + 0x20) + 8)))
              && (*(char *)((int)local_30 + local_28 + 1) == '!')) &&
             ((*(char *)((int)local_30 + local_28 + 2) == '-' &&
              (*(char *)((int)local_30 + local_28 + 3) == '-')))) {
            for (; local_30 + 3 < *(uint *)(*(long *)(*(long *)param_1[7] + 0x20) + 8);
                local_30 = local_30 + 1) {
              if (((*(char *)((int)local_30 + local_28) == '-') &&
                  (*(char *)((int)local_30 + local_28 + 1) == '-')) &&
                 (*(char *)((int)local_30 + local_28 + 2) == '>')) {
                local_1c = 1;
                local_30 = local_30 + 2;
                break;
              }
            }
            if (local_1c == 0) {
              return local_78;
            }
          }
          else if (*(char *)((int)local_30 + local_28) == '\"') {
            local_1d = '\"';
          }
          else if (*(char *)((int)local_30 + local_28) == '\'') {
            local_1d = '\'';
          }
          else if (*(char *)((int)local_30 + local_28) == ']') {
            if (*(uint *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) <= local_30 + 1) {
              return local_78;
            }
            if (*(char *)((int)local_30 + local_28 + 1) == ']') {
              local_30 = local_30 + 1;
            }
            else {
              local_2c = 1;
              while( true ) {
                if (*(uint *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) <= local_30 + local_2c) {
                  return local_78;
                }
                if (*(char *)((int)(local_2c + local_30) + local_28) == '>') {
                  FUN_100155f62(param_1);
                  *(undefined4 *)(param_1 + 0x2a) = 2;
                  if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
                     (*(long *)(*param_1 + 0xd0) != 0)) {
                    (**(code **)(*param_1 + 0xd0))
                              (param_1[1],param_1[0x2b],param_1[0x2d],param_1[0x2c]);
                  }
                  *(undefined4 *)(param_1 + 0x2a) = 0;
                  *(undefined4 *)(param_1 + 0x22) = 4;
                  param_1[0x28] = 0;
                  goto switchD_10015e085_default;
                }
                if ((*(char *)((int)(local_2c + local_30) + local_28) != ' ') &&
                   (((*(byte *)((int)(local_2c + local_30) + local_28) < 9 ||
                     (10 < *(byte *)((int)(local_2c + local_30) + local_28))) &&
                    (*(char *)((int)(local_2c + local_30) + local_28) != '\r')))) break;
                local_2c = local_2c + 1;
              }
            }
          }
        }
        else if (*(char *)((int)local_30 + local_28) == local_1d) {
          local_1d = '\0';
        }
        local_30 = local_30 + 1;
      } while( true );
    case 4:
      _xmlSkipBlankChars(param_1);
      if (*(long *)param_1[7] == 0) {
        local_74 = *(int *)(param_1[7] + 0x30) -
                   ((int)*(undefined8 *)(param_1[7] + 0x20) -
                   (int)*(undefined8 *)(param_1[7] + 0x18));
      }
      else {
        local_74 = *(int *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) -
                   ((int)*(undefined8 *)(param_1[7] + 0x20) -
                   (int)*(undefined8 *)(param_1[7] + 0x18));
      }
      if (local_74 < 2) {
        return local_78;
      }
      local_6e = **(char **)(param_1[7] + 0x20);
      local_6d = *(char *)(*(long *)(param_1[7] + 0x20) + 1);
      if ((local_6e == '<') && (local_6d == '?')) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3f,0x3e,0), iVar5 < 0)) {
          return local_78;
        }
        _xmlParsePI(param_1);
      }
      else if ((local_6e == '<') &&
              (((local_6d == '!' && (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '-')) &&
               (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == '-')))) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x2d,0x2d,0x3e), iVar5 < 0)) {
          return local_78;
        }
        _xmlParseComment(param_1);
        *(undefined4 *)(param_1 + 0x22) = 4;
      }
      else {
        if (((local_6e == '<') && (local_6d == '!')) && (local_74 < 4)) {
          return local_78;
        }
        *(undefined4 *)(param_1 + 0x22) = 6;
        if (*(int *)((long)param_1 + 0x1c4) == 0) {
          *(undefined4 *)((long)param_1 + 0x1c4) = 1;
        }
        FUN_10015d5cf(param_1,&local_88,&local_90);
      }
      break;
    case 5:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == COMMENT\n");
      *(undefined4 *)(param_1 + 0x22) = 7;
      break;
    case 6:
      local_54 = *(int *)((long)param_1 + 0x1fc);
      if ((local_74 < 2) && ((int)param_1[8] == 1)) {
        return local_78;
      }
      local_6e = **(char **)(param_1[7] + 0x20);
      if (local_6e != '<') {
        FUN_100143bf8(param_1,4,0);
        *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
        if (*param_1 == 0) {
          return local_78;
        }
        if (*(long *)(*param_1 + 0x68) == 0) {
          return local_78;
        }
        (**(code **)(*param_1 + 0x68))(param_1[1]);
        return local_78;
      }
      if (param_2 == 0) {
        if (*(int *)((long)param_1 + 0x1c4) == 0) {
          iVar5 = FUN_10015d424(param_1,0x3e,0,0);
          if (iVar5 < 0) {
            return local_78;
          }
        }
        else {
          if (local_90 == 0) {
            return local_78;
          }
          if (local_90 <= *(ulong *)(param_1[7] + 0x20)) {
            return local_78;
          }
        }
      }
      if ((int)param_1[0x2f] == 0) {
        FUN_100146164(param_1,0xffffffff);
      }
      else {
        FUN_100146164(param_1,*(undefined4 *)param_1[0x2e]);
      }
      if ((int)param_1[0x3f] == 0) {
        local_60 = _xmlParseStartTag(param_1);
      }
      else {
        local_60 = FUN_1001582dc(param_1,&local_a0,&local_a8,local_7c);
      }
      if (local_60 == 0) {
        FUN_10014626d(param_1);
        *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
        if (*param_1 == 0) {
          return local_78;
        }
        if (*(long *)(*param_1 + 0x68) == 0) {
          return local_78;
        }
        (**(code **)(*param_1 + 0x68))(param_1[1]);
        return local_78;
      }
      if ((((*(int *)((long)param_1 + 0x9c) != 0) && ((int)param_1[3] != 0)) && (param_1[2] != 0))
         && ((param_1[10] != 0 && (param_1[10] == *(long *)(param_1[2] + 0x18))))) {
        uVar1 = *(uint *)(param_1 + 0x13);
        uVar4 = _xmlValidateRoot((xmlValidCtxtPtr)(param_1 + 0x14),(xmlDocPtr)param_1[2]);
        *(uint *)(param_1 + 0x13) = uVar1 & uVar4;
      }
      if ((**(char **)(param_1[7] + 0x20) == '/') &&
         (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>')) {
        param_1[0x27] = param_1[0x27] + 2;
        *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
        if (**(char **)(param_1[7] + 0x20) == '%') {
          _xmlParserHandlePEReference(param_1);
        }
        if ((**(char **)(param_1[7] + 0x20) == '\0') &&
           (iVar5 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar5 < 1)) {
          _xmlPopInput(param_1);
        }
        if ((int)param_1[0x3f] == 0) {
          if (((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) &&
             (*(int *)((long)param_1 + 0x14c) == 0)) {
            (**(code **)(*param_1 + 0x78))(param_1[1],local_60);
          }
        }
        else {
          if (((*param_1 != 0) && (*(long *)(*param_1 + 0xf0) != 0)) &&
             (*(int *)((long)param_1 + 0x14c) == 0)) {
            (**(code **)(*param_1 + 0xf0))(param_1[1],local_60,local_a0,local_a8);
          }
          if (0 < *(int *)((long)param_1 + 0x1fc) - local_54) {
            FUN_1001455ec(param_1,*(int *)((long)param_1 + 0x1fc) - local_54);
          }
        }
        FUN_10014626d(param_1);
        if ((int)param_1[0x25] == 0) {
          *(undefined4 *)(param_1 + 0x22) = 0xe;
        }
        else {
          *(undefined4 *)(param_1 + 0x22) = 7;
        }
      }
      else {
        if (**(char **)(param_1[7] + 0x20) == '>') {
          _xmlNextChar(param_1);
        }
        else {
          FUN_1001447b6(param_1,0x49,"Couldn\'t find end of Start Tag %s\n",local_60);
          _nodePop(param_1);
          FUN_10014626d(param_1);
        }
        if ((int)param_1[0x3f] == 0) {
          _namePush(param_1,local_60);
        }
        else {
          FUN_100145c39(param_1,local_60,local_a0,local_a8,
                        *(int *)((long)param_1 + 0x1fc) - local_54);
        }
        *(undefined4 *)(param_1 + 0x22) = 7;
      }
      break;
    case 7:
      if ((local_74 < 2) && ((int)param_1[8] == 1)) {
        return local_78;
      }
      local_6e = **(char **)(param_1[7] + 0x20);
      local_6d = *(char *)(*(long *)(param_1[7] + 0x20) + 1);
      local_50 = *(long *)(param_1[7] + 0x20);
      local_48 = (uint)*(undefined8 *)(param_1[7] + 0x40);
      if ((local_6e == '<') && (local_6d == '/')) {
        *(undefined4 *)(param_1 + 0x22) = 9;
        break;
      }
      if ((local_6e == '<') && (local_6d == '?')) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3f,0x3e,0), iVar5 < 0)) {
          return local_78;
        }
        _xmlParsePI(param_1);
      }
      else {
        if ((local_6e == '<') && (local_6d != '!')) {
          *(undefined4 *)(param_1 + 0x22) = 6;
          break;
        }
        if ((((local_6e == '<') && (local_6d == '!')) &&
            (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '-')) &&
           (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == '-')) {
          if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x2d,0x2d,0x3e), iVar5 < 0)) {
            return local_78;
          }
          _xmlParseComment(param_1);
          *(undefined4 *)(param_1 + 0x22) = 7;
        }
        else {
          if ((((local_6e == '<') && (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '!')) &&
              ((*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '[' &&
               ((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'C' &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'D')))))) &&
             ((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == 'A' &&
              (((*(char *)(*(long *)(param_1[7] + 0x20) + 6) == 'T' &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 7) == 'A')) &&
               (*(char *)(*(long *)(param_1[7] + 0x20) + 8) == '[')))))) {
            param_1[0x27] = param_1[0x27] + 9;
            *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 9;
            *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 9;
            if (**(char **)(param_1[7] + 0x20) == '%') {
              _xmlParserHandlePEReference(param_1);
            }
            if ((**(char **)(param_1[7] + 0x20) == '\0') &&
               (iVar5 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar5 < 1)) {
              _xmlPopInput(param_1);
            }
            *(undefined4 *)(param_1 + 0x22) = 8;
            break;
          }
          if (((local_6e == '<') && (local_6d == '!')) && (local_74 < 9)) {
            return local_78;
          }
          if (local_6e == '&') {
            if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3b,0,0), iVar5 < 0)) {
              return local_78;
            }
            _xmlParseReference(param_1);
          }
          else {
            if ((((int)param_1[8] == 1) && (local_74 < 300)) && (param_2 == 0)) {
              if (*(int *)((long)param_1 + 0x1c4) == 0) {
                iVar5 = FUN_10015d424(param_1,0x3c,0,0);
                if (iVar5 < 0) {
                  return local_78;
                }
              }
              else {
                if (local_88 == 0) {
                  return local_78;
                }
                if (local_88 < *(ulong *)(param_1[7] + 0x20)) {
                  return local_78;
                }
              }
            }
            param_1[0x28] = 0;
            _xmlParseCharData(param_1,0);
          }
        }
      }
      while ((**(char **)(param_1[7] + 0x20) == '\0' && (1 < (int)param_1[8]))) {
        _xmlPopInput(param_1);
      }
      if (((ulong)local_48 == *(ulong *)(param_1[7] + 0x40)) &&
         (*(long *)(param_1[7] + 0x20) == local_50)) {
        FUN_100143bf8(param_1,1,"detected an error in element content\n");
        *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
      }
      break;
    case 8:
      local_44 = FUN_10015d424(param_1,0x5d,0x5d,0x3e);
      if (local_44 < 0) {
        if (local_74 < 0x12e) {
          return local_78;
        }
        local_40 = FUN_10015d82d(*(undefined8 *)(param_1[7] + 0x20),300);
        if (-1 < local_40) {
          if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) {
            if (*(long *)(*param_1 + 200) == 0) {
              if (*(long *)(*param_1 + 0x88) != 0) {
                (**(code **)(*param_1 + 0x88))
                          (param_1[1],*(undefined8 *)(param_1[7] + 0x20),local_40);
              }
            }
            else {
              (**(code **)(*param_1 + 200))(param_1[1],*(undefined8 *)(param_1[7] + 0x20),local_40);
            }
          }
          for (local_3c = 0; local_3c < local_40; local_3c = local_3c + 1) {
            if (**(char **)(param_1[7] + 0x20) == '\n') {
              *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
              *(undefined4 *)(param_1[7] + 0x38) = 1;
            }
            else {
              *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
            }
            param_1[0x27] = param_1[0x27] + 1;
            *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
          }
          if (**(char **)(param_1[7] + 0x20) == '%') {
            _xmlParserHandlePEReference(param_1);
          }
          if ((**(char **)(param_1[7] + 0x20) == '\0') &&
             (iVar5 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar5 < 1)) {
            _xmlPopInput(param_1);
          }
          param_1[0x28] = 0;
switchD_10015e085_caseD_ffffffff:
          return local_78;
        }
        local_40 = -local_40;
        *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_40;
      }
      else {
        local_38 = FUN_10015d82d(*(undefined8 *)(param_1[7] + 0x20),local_44);
        if ((-1 < local_38) && (local_38 == local_44)) {
          if ((*param_1 != 0) && ((0 < local_44 && (*(int *)((long)param_1 + 0x14c) == 0)))) {
            if (*(long *)(*param_1 + 200) == 0) {
              if (*(long *)(*param_1 + 0x88) != 0) {
                (**(code **)(*param_1 + 0x88))
                          (param_1[1],*(undefined8 *)(param_1[7] + 0x20),local_44);
              }
            }
            else {
              (**(code **)(*param_1 + 200))(param_1[1],*(undefined8 *)(param_1[7] + 0x20),local_44);
            }
          }
          for (local_34 = 0; local_34 < local_44 + 3; local_34 = local_34 + 1) {
            if (**(char **)(param_1[7] + 0x20) == '\n') {
              *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
              *(undefined4 *)(param_1[7] + 0x38) = 1;
            }
            else {
              *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
            }
            param_1[0x27] = param_1[0x27] + 1;
            *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
          }
          if (**(char **)(param_1[7] + 0x20) == '%') {
            _xmlParserHandlePEReference(param_1);
          }
          if ((**(char **)(param_1[7] + 0x20) == '\0') &&
             (iVar5 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar5 < 1)) {
            _xmlPopInput(param_1);
          }
          param_1[0x28] = 0;
          *(undefined4 *)(param_1 + 0x22) = 7;
          break;
        }
        local_38 = -local_38;
        *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_38;
      }
      _snprintf(local_148,0x95,"Bytes: 0x%02X 0x%02X 0x%02X 0x%02X\n",
                (ulong)**(byte **)(param_1[7] + 0x20),
                (ulong)*(byte *)(*(long *)(param_1[7] + 0x20) + 1),
                (ulong)*(byte *)(*(long *)(param_1[7] + 0x20) + 2),
                (uint)*(byte *)(*(long *)(param_1[7] + 0x20) + 3));
      ___xmlErrEncoding(param_1,9,"Input is not proper UTF-8, indicate encoding !\n%s",local_148,0);
      return 0;
    case 9:
      if (local_74 < 2) {
        return local_78;
      }
      if (param_2 == 0) {
        if (*(int *)((long)param_1 + 0x1c4) == 0) {
          iVar5 = FUN_10015d424(param_1,0x3e,0,0);
          if (iVar5 < 0) {
            return local_78;
          }
        }
        else {
          if (local_90 == 0) {
            return local_78;
          }
          if (local_90 <= *(ulong *)(param_1[7] + 0x20)) {
            return local_78;
          }
        }
      }
      if ((int)param_1[0x3f] == 0) {
        FUN_100156970(param_1,0);
      }
      else {
        FUN_10015984e(param_1,*(undefined8 *)
                               (param_1[0x43] + (long)(int)param_1[0x25] * 0x18 + -0x18),
                      *(undefined8 *)(param_1[0x43] + (long)(int)param_1[0x25] * 0x18 + -0x10),0,
                      *(ulong *)(param_1[0x43] + (long)(int)param_1[0x25] * 0x18 + -8) & 0xffffffff,
                      0);
        FUN_100145e6c(param_1);
      }
      if ((int)param_1[0x25] == 0) {
        *(undefined4 *)(param_1 + 0x22) = 0xe;
      }
      else {
        *(undefined4 *)(param_1 + 0x22) = 7;
      }
      break;
    case 10:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == ENTITY_DECL\n");
      *(undefined4 *)(param_1 + 0x22) = 3;
      break;
    case 0xb:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == ENTITY_VALUE\n");
      *(undefined4 *)(param_1 + 0x22) = 7;
      break;
    case 0xc:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == ATTRIBUTE_VALUE\n");
      *(undefined4 *)(param_1 + 0x22) = 6;
      break;
    case 0xd:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == SYSTEM_LITERAL\n");
      *(undefined4 *)(param_1 + 0x22) = 6;
      break;
    case 0xe:
      _xmlSkipBlankChars(param_1);
      if (*(long *)param_1[7] == 0) {
        local_74 = *(int *)(param_1[7] + 0x30) -
                   ((int)*(undefined8 *)(param_1[7] + 0x20) -
                   (int)*(undefined8 *)(param_1[7] + 0x18));
      }
      else {
        local_74 = *(int *)(*(long *)(*(long *)param_1[7] + 0x20) + 8) -
                   ((int)*(undefined8 *)(param_1[7] + 0x20) -
                   (int)*(undefined8 *)(param_1[7] + 0x18));
      }
      if (local_74 < 2) {
        return local_78;
      }
      local_6e = **(char **)(param_1[7] + 0x20);
      local_6d = *(char *)(*(long *)(param_1[7] + 0x20) + 1);
      if ((local_6e == '<') && (local_6d == '?')) {
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x3f,0x3e,0), iVar5 < 0)) {
          return local_78;
        }
        _xmlParsePI(param_1);
        *(undefined4 *)(param_1 + 0x22) = 0xe;
      }
      else {
        if ((local_6e != '<') ||
           (((local_6d != '!' || (*(char *)(*(long *)(param_1[7] + 0x20) + 2) != '-')) ||
            (*(char *)(*(long *)(param_1[7] + 0x20) + 3) != '-')))) {
          if (((local_6e == '<') && (local_6d == '!')) && (local_74 < 4)) {
            return local_78;
          }
          FUN_100143bf8(param_1,5,0);
          *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
          if (*param_1 == 0) {
            return local_78;
          }
          if (*(long *)(*param_1 + 0x68) == 0) {
            return local_78;
          }
          (**(code **)(*param_1 + 0x68))(param_1[1]);
          return local_78;
        }
        if ((param_2 == 0) && (iVar5 = FUN_10015d424(param_1,0x2d,0x2d,0x3e), iVar5 < 0)) {
          return local_78;
        }
        _xmlParseComment(param_1);
        *(undefined4 *)(param_1 + 0x22) = 0xe;
      }
      break;
    case 0xf:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == IGNORE");
      *(undefined4 *)(param_1 + 0x22) = 3;
      break;
    case 0x10:
      ppxVar8 = ___xmlGenericError();
      pxVar3 = *ppxVar8;
      ppvVar9 = ___xmlGenericErrorContext();
      (*pxVar3)(*ppvVar9,"PP: internal error, state == PUBLIC_LITERAL\n");
      *(undefined4 *)(param_1 + 0x22) = 6;
      break;
    case -1:
      goto switchD_10015e085_caseD_ffffffff;
    }
  } while( true );
}

