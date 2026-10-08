
uint _xmlCurrentChar(long param_1,undefined4 *param_2)

{
  bool bVar1;
  uint local_d8;
  char local_b8 [160];
  byte *local_18;
  byte local_d;
  uint local_c;
  
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (*(long *)(param_1 + 0x38) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x110) == -1) {
    return 0;
  }
  if ((0x1f < **(byte **)(*(long *)(param_1 + 0x38) + 0x20)) &&
     (-1 < **(char **)(*(long *)(param_1 + 0x38) + 0x20))) {
    *param_2 = 1;
    return (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  if (*(int *)(param_1 + 0x198) != 1) {
    *param_2 = 1;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r') {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '\n') {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
      }
      return 10;
    }
    return (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  local_18 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  local_d = *local_18;
  if (-1 < (char)local_d) {
    *param_2 = 1;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\r') {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == '\n') {
        *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
        *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
             *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
      }
      return 10;
    }
    return (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  if (local_d != 0xc0) {
    if (local_18[1] == 0) {
      _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
    }
    if ((local_18[1] & 0xc0) == 0x80) {
      if ((local_d & 0xe0) == 0xe0) {
        if (local_18[2] == 0) {
          _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
        }
        if ((local_18[2] & 0xc0) != 0x80) goto LAB_100874881;
        if ((local_d & 0xf0) == 0xf0) {
          if (local_18[3] == 0) {
            _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
          }
          if (((local_d & 0xf8) != 0xf0) || ((local_18[3] & 0xc0) != 0x80)) goto LAB_100874881;
          *param_2 = 4;
          local_c = (*local_18 & 7) << 0x12 | (local_18[1] & 0x3f) << 0xc |
                    (local_18[2] & 0x3f) << 6 | local_18[3] & 0x3f;
        }
        else {
          *param_2 = 3;
          local_c = (*local_18 & 0xf) << 0xc | (local_18[1] & 0x3f) << 6 | local_18[2] & 0x3f;
        }
      }
      else {
        *param_2 = 2;
        local_c = (*local_18 & 0x1f) << 6 | local_18[1] & 0x3f;
      }
      if (local_c < 0x100) {
        if ((((local_c < 9) || (10 < local_c)) && (local_c != 0xd)) && (local_c < 0x20)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else if ((((local_c < 0x100) || (0xd7ff < local_c)) &&
               ((local_c < 0xe000 || (0xfffd < local_c)))) &&
              ((local_c < 0x10000 || (0x10ffff < local_c)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_100873606(param_1,9,"Char 0x%X out of allowed range\n",local_c);
      }
      return local_c;
    }
  }
LAB_100874881:
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) < 4)
  {
    *param_2 = 0;
    local_d8 = 0;
  }
  else {
    _snprintf(local_b8,0x95,"Bytes: 0x%02X 0x%02X 0x%02X 0x%02X\n",
              (ulong)**(byte **)(*(long *)(param_1 + 0x38) + 0x20),
              (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1),
              (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2),
              (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3));
    ___xmlErrEncoding(param_1,9,"Input is not proper UTF-8, indicate encoding !\n%s",local_b8,0);
    *(undefined4 *)(param_1 + 0x198) = 10;
    *param_2 = 1;
    local_d8 = (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  return local_d8;
}

