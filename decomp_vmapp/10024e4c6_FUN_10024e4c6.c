
undefined4 FUN_10024e4c6(byte *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  xmlGenericErrorFunc pxVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  byte *local_60;
  byte *local_50;
  uint local_1c;
  
  pbVar4 = param_1 + *param_2;
  pbVar5 = param_3 + *param_4;
  local_60 = param_3;
  local_50 = param_1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              if ((pbVar5 <= local_60) || (pbVar4 <= local_50)) goto LAB_10024ea17;
              if (*local_60 != 0x3c) break;
              if ((long)pbVar4 - (long)local_50 < 4) goto LAB_10024ea17;
              *local_50 = 0x26;
              local_50[1] = 0x6c;
              local_50[2] = 0x74;
              local_50[3] = 0x3b;
              local_50 = local_50 + 4;
              local_60 = local_60 + 1;
            }
            if (*local_60 != 0x3e) break;
            if ((long)pbVar4 - (long)local_50 < 4) goto LAB_10024ea17;
            *local_50 = 0x26;
            local_50[1] = 0x67;
            local_50[2] = 0x74;
            local_50[3] = 0x3b;
            local_50 = local_50 + 4;
            local_60 = local_60 + 1;
          }
          if (*local_60 != 0x26) break;
          if ((long)pbVar4 - (long)local_50 < 5) goto LAB_10024ea17;
          *local_50 = 0x26;
          local_50[1] = 0x61;
          local_50[2] = 0x6d;
          local_50[3] = 0x70;
          local_50[4] = 0x3b;
          local_50 = local_50 + 5;
          local_60 = local_60 + 1;
        }
        if ((((*local_60 < 0x20) || ((char)*local_60 < '\0')) && (*local_60 != 10)) &&
           (*local_60 != 9)) break;
        *local_50 = *local_60;
        local_60 = local_60 + 1;
        local_50 = local_50 + 1;
      }
      if ((char)*local_60 < '\0') break;
      if (((*local_60 < 9) || (10 < *local_60)) && ((*local_60 != 0xd && (*local_60 < 0x20)))) {
        ppxVar6 = ___xmlGenericError();
        pxVar2 = *ppxVar6;
        ppvVar7 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar7,"xmlEscapeEntities : char out of range\n");
        local_60._0_4_ = (int)local_60 + 1;
LAB_10024e6f1:
        *param_2 = (int)local_50 - (int)param_1;
        *param_4 = (int)local_60 - (int)param_3;
        return 0xffffffff;
      }
      if ((long)pbVar4 - (long)local_50 < 6) goto LAB_10024ea17;
      bVar1 = *local_60;
      local_60 = local_60 + 1;
      local_50 = (byte *)FUN_10024e23d(local_50,bVar1);
    }
    if ((long)pbVar4 - (long)local_50 < 10) {
LAB_10024ea17:
      *param_2 = (int)local_50 - (int)param_1;
      *param_4 = (int)local_60 - (int)param_3;
      return 0;
    }
    if (*local_60 < 0xc0) {
      FUN_10024e18e(0x578,0,0);
      local_60._0_4_ = (int)local_60 + 1;
      goto LAB_10024e6f1;
    }
    if (*local_60 < 0xe0) {
      if ((long)pbVar5 - (long)local_60 < 2) goto LAB_10024ea17;
      local_1c = (*local_60 & 0x1f) << 6 | local_60[1] & 0x3f;
      local_60 = local_60 + 2;
    }
    else if (*local_60 < 0xf0) {
      if ((long)pbVar5 - (long)local_60 < 3) goto LAB_10024ea17;
      local_1c = ((*local_60 & 0xf) << 6 | local_60[1] & 0x3f) << 6 | local_60[2] & 0x3f;
      local_60 = local_60 + 3;
    }
    else {
      if (0xf7 < *local_60) {
        FUN_10024e18e(0x579,0,0);
        local_60._0_4_ = (int)local_60 + 1;
        goto LAB_10024e6f1;
      }
      if ((long)pbVar5 - (long)local_60 < 4) goto LAB_10024ea17;
      local_1c = (((*local_60 & 7) << 6 | local_60[1] & 0x3f) << 6 | local_60[2] & 0x3f) << 6 |
                 local_60[3] & 0x3f;
      local_60 = local_60 + 4;
    }
    if (local_1c < 0x100) {
      if ((((local_1c < 9) || (10 < local_1c)) && (local_1c != 0xd)) && (local_1c < 0x20)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    else if ((((local_1c < 0x100) || (0xd7ff < local_1c)) &&
             ((local_1c < 0xe000 || (0xfffd < local_1c)))) &&
            ((local_1c < 0x10000 || (0x10ffff < local_1c)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_10024e18e(0x579,0,0);
      local_60._0_4_ = (int)local_60 + 1;
      goto LAB_10024e6f1;
    }
    local_50 = (byte *)FUN_10024e23d(local_50,local_1c);
  } while( true );
}

