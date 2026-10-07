
undefined1 FUN_1000f7ab0(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  QArrayData *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined1 local_81;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar9;
  FUN_100761480(local_190);
  QString::toUtf8();
  cVar1 = FUN_100761540(local_190,local_198 + *(long *)(local_198 + 0x10),0,0,0,0,0);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_81 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_1000f7b57;
    }
    QArrayData::deallocate(local_198,1,8);
  }
LAB_1000f7b57:
  if (cVar1 == '\0') {
    uVar7 = 0;
    FUN_1008e3970("","vm",0,"Failed to open file");
  }
  else {
    local_a8 = 0x1000007feedfacf;
    local_a0 = 0x400000003;
    iVar2 = (int)((ulong)(param_3[1] - *param_3) >> 3);
    local_98 = (uint)*(ushort *)(param_1 + 8) + iVar2 * -0x55555555;
    iVar8 = (uint)*(ushort *)(param_1 + 8) * 0xe0;
    local_94 = iVar8 + iVar2 * 0x18;
    local_90 = 0xffffffff;
    lVar4 = FUN_100761880(local_190,FUN_100761810,0,&local_a8,0x20);
    if (lVar4 == 0x20) {
      uVar3 = iVar8 + 0x101f + iVar2 * 0x18 & 0xfffff000;
      local_80 = 0x19;
      local_7c = 0x48;
      local_70 = 0;
      local_78 = 0;
      local_48 = 7;
      local_44 = 7;
      local_40 = 0;
      local_3c = 0xffffffff;
      local_58 = 0;
      uVar6 = (ulong)uVar3;
      lVar9 = *param_3;
      local_50 = uVar6;
      if (lVar9 != param_3[1]) {
        local_58 = 0;
        do {
          local_68 = *(undefined8 *)(lVar9 + 8);
          local_60 = (ulong)*(uint *)(lVar9 + 0x10);
          local_58 = local_50 + local_58;
          local_50 = (ulong)*(uint *)(lVar9 + 0x10);
          lVar4 = FUN_100761880(local_190,FUN_100761810,0,&local_80,0x48);
          if (lVar4 != 0x48) {
            uVar7 = 0;
            FUN_1008e3970("","vm",0,"Failed to write segment load command");
            lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1000f8066;
          }
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != param_3[1]);
      }
      local_188 = 4;
      local_184 = 0xe0;
      local_180 = 7;
      local_17c = 0x2c;
      local_178 = 4;
      local_174 = 0x2a;
      local_c8 = 9;
      local_c4 = 6;
      local_c0 = 6;
      local_bc = 4;
      if (*(short *)(param_1 + 8) != 0) {
        puVar10 = (undefined8 *)(param_1 + 0x28);
        uVar13 = 0;
        do {
          if (*(short *)((long)puVar10 + 0x222) == 0) {
            ___bzero(&local_170,0xb8);
          }
          else {
            local_170 = puVar10[1];
            local_168 = puVar10[4];
            local_160 = puVar10[2];
            uStack_158 = puVar10[3];
            local_150 = puVar10[8];
            local_148 = puVar10[7];
            local_140 = puVar10[6];
            local_138 = puVar10[5];
            local_130 = puVar10[9];
            uStack_128 = puVar10[10];
            local_120 = puVar10[0xb];
            uStack_118 = puVar10[0xc];
            local_110 = puVar10[0xd];
            uStack_108 = puVar10[0xe];
            local_100 = *(undefined4 *)(puVar10 + 0xf);
            uStack_fc = *(undefined4 *)((long)puVar10 + 0x7c);
            uStack_f8 = *(undefined4 *)(puVar10 + 0x10);
            uStack_f4 = *(undefined4 *)((long)puVar10 + 0x84);
            local_f0 = *puVar10;
            local_e8 = puVar10[0x11];
            local_e0 = (ulong)*(ushort *)(puVar10 + 0x1a);
            local_d8 = (ulong)*(ushort *)(puVar10 + 0x2c);
            local_d0 = (ulong)*(ushort *)(puVar10 + 0x32);
          }
          if ((*(short *)(param_1 + 0xb94a) == 0) || (uVar13 != *(ushort *)(param_1 + 10))) {
            local_b8 = 0;
            local_b0 = 0;
          }
          else {
            local_b8 = *(undefined2 *)(param_1 + 0xc);
            local_b0 = *(undefined8 *)(param_1 + 0xb960);
          }
          local_b6 = (undefined2)uVar13;
          local_b4 = 0;
          lVar9 = FUN_100761880(local_190,FUN_100761810,0,&local_188,0xe0);
          if (lVar9 != 0xe0) {
            uVar7 = 0;
            FUN_1008e3970("","vm",0,"Failed to write context load command");
            lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
            goto LAB_1000f8066;
          }
          uVar13 = uVar13 + 1;
          puVar10 = puVar10 + 0xb7;
        } while (uVar13 < *(ushort *)(param_1 + 8));
      }
      uVar5 = FUN_1007616e0(local_190,uVar6,0);
      lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (uVar5 == uVar6) {
        if (*param_3 != param_3[1]) {
          puVar11 = (uint *)(*param_3 + 0x10);
          do {
            uVar3 = *puVar11;
            uVar6 = FUN_100761880(local_190,FUN_100761810,0,*(undefined8 *)(puVar11 + -4),
                                  (ulong)uVar3);
            if (uVar3 != uVar6) {
              uVar7 = 0;
              FUN_1008e3970("","vm",0,"Failed to write segment %p..%p",*(long *)(puVar11 + -4),
                            ((ulong)*puVar11 - 1) + *(long *)(puVar11 + -4));
              goto LAB_1000f8066;
            }
            puVar12 = puVar11 + 2;
            puVar11 = puVar11 + 6;
          } while (puVar12 != (uint *)param_3[1]);
        }
        uVar7 = 1;
        FUN_1007614d0(local_190);
      }
      else {
        uVar7 = 0;
        FUN_1008e3970("","vm",0,"Failed to seek to sections start %x",uVar3);
      }
    }
    else {
      uVar7 = 0;
      FUN_1008e3970("","vm",0,"Failed to write MachO header");
    }
  }
LAB_1000f8066:
  FUN_100761500(local_190);
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

