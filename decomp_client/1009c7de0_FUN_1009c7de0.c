
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1009c7de0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 in_R9;
  byte *pbVar4;
  byte *pbStack_190;
  byte *local_188;
  byte *pbStack_180;
  int local_178;
  undefined4 auStack_174 [3];
  QArrayData *local_168;
  uint local_15c;
  byte *local_158;
  byte *pbStack_150;
  byte *local_148;
  byte *pbStack_140;
  int local_138 [4];
  byte *local_128;
  byte *pbStack_120;
  byte *local_118;
  byte *pbStack_110;
  int local_108 [4];
  byte *local_f8;
  byte *pbStack_f0;
  byte *local_e8;
  byte *pbStack_e0;
  int local_d8 [4];
  byte *local_c8;
  byte *pbStack_c0;
  byte *local_b8;
  byte *pbStack_b0;
  undefined8 local_a8;
  byte *local_98;
  byte *pbStack_90;
  byte *local_88;
  byte *pbStack_80;
  int local_78 [4];
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e12f0;
  local_88 = (byte *)0x0;
  pbStack_80 = (byte *)0x0;
  local_78[0] = -1;
  local_78[1] = 0;
  lVar1 = *param_2;
  local_98 = (byte *)(*(long *)(lVar1 + 0x10) + lVar1);
  pbStack_90 = local_98;
  FUN_100c8abb0(&pbStack_90,&local_68,local_78,local_78 + 1,(long)*(int *)(lVar1 + 4));
  local_88 = pbStack_90 + local_68;
  pbStack_80 = pbStack_90;
  if (local_78[0] == 0x11) {
    local_b8 = (byte *)0x0;
    pbStack_b0 = (byte *)0x0;
    local_a8 = 0xffffffff;
    if (0 < local_68) {
      local_c8 = pbStack_90;
      pbStack_c0 = pbStack_90;
      FUN_100c8abb0(&pbStack_c0,&local_60,&local_a8,(long)&local_a8 + 4,(long)(int)local_68);
      pbVar2 = pbStack_c0 + local_60;
      pbStack_b0 = pbStack_c0;
      if (((pbVar2 != (byte *)0x0) && (pbStack_c0 != (byte *)0x0)) && ((int)local_a8 != -1)) {
        iVar3 = (int)local_a8;
        local_b8 = pbVar2;
        pbStack_80 = pbVar2;
        do {
          pbStack_c0 = pbStack_b0;
          if (iVar3 == 0x10) {
            local_e8 = (byte *)0x0;
            pbStack_e0 = (byte *)0x0;
            local_f8 = (byte *)0x0;
            local_d8[0] = -1;
            local_d8[1] = 0;
            if (pbStack_b0 < local_b8) {
              local_f8 = pbStack_b0;
              pbStack_f0 = pbStack_b0;
              FUN_100c8abb0(&pbStack_f0,&local_58,local_d8,local_d8 + 1,
                            (long)((int)local_b8 - (int)pbStack_b0));
              local_e8 = pbStack_f0 + local_58;
              pbStack_e0 = pbStack_f0;
              pbStack_b0 = local_e8;
            }
            local_118 = (byte *)0x0;
            pbStack_110 = (byte *)0x0;
            local_128 = (byte *)0x0;
            local_108[0] = -1;
            local_108[1] = 0;
            pbStack_f0 = pbStack_e0;
            if (pbStack_b0 < local_b8) {
              local_128 = pbStack_b0;
              pbStack_120 = pbStack_b0;
              FUN_100c8abb0(&pbStack_120,&local_50,local_108,local_108 + 1,
                            (long)((int)local_b8 - (int)pbStack_b0));
              local_118 = pbStack_120 + local_50;
              pbStack_110 = pbStack_120;
              pbStack_b0 = local_118;
            }
            local_148 = (byte *)0x0;
            pbStack_140 = (byte *)0x0;
            local_158 = (byte *)0x0;
            local_138[0] = -1;
            local_138[1] = 0;
            pbStack_120 = pbStack_110;
            if (pbStack_b0 < local_b8) {
              local_158 = pbStack_b0;
              pbStack_150 = pbStack_b0;
              FUN_100c8abb0(&pbStack_150,&local_48,local_138,local_138 + 1,
                            (long)((int)local_b8 - (int)pbStack_b0));
              local_148 = pbStack_150 + local_48;
              pbStack_140 = pbStack_150;
              pbStack_b0 = local_148;
            }
            pbVar2 = pbStack_80;
            pbStack_150 = pbStack_140;
            if (((local_d8[0] == 2) && (local_108[0] == 2)) && (local_138[0] == 4)) {
              local_15c = 0;
              if (((local_e8 != (byte *)0x0) && (pbStack_f0 != (byte *)0x0)) &&
                 ((int)local_e8 - (int)pbStack_f0 == 1)) {
                local_15c = (uint)*pbStack_f0;
              }
              FUN_1009c7cb0(&local_168,&local_158);
              FUN_1009c84b0(param_1,&local_15c,&local_168);
              pbVar2 = pbStack_80;
              if (*(int *)local_168 != -1) {
                if (*(int *)local_168 != 0) {
                  LOCK();
                  *(int *)local_168 = *(int *)local_168 + -1;
                  local_31 = *(int *)local_168 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1009c8184;
                }
                QArrayData::deallocate(local_168,1,8);
                pbVar2 = pbStack_80;
              }
            }
          }
LAB_1009c8184:
          local_188 = (byte *)0x0;
          pbStack_180 = (byte *)0x0;
          pbVar4 = (byte *)0x0;
          local_178 = -1;
          auStack_174[0] = 0;
          if (pbVar2 < local_88) {
            pbVar4 = pbVar2;
            pbStack_190 = pbVar2;
            FUN_100c8abb0(&pbStack_190,&local_40,&local_178,auStack_174,
                          (long)((int)local_88 - (int)pbVar2),in_R9,pbVar2);
            pbVar2 = pbStack_190 + local_40;
            pbStack_180 = pbStack_190;
            local_188 = pbVar2;
            pbStack_80 = pbVar2;
          }
          local_a8 = CONCAT44(auStack_174[0],local_178);
          pbStack_b0 = pbStack_180;
          local_b8 = local_188;
        } while (((local_188 != (byte *)0x0) && (pbStack_180 != (byte *)0x0)) &&
                (iVar3 = local_178, pbStack_190 = pbStack_180, local_c8 = pbVar4, local_178 != -1));
      }
    }
  }
  return param_1;
}

