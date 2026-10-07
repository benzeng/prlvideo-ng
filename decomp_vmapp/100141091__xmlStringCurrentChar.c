
uint _xmlStringCurrentChar(long param_1,byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint local_d0;
  char local_a8 [155];
  byte local_d;
  uint local_c;
  
  if ((param_3 == (undefined4 *)0x0) || (param_2 == (byte *)0x0)) {
    return 0;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x198) != 1)) {
    *param_3 = 1;
    return (uint)*param_2;
  }
  local_d = *param_2;
  if (-1 < (char)local_d) {
    *param_3 = 1;
    return (uint)*param_2;
  }
  if ((param_2[1] & 0xc0) == 0x80) {
    if ((local_d & 0xe0) == 0xe0) {
      if ((param_2[2] & 0xc0) != 0x80) goto LAB_1001413e4;
      if ((local_d & 0xf0) == 0xf0) {
        if (((local_d & 0xf8) != 0xf0) || ((param_2[3] & 0xc0) != 0x80)) goto LAB_1001413e4;
        *param_3 = 4;
        local_c = (*param_2 & 7) << 0x12 | (param_2[1] & 0x3f) << 0xc | (param_2[2] & 0x3f) << 6 |
                  param_2[3] & 0x3f;
      }
      else {
        *param_3 = 3;
        local_c = (*param_2 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6 | param_2[2] & 0x3f;
      }
    }
    else {
      *param_3 = 2;
      local_c = (*param_2 & 0x1f) << 6 | param_2[1] & 0x3f;
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
      FUN_10013fcde(param_1,9,"Char 0x%X out of allowed range\n",local_c);
    }
    local_d0 = local_c;
  }
  else {
LAB_1001413e4:
    if ((param_1 == 0) ||
       ((*(long *)(param_1 + 0x38) == 0 ||
        (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
         4)))) {
      *param_3 = 0;
      local_d0 = 0;
    }
    else {
      _snprintf(local_a8,0x95,"Bytes: 0x%02X 0x%02X 0x%02X 0x%02X\n",
                (ulong)**(byte **)(*(long *)(param_1 + 0x38) + 0x20),
                (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1),
                (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2),
                (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3));
      ___xmlErrEncoding(param_1,9,"Input is not proper UTF-8, indicate encoding !\n%s",local_a8,0);
      *param_3 = 1;
      local_d0 = (uint)*param_2;
    }
  }
  return local_d0;
}

