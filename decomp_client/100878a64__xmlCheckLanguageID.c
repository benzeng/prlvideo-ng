
undefined4 _xmlCheckLanguageID(byte *param_1)

{
  byte *pbVar1;
  byte *local_10;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (((*param_1 == 0x69) && (param_1[1] == 0x2d)) || ((*param_1 == 0x49 && (param_1[1] == 0x2d))))
  {
    for (local_10 = param_1 + 2;
        ((0x40 < *local_10 && (*local_10 < 0x5b)) || ((0x60 < *local_10 && (*local_10 < 0x7b))));
        local_10 = local_10 + 1) {
    }
  }
  else if (((*param_1 == 0x78) && (param_1[1] == 0x2d)) ||
          ((*param_1 == 0x58 && (param_1[1] == 0x2d)))) {
    for (local_10 = param_1 + 2;
        ((0x40 < *local_10 && (*local_10 < 0x5b)) || ((0x60 < *local_10 && (*local_10 < 0x7b))));
        local_10 = local_10 + 1) {
    }
  }
  else {
    if (((*param_1 < 0x41) || (0x5a < *param_1)) && ((*param_1 < 0x61 || (0x7a < *param_1)))) {
      return 0;
    }
    pbVar1 = param_1 + 1;
    if (((*pbVar1 < 0x41) || (0x5a < *pbVar1)) && ((*pbVar1 < 0x61 || (0x7a < *pbVar1)))) {
      return 0;
    }
    local_10 = param_1 + 2;
  }
  while( true ) {
    if (*local_10 == 0) {
      return 1;
    }
    if (*local_10 != 0x2d) break;
    pbVar1 = local_10 + 1;
    if (((*pbVar1 < 0x41) || (0x5a < *pbVar1)) && ((*pbVar1 < 0x61 || (0x7a < *pbVar1)))) {
      return 0;
    }
    for (local_10 = local_10 + 2;
        ((0x40 < *local_10 && (*local_10 < 0x5b)) || ((0x60 < *local_10 && (*local_10 < 0x7b))));
        local_10 = local_10 + 1) {
    }
  }
  return 0;
}

