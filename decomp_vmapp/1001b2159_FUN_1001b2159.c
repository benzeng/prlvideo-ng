
uint FUN_1001b2159(undefined8 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  uint local_38;
  uint local_14;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  if (-1 < (char)bVar1) {
    *param_2 = 1;
    return (uint)*pbVar2;
  }
  if ((pbVar2[1] & 0xc0) == 0x80) {
    if ((bVar1 & 0xe0) == 0xe0) {
      if ((pbVar2[2] & 0xc0) != 0x80) goto LAB_1001b23f1;
      if ((bVar1 & 0xf0) == 0xf0) {
        if (((bVar1 & 0xf8) != 0xf0) || ((pbVar2[3] & 0xc0) != 0x80)) goto LAB_1001b23f1;
        *param_2 = 4;
        local_14 = (*pbVar2 & 7) << 0x12 | (pbVar2[1] & 0x3f) << 0xc | (pbVar2[2] & 0x3f) << 6 |
                   pbVar2[3] & 0x3f;
      }
      else {
        *param_2 = 3;
        local_14 = (*pbVar2 & 0xf) << 0xc | (pbVar2[1] & 0x3f) << 6 | pbVar2[2] & 0x3f;
      }
    }
    else {
      *param_2 = 2;
      local_14 = (*pbVar2 & 0x1f) << 6 | pbVar2[1] & 0x3f;
    }
    if (local_14 < 0x100) {
      if ((((local_14 < 9) || (10 < local_14)) && (local_14 != 0xd)) && (local_14 < 0x20)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    else if ((((local_14 < 0x100) || (0xd7ff < local_14)) &&
             ((local_14 < 0xe000 || (0xfffd < local_14)))) &&
            ((local_14 < 0x10000 || (0x10ffff < local_14)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      _xmlXPathErr(param_1,0x15);
      local_38 = 0;
    }
    else {
      local_38 = local_14;
    }
  }
  else {
LAB_1001b23f1:
    *param_2 = 0;
    _xmlXPathErr(param_1,0x14);
    local_38 = 0;
  }
  return local_38;
}

