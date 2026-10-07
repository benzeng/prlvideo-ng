
int FUN_1003dfd30(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_148;
  undefined4 local_140;
  uint local_138 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar4 = param_2;
  if (param_2 <= param_1) {
    iVar4 = param_1;
  }
  while( true ) {
    local_148 = 1;
    local_140 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    if (-1 < param_1) {
      puVar1 = (uint *)((long)&local_b8 + ((ulong)(long)param_1 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
    }
    local_138[0x1c] = 0;
    local_138[0x1d] = 0;
    local_138[0x1e] = 0;
    local_138[0x1f] = 0;
    local_138[0x18] = 0;
    local_138[0x19] = 0;
    local_138[0x1a] = 0;
    local_138[0x1b] = 0;
    local_138[0x14] = 0;
    local_138[0x15] = 0;
    local_138[0x16] = 0;
    local_138[0x17] = 0;
    local_138[0x10] = 0;
    local_138[0x11] = 0;
    local_138[0x12] = 0;
    local_138[0x13] = 0;
    local_138[0xc] = 0;
    local_138[0xd] = 0;
    local_138[0xe] = 0;
    local_138[0xf] = 0;
    local_138[8] = 0;
    local_138[9] = 0;
    local_138[10] = 0;
    local_138[0xb] = 0;
    local_138[4] = 0;
    local_138[5] = 0;
    local_138[6] = 0;
    local_138[7] = 0;
    local_138[0] = 0;
    local_138[1] = 0;
    local_138[2] = 0;
    local_138[3] = 0;
    if (-1 < param_2) {
      local_138[(ulong)(long)param_2 >> 5] =
           local_138[(ulong)(long)param_2 >> 5] | 1 << ((byte)param_2 & 0x1f);
    }
    iVar2 = _select_1050(iVar4 + 1,&local_b8,local_138,0,&local_148);
    if (iVar2 < 0) break;
    if (iVar2 != 0) {
      return 0;
    }
  }
  piVar3 = ___error();
  if (*piVar3 == 4) {
    return 0;
  }
  piVar3 = ___error();
  return -*piVar3;
}

