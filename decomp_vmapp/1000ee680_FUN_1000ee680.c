
undefined8 FUN_1000ee680(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  ___bzero(param_1,0x92);
  local_34 = 0;
  local_38 = 0;
  FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
  uVar4 = local_38;
  uVar3 = local_3c;
  uVar2 = local_40;
  if (local_34 == 0) {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"CPUID validation error: Insufficient capabilities (0x%x)",0);
  }
  else {
    *param_1 = local_34;
    param_1[1] = local_40;
    param_1[2] = local_3c;
    param_1[3] = local_38;
    *(undefined1 *)(param_1 + 4) = 0;
    iVar1 = _memcmp(param_1 + 1,"GenuineIntel",0xc);
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_1 + 0x86) = 1;
    }
    else {
      iVar1 = _memcmp(param_1 + 1,"AuthenticAMD",0xc);
      if (iVar1 != 0) {
        *(undefined4 *)((long)param_1 + 0x86) = 0;
        FUN_1008e3970("","vm",0,"Unsupported CPU vendor uEBX=0x%x, uEDX=0x%x, uECX=0x%x",uVar2,uVar3
                      ,uVar4);
        return 0;
      }
      *(undefined4 *)((long)param_1 + 0x86) = 2;
    }
    local_34 = 1;
    local_38 = 0;
    FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
    *(uint *)((long)param_1 + 0x42) = local_34;
    *(uint *)((long)param_1 + 0x46) = local_40;
    *(uint *)((long)param_1 + 0x4e) = local_3c;
    *(uint *)((long)param_1 + 0x4a) = local_38;
    uVar2 = *param_1;
    if (9 < uVar2) {
      local_34 = 10;
      local_38 = 0;
      FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
      *(uint *)((long)param_1 + 0x52) = local_34;
      *(uint *)((long)param_1 + 0x56) = local_40;
      if ((local_34 & 0xfe) != 0) {
        *(uint *)((long)param_1 + 0x5a) = local_3c;
      }
      uVar2 = *param_1;
    }
    if (uVar2 < 7) {
      *(undefined4 *)((long)param_1 + 0x7a) = 0;
      *(undefined4 *)((long)param_1 + 0x5e) = 0x200;
    }
    else {
      local_34 = 7;
      local_38 = 0;
      FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
      *(uint *)((long)param_1 + 0x7a) = local_40;
      *(undefined4 *)((long)param_1 + 0x5e) = 0x200;
      if (0xc < *param_1) {
        local_34 = 0xd;
        local_38 = 0;
        FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
        *(uint *)((long)param_1 + 0x5e) = local_40;
        local_34 = 0xd;
        local_38 = 1;
        FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
        *(uint *)((long)param_1 + 0x7e) = local_34;
      }
    }
    local_34 = 0x80000000;
    local_38 = 0;
    FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
    *(uint *)((long)param_1 + 0x62) = local_34;
    uVar2 = local_34;
    if (0x80000000 < local_34) {
      local_34 = 0x80000001;
      local_38 = 0;
      FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
      *(uint *)((long)param_1 + 0x66) = local_38;
      *(uint *)((long)param_1 + 0x6a) = local_3c;
      uVar2 = *(uint *)((long)param_1 + 0x62);
      if (0x80000003 < uVar2) {
        local_44 = 0x80000002;
        local_4c = 0;
        FUN_100778270(&local_44,&local_4c,&local_50,&local_48);
        *(undefined4 *)((long)param_1 + 0x11) = local_44;
        *(undefined4 *)((long)param_1 + 0x15) = local_48;
        *(undefined4 *)((long)param_1 + 0x19) = local_4c;
        *(undefined4 *)((long)param_1 + 0x1d) = local_50;
        local_44 = 0x80000003;
        local_4c = 0;
        FUN_100778270(&local_44,&local_4c,&local_50,&local_48);
        *(undefined4 *)((long)param_1 + 0x21) = local_44;
        *(undefined4 *)((long)param_1 + 0x25) = local_48;
        *(undefined4 *)((long)param_1 + 0x29) = local_4c;
        *(undefined4 *)((long)param_1 + 0x2d) = local_50;
        local_44 = 0x80000004;
        local_4c = 0;
        FUN_100778270(&local_44,&local_4c,&local_50,&local_48);
        *(undefined4 *)((long)param_1 + 0x31) = local_44;
        *(undefined4 *)((long)param_1 + 0x35) = local_48;
        *(undefined4 *)((long)param_1 + 0x39) = local_4c;
        *(undefined4 *)((long)param_1 + 0x3d) = local_50;
        uVar2 = *(uint *)((long)param_1 + 0x62);
        if (0x80000006 < uVar2) {
          local_34 = 0x80000007;
          local_38 = 0;
          FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
          *(uint *)((long)param_1 + 0x6e) = local_3c;
          uVar2 = *(uint *)((long)param_1 + 0x62);
        }
      }
    }
    if (5 < uVar2) {
      local_34 = 6;
      local_38 = 0;
      FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
      *(uint *)((long)param_1 + 0x76) = local_38;
      *(uint *)((long)param_1 + 0x82) = local_34;
      if (0x80000007 < *(uint *)((long)param_1 + 0x62)) {
        local_34 = 0x80000008;
        local_38 = 0;
        FUN_100778270(&local_34,&local_38,&local_3c,&local_40);
        *(uint *)((long)param_1 + 0x72) = local_34;
      }
    }
    uVar2 = *(uint *)((long)param_1 + 0x42);
    uVar4 = uVar2 >> 8 & 0xf;
    *(uint *)((long)param_1 + 0x8a) = uVar4;
    uVar3 = uVar2 >> 4 & 0xf;
    *(uint *)((long)param_1 + 0x8e) = uVar3;
    if (*(int *)((long)param_1 + 0x86) == 1) {
      if ((uVar2 & 0xf00) == 0xf00) {
        *(uint *)((long)param_1 + 0x8a) = (uVar2 >> 0x14 & 0xff) + uVar4;
      }
      if ((uVar4 != 6) && (uVar4 != 0xf)) {
        return 1;
      }
    }
    else {
      if ((uVar2 & 0xf00) != 0xf00) {
        return 1;
      }
      *(uint *)((long)param_1 + 0x8a) = uVar4 + (uVar2 >> 0x14 & 0xff);
    }
    uVar5 = 1;
    *(uint *)((long)param_1 + 0x8e) = uVar2 >> 0xc & 0xf0 | uVar3;
  }
  return uVar5;
}

