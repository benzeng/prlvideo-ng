
uint FUN_100190973(long param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint local_d8;
  char local_b8 [160];
  byte *local_18;
  byte local_d;
  uint local_c;
  
  if (*(int *)(param_1 + 0x110) == -1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    *param_2 = 0;
    return *(uint *)(param_1 + 0x114);
  }
  if (*(int *)(param_1 + 0x198) != 1) {
    *param_2 = 1;
    if (-1 < **(char **)(*(long *)(param_1 + 0x38) + 0x20)) {
      return (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
    }
    _xmlSwitchEncoding(param_1,10);
    *(undefined4 *)(param_1 + 0x198) = 1;
    uVar2 = _xmlCurrentChar(param_1,param_2);
    return uVar2;
  }
  local_18 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  local_d = *local_18;
  if (-1 < (char)local_d) {
    *param_2 = 1;
    return (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  if (local_18[1] == 0) {
    _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
  }
  if ((local_18[1] & 0xc0) == 0x80) {
    if ((local_d & 0xe0) == 0xe0) {
      if (local_18[2] == 0) {
        _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      }
      if ((local_18[2] & 0xc0) != 0x80) goto LAB_100190da6;
      if ((local_d & 0xf0) == 0xf0) {
        if (local_18[3] == 0) {
          _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
        }
        if (((local_d & 0xf8) != 0xf0) || ((local_18[3] & 0xc0) != 0x80)) goto LAB_100190da6;
        *param_2 = 4;
        local_c = (*local_18 & 7) << 0x12 | (local_18[1] & 0x3f) << 0xc | (local_18[2] & 0x3f) << 6
                  | local_18[3] & 0x3f;
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
      FUN_100190697(param_1,9,"Char 0x%X out of allowed range\n",local_c);
    }
    local_d8 = local_c;
  }
  else {
LAB_100190da6:
    _snprintf(local_b8,0x95,"Bytes: 0x%02X 0x%02X 0x%02X 0x%02X\n",
              (ulong)**(byte **)(*(long *)(param_1 + 0x38) + 0x20),
              (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1),
              (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2),
              (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3));
    FUN_100190598(param_1,0x51,"Input is not proper UTF-8, indicate encoding !\n",local_b8,0);
    *(undefined4 *)(param_1 + 0x198) = 10;
    *param_2 = 1;
    local_d8 = (uint)**(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  }
  return local_d8;
}

