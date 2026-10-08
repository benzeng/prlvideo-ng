
void _xmlNextChar(long param_1)

{
  int iVar1;
  char local_b8 [160];
  byte *local_18;
  byte local_d;
  uint local_c;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x110) == -1) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x198) == 1) {
    if (((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
        (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) &&
       (*(int *)(param_1 + 0x110) != 5)) {
      _xmlPopInput(param_1);
    }
    else {
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
        *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
      }
      else {
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
      }
      local_18 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
      local_d = *local_18;
      if ((char)local_d < '\0') {
        if (local_d == 0xc0) {
LAB_100874216:
          if (((param_1 == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
             (*(long *)(*(long *)(param_1 + 0x38) + 0x28) -
              *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 4)) {
            ___xmlErrEncoding(param_1,9,"Input is not proper UTF-8, indicate encoding !\n",0,0);
          }
          else {
            _snprintf(local_b8,0x95,"Bytes: 0x%02X 0x%02X 0x%02X 0x%02X\n",
                      (ulong)**(byte **)(*(long *)(param_1 + 0x38) + 0x20),
                      (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1),
                      (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2),
                      (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3));
            ___xmlErrEncoding(param_1,9,"Input is not proper UTF-8, indicate encoding !\n%s",
                              local_b8,0);
          }
          *(undefined4 *)(param_1 + 0x198) = 10;
          *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
               *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
          return;
        }
        if (local_18[1] == 0) {
          _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
        }
        if ((local_18[1] & 0xc0) != 0x80) goto LAB_100874216;
        if ((local_d & 0xe0) == 0xe0) {
          if (local_18[2] == 0) {
            _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
          }
          if ((local_18[2] & 0xc0) != 0x80) goto LAB_100874216;
          if ((local_d & 0xf0) == 0xf0) {
            if (local_18[3] == 0) {
              _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
            }
            if (((local_d & 0xf8) != 0xf0) || ((local_18[3] & 0xc0) != 0x80)) goto LAB_100874216;
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
                 *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4;
            local_c = (*local_18 & 7) << 0x12 | (local_18[1] & 0x3f) << 0xc |
                      (local_18[2] & 0x3f) << 6 | local_18[3] & 0x3f;
          }
          else {
            *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
                 *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3;
            local_c = (*local_18 & 0xf) << 0xc | (local_18[1] & 0x3f) << 6 | local_18[2] & 0x3f;
          }
          if ((((0xd7ff < local_c) && (local_c < 0xe000)) ||
              ((0xfffd < local_c && (local_c < 0x10000)))) || (0x10ffff < local_c)) {
            FUN_100873606(param_1,9,"Char 0x%X out of allowed range\n",local_c);
          }
        }
        else {
          *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
               *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2;
        }
      }
      else {
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
      }
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
        _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      }
    }
  }
  else {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
    }
    else {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
    }
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
    }
  }
  if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') && (*(int *)(param_1 + 0x34) == 0)) {
    _xmlParserHandlePEReference(param_1);
  }
  if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') &&
     (iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa), iVar1 < 1)) {
    _xmlPopInput(param_1);
  }
  return;
}

