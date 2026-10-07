
ulong FUN_10027e730(long param_1,long param_2,uint param_3,uint *param_4,int param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int local_38;
  int local_34;
  
  uVar10 = 0;
  uVar11 = 0;
  if (param_3 != 0) {
    uVar11 = 0;
    uVar12 = 0;
    do {
      if ((long)param_5 <= (long)uVar11) {
LAB_10027e947:
        *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) - (short)uVar11;
        return 0xffffffff;
      }
      local_34 = 0;
      local_38 = 0;
      iVar2 = FUN_10027e4d0(param_1,param_1 + 0x830 + uVar12 * 0x10,0x400 - (int)uVar12,&local_38,
                            &local_34);
      if (iVar2 < 0) {
        uVar12 = 0xffffffff;
        if (iVar2 == -2) {
          uVar12 = 0;
        }
        *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) - (short)uVar11;
        return uVar12;
      }
      if ((local_38 != 0) || (local_34 == 0)) {
        FUN_1008e3970("","LocalDevices",0,
                      "Unexpected descriptor while VQueuePopNEntries(): out %u, in %u");
        goto LAB_10027e947;
      }
      uVar4 = 0;
      if (0 < local_34) {
        uVar10 = local_34 - 1;
        uVar1 = (ulong)uVar10 + 1;
        uVar9 = uVar1 & 0x1fffffffe;
        iVar3 = 0;
        iVar8 = 0;
        uVar6 = 0;
        if (uVar9 != 0) {
          piVar5 = (int *)(uVar12 * 0x10 + param_1 + 0x848);
          uVar7 = (ulong)uVar10 + 1 & 0xfffffffffffffffe;
          iVar3 = 0;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + piVar5[-4];
            iVar8 = iVar8 + *piVar5;
            piVar5 = piVar5 + 8;
            uVar7 = uVar7 - 2;
            uVar6 = uVar9;
          } while (uVar7 != 0);
        }
        uVar4 = iVar3 + iVar8;
        if (uVar1 != uVar6) {
          iVar3 = (int)uVar6;
          if ((local_34 - iVar3 & 3U) != 0) {
            piVar5 = (int *)((uVar6 + uVar12) * 0x10 + param_1 + 0x838);
            iVar8 = -(local_34 - iVar3 & 3U);
            do {
              uVar4 = uVar4 + *piVar5;
              uVar6 = uVar6 + 1;
              piVar5 = piVar5 + 4;
              iVar8 = iVar8 + 1;
            } while (iVar8 != 0);
          }
          if (2 < uVar10 - iVar3) {
            piVar5 = (int *)((uVar12 + uVar6) * 0x10 + param_1 + 0x868);
            iVar3 = (local_34 + 3) - ((int)uVar6 + 3);
            do {
              uVar4 = uVar4 + piVar5[-0xc] + piVar5[-8] + piVar5[-4] + *piVar5;
              piVar5 = piVar5 + 0x10;
              iVar3 = iVar3 + -4;
            } while (iVar3 != 0);
          }
        }
      }
      if (param_3 < uVar4) {
        uVar4 = param_3;
      }
      *(int *)(param_2 + uVar11 * 8) = iVar2;
      *(uint *)(param_2 + 4 + uVar11 * 8) = uVar4;
      uVar11 = uVar11 + 1;
      uVar10 = local_34 + (int)uVar12;
      uVar12 = (ulong)uVar10;
      param_3 = param_3 - uVar4;
    } while (param_3 != 0);
    uVar11 = uVar11 & 0xffffffff;
  }
  *param_4 = uVar10;
  return uVar11;
}

