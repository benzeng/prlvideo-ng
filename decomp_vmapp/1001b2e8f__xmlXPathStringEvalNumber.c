
double _xmlXPathStringEvalNumber(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  double local_68;
  double local_58;
  byte *local_48;
  double local_40;
  int local_30;
  int local_14;
  double local_10;
  
  bVar4 = false;
  local_30 = 0;
  bVar5 = false;
  local_48 = param_1;
  if (param_1 == (byte *)0x0) {
    local_58 = 0.0;
  }
  else {
    for (; (*local_48 == 0x20 || (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))));
        local_48 = local_48 + 1) {
    }
    if (((*local_48 == 0x2e) || ((0x2f < *local_48 && (*local_48 < 0x3a)))) || (*local_48 == 0x2d))
    {
      bVar2 = *local_48;
      if (bVar2 == 0x2d) {
        local_48 = local_48 + 1;
      }
      local_40 = 0.0;
      while ((0x2f < *local_48 && (*local_48 < 0x3a))) {
        bVar3 = *local_48;
        uVar6 = (ulong)(int)(bVar3 - 0x30);
        bVar4 = true;
        local_48 = local_48 + 1;
        if ((long)uVar6 < 0) {
          local_68 = (double)(uVar6 >> 1 | (ulong)(bVar3 - 0x30 & 1));
          local_68 = local_68 + local_68;
        }
        else {
          local_68 = (double)(long)uVar6;
        }
        local_40 = DAT_100b4aec0 * local_40 + local_68;
      }
      if (*local_48 == 0x2e) {
        local_14 = 0;
        local_10 = 0.0;
        local_48 = local_48 + 1;
        if (((*local_48 < 0x30) || (0x39 < *local_48)) && (!bVar4)) {
          return _xmlXPathNAN;
        }
        for (; ((0x2f < *local_48 && (*local_48 < 0x3a)) && (local_14 < 0x14));
            local_14 = local_14 + 1) {
          local_10 = (double)(int)(*local_48 - 0x30) + local_10 * DAT_100b4aec0;
          local_48 = local_48 + 1;
        }
        local_40 = local_40 + local_10 / *(double *)(&DAT_101111260 + (long)local_14 * 8);
        for (; (0x2f < *local_48 && (*local_48 < 0x3a)); local_48 = local_48 + 1) {
        }
      }
      if ((*local_48 == 0x65) || (*local_48 == 0x45)) {
        pbVar1 = local_48 + 1;
        if (*pbVar1 == 0x2d) {
          bVar5 = true;
          pbVar1 = local_48 + 2;
        }
        else if (*pbVar1 == 0x2b) {
          pbVar1 = local_48 + 2;
        }
        while ((local_48 = pbVar1, 0x2f < *local_48 && (*local_48 < 0x3a))) {
          local_30 = local_30 * 10 + (uint)*local_48 + -0x30;
          pbVar1 = local_48 + 1;
        }
      }
      for (; (*local_48 == 0x20 || (((8 < *local_48 && (*local_48 < 0xb)) || (*local_48 == 0xd))));
          local_48 = local_48 + 1) {
      }
      if (*local_48 == 0) {
        if (bVar2 == 0x2d) {
          local_40 = -local_40;
        }
        if (bVar5) {
          local_30 = -local_30;
        }
        local_58 = (double)_pow(DAT_100b4aec0,(double)local_30);
        local_58 = local_40 * local_58;
      }
      else {
        local_58 = _xmlXPathNAN;
      }
    }
    else {
      local_58 = _xmlXPathNAN;
    }
  }
  return local_58;
}

