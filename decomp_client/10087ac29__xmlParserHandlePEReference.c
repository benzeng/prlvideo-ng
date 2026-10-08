
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void _xmlParserHandlePEReference(long *param_1)

{
  xmlGenericErrorFunc pxVar1;
  int *piVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  uchar local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  long local_38;
  long local_30;
  undefined8 local_28;
  xmlCharEncoding local_1c;
  
  local_30 = 0;
  if (**(char **)(param_1[7] + 0x20) == '%') {
    switch((int)param_1[0x22]) {
    case 0:
    case 1:
    case 4:
      FUN_100877520(param_1,0x13,0);
      break;
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
      break;
    case 3:
      if ((*(int *)((long)param_1 + 0x94) == 0) && ((int)param_1[8] == 1)) {
        return;
      }
      if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == ' ') {
        return;
      }
      if ((8 < *(byte *)(*(long *)(param_1[7] + 0x20) + 1)) &&
         (*(byte *)(*(long *)(param_1[7] + 0x20) + 1) < 0xb)) {
        return;
      }
      if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '\r') {
        return;
      }
      if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '\0') {
        return;
      }
    default:
      _xmlNextChar(param_1);
      local_38 = _xmlParseName(param_1);
      piVar2 = ___xmlParserDebugEntities();
      if (*piVar2 != 0) {
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"PEReference: %s\n",local_38);
      }
      if (local_38 == 0) {
        FUN_100877520(param_1,0x18,0);
      }
      else if (**(char **)(param_1[7] + 0x20) == ';') {
        _xmlNextChar(param_1);
        if ((*param_1 != 0) && (*(long *)(*param_1 + 0xc0) != 0)) {
          local_30 = (**(code **)(*param_1 + 0xc0))(param_1[1],local_38);
        }
        if (local_30 == 0) {
          if (((int)param_1[6] == 1) ||
             ((*(int *)((long)param_1 + 0x8c) == 0 && ((int)param_1[0x12] == 0)))) {
            FUN_1008780de(param_1,0x1a,"PEReference: %%%s; not found\n",local_38);
          }
          else {
            if ((*(int *)((long)param_1 + 0x9c) == 0) || (param_1[0x15] == 0)) {
              FUN_100877c2c(param_1,0x1b,"PEReference: %%%s; not found\n",local_38,0);
            }
            else {
              FUN_100877d93(param_1,0x1b,"PEReference: %%%s; not found\n",local_38);
            }
            *(undefined4 *)(param_1 + 0x13) = 0;
          }
        }
        else if (*(code **)(param_1[7] + 0x48) == FUN_10087aa73) {
          if ((*(int *)(local_30 + 0x5c) == 4) || (*(int *)(local_30 + 0x5c) == 5)) {
            local_28 = _xmlNewEntityInputStream(param_1,local_30);
            _xmlPushInput(param_1,local_28);
            if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
               (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
              FUN_100879cbc(param_1);
            }
            if (3 < *(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20)) {
              local_48 = **(uchar **)(param_1[7] + 0x20);
              local_47 = *(undefined1 *)(*(long *)(param_1[7] + 0x20) + 1);
              local_46 = *(undefined1 *)(*(long *)(param_1[7] + 0x20) + 2);
              local_45 = *(undefined1 *)(*(long *)(param_1[7] + 0x20) + 3);
              local_1c = _xmlDetectCharEncoding(&local_48,4);
              if (local_1c != XML_CHAR_ENCODING_ERROR) {
                _xmlSwitchEncoding(param_1,local_1c);
              }
            }
            if ((((((*(int *)(local_30 + 0x5c) == 5) && (**(char **)(param_1[7] + 0x20) == '<')) &&
                  (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '?')) &&
                 ((*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'x' &&
                  (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'm')))) &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'l')) &&
               (((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == ' ' ||
                 ((8 < *(byte *)(*(long *)(param_1[7] + 0x20) + 5) &&
                  (*(byte *)(*(long *)(param_1[7] + 0x20) + 5) < 0xb)))) ||
                (*(char *)(*(long *)(param_1[7] + 0x20) + 5) == '\r')))) {
              _xmlParseTextDecl(param_1);
            }
          }
          else {
            FUN_1008780de(param_1,0x1e,"PEReference: %s is not a parameter entity\n",local_38);
          }
        }
        else {
          local_28 = FUN_10087aa91(param_1,local_30);
          _xmlPushInput(param_1,local_28);
        }
      }
      else {
        FUN_100877520(param_1,0x19,0);
      }
      break;
    case 0xe:
      FUN_100877520(param_1,0x14,0);
      break;
    case -1:
      FUN_100877520(param_1,0x12,0);
    }
  }
  return;
}

