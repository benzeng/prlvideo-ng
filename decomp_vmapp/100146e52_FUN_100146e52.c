
uint FUN_100146e52(undefined8 param_1,long *param_2)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  byte *local_20;
  byte local_11;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    return 0;
  }
  pcVar1 = (char *)*param_2;
  if (((*pcVar1 == '&') && (pcVar1[1] == '#')) && (pcVar1[2] == 'x')) {
    local_20 = (byte *)(pcVar1 + 3);
    local_11 = *local_20;
    while (local_11 != 0x3b) {
      if ((local_11 < 0x30) || (0x39 < local_11)) {
        if ((local_11 < 0x61) || (0x66 < local_11)) {
          if ((local_11 < 0x41) || (0x46 < local_11)) {
            FUN_100143bf8(param_1,6,0);
            local_10 = 0;
            break;
          }
          local_10 = (local_10 * 0x10 + (uint)local_11) - 0x37;
        }
        else {
          local_10 = (local_10 * 0x10 + (uint)local_11) - 0x57;
        }
      }
      else {
        local_10 = (local_10 * 0x10 + (uint)local_11) - 0x30;
      }
      if (0x10ffff < local_10) {
        local_c = local_10;
      }
      local_20 = local_20 + 1;
      local_11 = *local_20;
    }
    if (local_11 == 0x3b) {
      local_20 = local_20 + 1;
    }
  }
  else {
    if ((*pcVar1 != '&') || (pcVar1[1] != '#')) {
      FUN_100143bf8(param_1,8,0);
      return 0;
    }
    local_20 = (byte *)(pcVar1 + 2);
    local_11 = *local_20;
    while (local_11 != 0x3b) {
      if ((local_11 < 0x30) || (0x39 < local_11)) {
        FUN_100143bf8(param_1,7,0);
        local_10 = 0;
        break;
      }
      local_10 = (local_10 * 10 + (uint)local_11) - 0x30;
      uVar3 = local_10;
      if (local_10 < 0x110000) {
        uVar3 = local_c;
      }
      local_c = uVar3;
      local_20 = local_20 + 1;
      local_11 = *local_20;
    }
    if (local_11 == 0x3b) {
      local_20 = local_20 + 1;
    }
  }
  *param_2 = (long)local_20;
  if (local_10 < 0x100) {
    if ((((local_10 < 9) || (10 < local_10)) && (local_10 != 0xd)) && (local_10 < 0x20)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else if ((((local_10 < 0x100) || (0xd7ff < local_10)) &&
           ((local_10 < 0xe000 || (0xfffd < local_10)))) &&
          ((local_10 < 0x10000 || (0x10ffff < local_10)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (local_c == 0)) {
    return local_10;
  }
  FUN_1001445a9(param_1,9,"xmlParseStringCharRef: invalid xmlChar value %d\n",local_10);
  return 0;
}

