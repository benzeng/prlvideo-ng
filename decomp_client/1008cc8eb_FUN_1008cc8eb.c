
undefined4 FUN_1008cc8eb(long *param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  xmlSAXLocator *pxVar4;
  xmlDtdPtr pxVar5;
  undefined1 local_68;
  undefined1 local_67;
  byte local_5d;
  undefined4 local_5c;
  long *local_58;
  int local_50;
  char local_49;
  xmlChar *local_48;
  undefined8 local_40;
  int local_34;
  htmlElemDesc *local_30;
  long local_28;
  xmlDtdPtr local_20;
  
  local_5c = 0;
  local_50 = 0;
  do {
    while( true ) {
      local_58 = (long *)param_1[7];
      if (local_58 == (long *)0x0) goto switchD_1008ccaa8_caseD_ffffffff;
      if (*local_58 == 0) {
        local_50 = (int)local_58[6] - ((int)local_58[4] - (int)local_58[3]);
      }
      else {
        local_50 = *(int *)(*(long *)(*local_58 + 0x20) + 8) - ((int)local_58[4] - (int)local_58[3])
        ;
      }
      if ((((local_50 == 0) && (param_2 != 0)) && (FUN_1008c4d1f(param_1), (int)param_1[0x25] == 0))
         && ((((int)param_1[0x22] != -1 &&
              (*(undefined4 *)(param_1 + 0x22) = 0xffffffff, *param_1 != 0)) &&
             (*(long *)(*param_1 + 0x68) != 0)))) {
        (**(code **)(*param_1 + 0x68))(param_1[1]);
      }
      if (local_50 < 1) goto switchD_1008ccaa8_caseD_ffffffff;
      local_5d = *(byte *)local_58[4];
      if (local_5d != 0) break;
      param_1[0x27] = param_1[0x27] + 1;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    }
    switch((int)param_1[0x22]) {
    case 0:
      local_5d = *(byte *)local_58[4];
      if (((local_5d == 0x20) || ((8 < local_5d && (local_5d < 0xb)))) || (local_5d == 0xd)) {
        FUN_1008c47ba(param_1);
        if (*local_58 == 0) {
          local_50 = (int)local_58[6] - ((int)local_58[4] - (int)local_58[3]);
        }
        else {
          local_50 = *(int *)(*(long *)(*local_58 + 0x20) + 8) -
                     ((int)local_58[4] - (int)local_58[3]);
        }
      }
      if ((*param_1 != 0) && (*(long *)(*param_1 + 0x58) != 0)) {
        pcVar1 = *(code **)(*param_1 + 0x58);
        pxVar4 = ___xmlDefaultSAXLocator();
        (*pcVar1)(param_1[1],pxVar4);
      }
      if (((*param_1 != 0) && (*(long *)(*param_1 + 0x60) != 0)) &&
         (*(int *)((long)param_1 + 0x14c) == 0)) {
        (**(code **)(*param_1 + 0x60))(param_1[1]);
      }
      local_5d = *(byte *)local_58[4];
      local_49 = *(char *)(local_58[4] + 1);
      if ((((local_5d == 0x3c) && (local_49 == '!')) &&
          ((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 2)), iVar3 == 0x44
           && ((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 3)),
               iVar3 == 0x4f &&
               (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 4)),
               iVar3 == 0x43)))))) &&
         ((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 5)), iVar3 == 0x54
          && (((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 6)),
               iVar3 == 0x59 &&
               (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 7)),
               iVar3 == 0x50)) &&
              (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 8)),
              iVar3 == 0x45)))))) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c9bd1(param_1);
        *(undefined4 *)(param_1 + 0x22) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x22) = 1;
      }
      break;
    case 1:
      FUN_1008c47ba(param_1);
      if (*local_58 == 0) {
        local_50 = (int)local_58[6] - ((int)local_58[4] - (int)local_58[3]);
      }
      else {
        local_50 = *(int *)(*(long *)(*local_58 + 0x20) + 8) - ((int)local_58[4] - (int)local_58[3])
        ;
      }
      if (local_50 < 2) goto switchD_1008ccaa8_caseD_ffffffff;
      local_5d = *(byte *)local_58[4];
      local_49 = *(char *)(local_58[4] + 1);
      if ((((local_5d == 0x3c) && (local_49 == '!')) && (*(char *)(local_58[4] + 2) == '-')) &&
         (*(char *)(local_58[4] + 3) == '-')) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x2d,0x2d,0x3e,1), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c9056(param_1);
        *(undefined4 *)(param_1 + 0x22) = 1;
      }
      else if ((local_5d == 0x3c) && (local_49 == '?')) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c8963(param_1);
        *(undefined4 *)(param_1 + 0x22) = 1;
      }
      else if ((((((local_5d == 0x3c) && (local_49 == '!')) &&
                 (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 2)),
                 iVar3 == 0x44)) &&
                ((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 3)),
                 iVar3 == 0x4f &&
                 (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 4)),
                 iVar3 == 0x43)))) &&
               (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 5)),
               iVar3 == 0x54)) &&
              (((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 6)),
                iVar3 == 0x59 &&
                (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 7)),
                iVar3 == 0x50)) &&
               (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 8)),
               iVar3 == 0x45)))) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c9bd1(param_1);
        *(undefined4 *)(param_1 + 0x22) = 4;
      }
      else {
        if (((local_5d == 0x3c) && (local_49 == '!')) && (local_50 < 9))
        goto switchD_1008ccaa8_caseD_ffffffff;
        *(undefined4 *)(param_1 + 0x22) = 6;
      }
      break;
    case 2:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == PI\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 3:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == DTD\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 4:
      FUN_1008c47ba(param_1);
      if (*local_58 == 0) {
        local_50 = (int)local_58[6] - ((int)local_58[4] - (int)local_58[3]);
      }
      else {
        local_50 = *(int *)(*(long *)(*local_58 + 0x20) + 8) - ((int)local_58[4] - (int)local_58[3])
        ;
      }
      if (local_50 < 2) goto switchD_1008ccaa8_caseD_ffffffff;
      local_5d = *(byte *)local_58[4];
      local_49 = *(char *)(local_58[4] + 1);
      if ((((local_5d == 0x3c) && (local_49 == '!')) && (*(char *)(local_58[4] + 2) == '-')) &&
         (*(char *)(local_58[4] + 3) == '-')) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x2d,0x2d,0x3e,1), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c9056(param_1);
        *(undefined4 *)(param_1 + 0x22) = 4;
      }
      else if ((local_5d == 0x3c) && (local_49 == '?')) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c8963(param_1);
        *(undefined4 *)(param_1 + 0x22) = 4;
      }
      else {
        if ((local_5d == 0x3c) && ((local_49 == '!' && (local_50 < 4))))
        goto switchD_1008ccaa8_caseD_ffffffff;
        *(undefined4 *)(param_1 + 0x22) = 6;
      }
      break;
    case 5:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == COMMENT\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 6:
      if (local_50 < 2) goto switchD_1008ccaa8_caseD_ffffffff;
      local_5d = *(byte *)local_58[4];
      if (local_5d == 0x3c) {
        if (*(char *)(local_58[4] + 1) == '/') {
          *(undefined4 *)(param_1 + 0x22) = 9;
          param_1[0x28] = 0;
        }
        else {
          if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
          goto switchD_1008ccaa8_caseD_ffffffff;
          local_34 = FUN_1008ca198(param_1);
          local_48 = (xmlChar *)param_1[0x24];
          if ((local_34 == 0) && (local_48 != (xmlChar *)0x0)) {
            local_30 = _htmlTagLookup(local_48);
            if (local_30 == (htmlElemDesc *)0x0) {
              FUN_1008c3ec0(param_1,0x321,"Tag %s invalid\n",local_48,0);
            }
            if ((**(char **)(param_1[7] + 0x20) == '/') &&
               (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>')) {
              param_1[0x27] = param_1[0x27] + 2;
              *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
              *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
              if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
                (**(code **)(*param_1 + 0x78))(param_1[1],local_48);
              }
              local_40 = FUN_1008c419c(param_1);
              *(undefined4 *)(param_1 + 0x22) = 7;
            }
            else if (**(char **)(param_1[7] + 0x20) == '>') {
              _xmlNextChar(param_1);
              if ((local_30 != (htmlElemDesc *)0x0) && (local_30->empty != '\0')) {
                if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) {
                  (**(code **)(*param_1 + 0x78))(param_1[1],local_48);
                }
                local_40 = FUN_1008c419c(param_1);
              }
              *(undefined4 *)(param_1 + 0x22) = 7;
            }
            else {
              FUN_1008c3ec0(param_1,0x49,"Couldn\'t find end of Start Tag %s\n",local_48,0);
              iVar3 = _xmlStrEqual(local_48,(xmlChar *)param_1[0x24]);
              if (iVar3 != 0) {
                _nodePop(param_1);
                local_40 = FUN_1008c419c(param_1);
              }
              *(undefined4 *)(param_1 + 0x22) = 7;
            }
          }
          else if (**(char **)(param_1[7] + 0x20) == '>') {
            _xmlNextChar(param_1);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x22) = 7;
      }
      break;
    case 7:
      if (*(int *)((long)param_1 + 0x114) != 0) {
        local_67 = 0;
        local_68 = (undefined1)*(undefined4 *)((long)param_1 + 0x114);
        FUN_1008c52c1(param_1);
        if ((*param_1 != 0) && (*(long *)(*param_1 + 0x88) != 0)) {
          (**(code **)(*param_1 + 0x88))(param_1[1],&local_68,1);
        }
        *(undefined4 *)((long)param_1 + 0x114) = 0;
        param_1[0x28] = 0;
      }
      if ((((local_50 != 1) || (param_2 == 0)) ||
          (local_5d = *(byte *)local_58[4], local_5d == 0x3c)) || (local_5d == 0x26)) {
        if (local_50 < 2) goto switchD_1008ccaa8_caseD_ffffffff;
        local_5d = *(byte *)local_58[4];
        local_49 = *(char *)(local_58[4] + 1);
        local_28 = param_1[0x27];
        iVar3 = _xmlStrEqual((xmlChar *)param_1[0x24],(xmlChar *)"script");
        if ((iVar3 == 0) &&
           (iVar3 = _xmlStrEqual((xmlChar *)param_1[0x24],(xmlChar *)"style"), iVar3 == 0)) {
          if (((((local_5d == 0x3c) && (local_49 == '!')) &&
               (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 2)),
               iVar3 == 0x44)) &&
              (((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 3)),
                iVar3 == 0x4f &&
                (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 4)),
                iVar3 == 0x43)) &&
               ((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 5)),
                iVar3 == 0x54 &&
                ((iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 6)),
                 iVar3 == 0x59 &&
                 (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 7)),
                 iVar3 == 0x50)))))))) &&
             (iVar3 = FUN_1008c894e(*(undefined1 *)(*(long *)(param_1[7] + 0x20) + 8)),
             iVar3 == 0x45)) {
            if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
            goto switchD_1008ccaa8_caseD_ffffffff;
            FUN_1008c3ec0(param_1,800,"Misplaced DOCTYPE declaration\n","DOCTYPE",0);
            FUN_1008c9bd1(param_1);
          }
          else if ((((local_5d == 0x3c) && (local_49 == '!')) && (*(char *)(local_58[4] + 2) == '-')
                   ) && (*(char *)(local_58[4] + 3) == '-')) {
            if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x2d,0x2d,0x3e,1), iVar3 < 0))
            goto switchD_1008ccaa8_caseD_ffffffff;
            FUN_1008c9056(param_1);
            *(undefined4 *)(param_1 + 0x22) = 7;
          }
          else if ((local_5d == 0x3c) && (local_49 == '?')) {
            if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
            goto switchD_1008ccaa8_caseD_ffffffff;
            FUN_1008c8963(param_1);
            *(undefined4 *)(param_1 + 0x22) = 7;
          }
          else {
            if ((local_5d == 0x3c) && ((local_49 == '!' && (local_50 < 4))))
            goto switchD_1008ccaa8_caseD_ffffffff;
            if ((local_5d == 0x3c) && (local_49 == '/')) {
              *(undefined4 *)(param_1 + 0x22) = 9;
              param_1[0x28] = 0;
              break;
            }
            if (local_5d == 0x3c) {
              *(undefined4 *)(param_1 + 0x22) = 6;
              param_1[0x28] = 0;
              break;
            }
            if (local_5d == 0x26) {
              if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3b,0,0,0), iVar3 < 0))
              goto switchD_1008ccaa8_caseD_ffffffff;
              FUN_1008cad40(param_1);
            }
            else {
              if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3c,0,0,0), iVar3 < 0))
              goto switchD_1008ccaa8_caseD_ffffffff;
              param_1[0x28] = 0;
              FUN_1008c7fee(param_1);
            }
          }
        }
        else {
          if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3c,0x2f,0,0), iVar3 < 0))
          goto switchD_1008ccaa8_caseD_ffffffff;
          FUN_1008c7a42(param_1);
          if ((local_5d == 0x3c) && (local_49 == '/')) {
            *(undefined4 *)(param_1 + 0x22) = 9;
            param_1[0x28] = 0;
            break;
          }
        }
        if (param_1[0x27] == local_28) {
          if (param_1[10] != 0) {
            FUN_1008c3ec0(param_1,1,"detected an error in element content\n",0,0);
          }
          _xmlNextChar(param_1);
        }
        break;
      }
      if (*param_1 != 0) {
        if (((local_5d == 0x20) || ((8 < local_5d && (local_5d < 0xb)))) || (local_5d == 0xd)) {
          if (*(long *)(*param_1 + 0x90) != 0) {
            (**(code **)(*param_1 + 0x90))(param_1[1],&local_5d,1);
          }
        }
        else {
          FUN_1008c52c1(param_1);
          if (*(long *)(*param_1 + 0x88) != 0) {
            (**(code **)(*param_1 + 0x88))(param_1[1],&local_5d,1);
          }
        }
      }
      *(undefined4 *)((long)param_1 + 0x114) = 0;
      param_1[0x28] = 0;
      local_58[4] = local_58[4] + 1;
      break;
    case 8:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == CDATA\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 9:
      if ((local_50 < 2) ||
         ((param_2 == 0 && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))))
      goto switchD_1008ccaa8_caseD_ffffffff;
      FUN_1008caa2b(param_1);
      if ((int)param_1[0x25] == 0) {
        *(undefined4 *)(param_1 + 0x22) = 0xe;
      }
      else {
        *(undefined4 *)(param_1 + 0x22) = 7;
      }
      param_1[0x28] = 0;
      break;
    case 10:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == ENTITY_DECL\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 0xb:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == ENTITY_VALUE\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 0xc:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == ATTRIBUTE_VALUE\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 6;
      param_1[0x28] = 0;
      break;
    case 0xd:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == XML_PARSER_SYSTEM_LITERAL\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 0xe:
      if (*local_58 == 0) {
        local_50 = (int)local_58[6] - ((int)local_58[4] - (int)local_58[3]);
      }
      else {
        local_50 = *(int *)(*(long *)(*local_58 + 0x20) + 8) - ((int)local_58[4] - (int)local_58[3])
        ;
      }
      if (local_50 < 1) goto switchD_1008ccaa8_caseD_ffffffff;
      local_5d = *(byte *)local_58[4];
      if (((local_5d == 0x20) || ((8 < local_5d && (local_5d < 0xb)))) || (local_5d == 0xd)) {
        FUN_1008c7fee(param_1);
        goto switchD_1008ccaa8_caseD_ffffffff;
      }
      if (local_50 < 2) goto switchD_1008ccaa8_caseD_ffffffff;
      local_49 = *(char *)(local_58[4] + 1);
      if ((((local_5d == 0x3c) && (local_49 == '!')) && (*(char *)(local_58[4] + 2) == '-')) &&
         (*(char *)(local_58[4] + 3) == '-')) {
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x2d,0x2d,0x3e,1), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c9056(param_1);
        *(undefined4 *)(param_1 + 0x22) = 0xe;
      }
      else {
        if ((local_5d != 0x3c) || (local_49 != '?')) {
          if ((local_5d != 0x3c) || ((local_49 != '!' || (3 < local_50)))) {
            *(undefined4 *)(param_1 + 0x11) = 5;
            *(undefined4 *)(param_1 + 3) = 0;
            *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
            if ((*param_1 != 0) && (*(long *)(*param_1 + 0x68) != 0)) {
              (**(code **)(*param_1 + 0x68))(param_1[1]);
            }
          }
          goto switchD_1008ccaa8_caseD_ffffffff;
        }
        if ((param_2 == 0) && (iVar3 = FUN_1008cc65e(param_1,0x3e,0,0,0), iVar3 < 0))
        goto switchD_1008ccaa8_caseD_ffffffff;
        FUN_1008c8963(param_1);
        *(undefined4 *)(param_1 + 0x22) = 0xe;
      }
      break;
    case 0xf:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == XML_PARSER_IGNORE\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case 0x10:
      FUN_1008c3ec0(param_1,1,"HPP: internal error, state == XML_PARSER_LITERAL\n",0,0);
      *(undefined4 *)(param_1 + 0x22) = 7;
      param_1[0x28] = 0;
      break;
    case -1:
switchD_1008ccaa8_caseD_ffffffff:
      if (((local_50 == 0) && (param_2 != 0)) &&
         ((FUN_1008c4d1f(param_1), (int)param_1[0x25] == 0 &&
          ((((int)param_1[0x22] != -1 &&
            (*(undefined4 *)(param_1 + 0x22) = 0xffffffff, *param_1 != 0)) &&
           (*(long *)(*param_1 + 0x68) != 0)))))) {
        (**(code **)(*param_1 + 0x68))(param_1[1]);
      }
      if ((param_1[2] != 0) &&
         ((((param_2 != 0 || ((int)param_1[0x22] == -1)) || ((int)param_1[0x22] == 0xe)) &&
          (local_20 = _xmlGetIntSubset((xmlDocPtr)param_1[2]), local_20 == (xmlDtdPtr)0x0)))) {
        lVar2 = param_1[2];
        pxVar5 = _xmlCreateIntSubset((xmlDocPtr)param_1[2],(xmlChar *)"html",
                                     (xmlChar *)"-//W3C//DTD HTML 4.0 Transitional//EN",
                                     (xmlChar *)"http://www.w3.org/TR/REC-html40/loose.dtd");
        *(xmlDtdPtr *)(lVar2 + 0x50) = pxVar5;
      }
      return local_5c;
    }
  } while( true );
}

