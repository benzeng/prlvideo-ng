
uint FUN_10027dfc0(long param_1)

{
  long lVar1;
  short *psVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint local_9c;
  uint local_7c;
  int local_68 [2];
  long local_60;
  uint local_58;
  int local_54;
  undefined4 local_4c;
  int local_48 [2];
  long local_40;
  int local_38;
  int local_34;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_40 = param_1 + 0xa8f0;
  local_4c = 0;
  lVar1 = param_1 + 0x18;
  FUN_10027e970(lVar1);
  local_7c = 0;
  local_9c = 0;
LAB_10027e063:
  do {
    while( true ) {
      local_34 = 0;
      local_38 = 0;
      local_60 = param_1 + 0x848;
      iVar4 = FUN_10027e4d0(lVar1,param_1 + 0x848,0x400,&local_38,&local_34);
      local_68[0] = iVar4;
      if (-1 < iVar4) break;
      iVar4 = FUN_10027e990(lVar1);
      if (iVar4 == 0) {
        if (local_48[0] == 0) goto LAB_10027e2c5;
        FUN_10027ded0(param_1,local_48,&local_4c,local_7c);
      }
      else {
        FUN_10027e970(lVar1);
      }
    }
    uVar12 = local_38 + local_34;
    iVar13 = 0;
    if (0 < (int)uVar12) {
      uVar9 = (ulong)(uint)(local_38 + -1 + local_34) + 1;
      uVar10 = uVar9 & 0x1fffffffe;
      iVar13 = 0;
      iVar7 = 0;
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar5 = (ulong)(uint)(local_38 + -1 + local_34) + 1 & 0xfffffffffffffffe;
        iVar13 = 0;
        iVar7 = 0;
        piVar11 = (int *)(param_1 + 0x860);
        do {
          iVar13 = iVar13 + piVar11[-4];
          iVar7 = iVar7 + *piVar11;
          piVar11 = piVar11 + 8;
          uVar5 = uVar5 - 2;
          uVar6 = uVar10;
        } while (uVar5 != 0);
      }
      iVar13 = iVar13 + iVar7;
      if (uVar9 != uVar6) {
        iVar7 = (int)uVar6;
        if ((uVar12 - iVar7 & 3) != 0) {
          piVar11 = (int *)(uVar6 * 0x10 + param_1 + 0x850);
          iVar8 = -(uVar12 - iVar7 & 3);
          do {
            iVar13 = iVar13 + *piVar11;
            uVar6 = uVar6 + 1;
            piVar11 = piVar11 + 4;
            iVar8 = iVar8 + 1;
          } while (iVar8 != 0);
        }
        if (2 < (uint)((local_38 + -1 + local_34) - iVar7)) {
          piVar11 = (int *)(uVar6 * 0x10 + param_1 + 0x880);
          iVar7 = (local_38 + 3 + local_34) - ((int)uVar6 + 3);
          do {
            iVar13 = iVar13 + piVar11[-0xc] + piVar11[-8] + piVar11[-4] + *piVar11;
            piVar11 = piVar11 + 0x10;
            iVar7 = iVar7 + -4;
          } while (iVar7 != 0);
        }
      }
    }
    local_58 = uVar12;
    local_54 = iVar13;
    if (0x1ff < local_48[0] + uVar12) {
      if (0x1ff < uVar12) {
        iVar7 = FUN_1008e38f0(&DAT_101115d1c);
        if (iVar7 != 0) {
          FUN_1008e3970("","LocalDevices",0,"virtio: too fragmented tx: %d chunks",uVar12);
        }
        if ((*(int *)(param_1 + 0x20) != 0) && (*(uint *)(param_1 + 0x1c) != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          uVar6 = (ulong)*(ushort *)(lVar3 + 2) % (ulong)*(uint *)(param_1 + 0x1c);
          *(int *)(lVar3 + 4 + uVar6 * 8) = iVar4;
          *(int *)(lVar3 + 8 + uVar6 * 8) = iVar13;
          psVar2 = (short *)(*(long *)(param_1 + 0x38) + 2);
          *psVar2 = *psVar2 + 1;
        }
        goto LAB_10027e063;
      }
      FUN_10027ded0(param_1,local_48,&local_4c,local_7c);
    }
    iVar7 = FUN_10027dc80(param_1,local_68,local_48);
    local_9c = local_9c + iVar7;
    *(int *)(param_1 + 0x98f0 + (ulong)(local_7c & 0x1ff) * 8) = iVar4;
    *(int *)(param_1 + 0x98f4 + (ulong)(local_7c & 0x1ff) * 8) = iVar13;
    local_7c = local_7c + 1;
    if (0x7ffff < local_9c) {
LAB_10027e2c5:
      FUN_10027ded0(param_1,local_48,&local_4c,local_7c);
      return local_9c;
    }
  } while( true );
}

