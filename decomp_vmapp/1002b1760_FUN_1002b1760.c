
undefined8 FUN_1002b1760(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint local_1038 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar4 = 0;
  if (param_3 != 0) {
    uVar10 = 0;
    do {
      iVar14 = (int)uVar10;
      uVar13 = param_3 - iVar14;
      uVar1 = uVar13;
      if (0x400 < uVar13) {
        uVar1 = 0x400;
      }
      _memcpy(local_1038,(void *)(param_1 + uVar10 * 4),(ulong)uVar1 << 2);
      iVar2 = (**(code **)(**(long **)(DAT_1011c3698 + 0x1950) + 0xf0))
                        (*(long **)(DAT_1011c3698 + 0x1950),local_1038,uVar1);
      if (iVar2 != 0) {
        FUN_1008e3970("","LocalDevices",0,"VGPU VgpuPinPages failed (%x)");
        uVar4 = 1;
        break;
      }
      if (uVar1 != 0) {
        iVar2 = (param_3 + 0x3ff) - iVar14;
        uVar9 = 0x400;
        if (0x400 < uVar13) {
          uVar9 = uVar13;
        }
        uVar12 = (ulong)(iVar2 - uVar9) + 1;
        uVar11 = uVar12 & 0x1fffffffe;
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar9 = 0x400;
          if (0x400 < uVar13) {
            uVar9 = uVar13;
          }
          uVar7 = (ulong)(iVar2 - uVar9) + 1 & 0xfffffffffffffffe;
          puVar3 = local_1038 + 1;
          do {
            uVar9 = *puVar3;
            *(ulong *)(param_2 + uVar10 * 8) = (ulong)puVar3[-1];
            *(ulong *)(param_2 + (ulong)((int)uVar10 + 1) * 8) = (ulong)uVar9;
            puVar3 = puVar3 + 2;
            uVar10 = (ulong)((int)uVar10 + 2);
            uVar7 = uVar7 - 2;
            uVar8 = uVar11;
          } while (uVar7 != 0);
        }
        if (uVar12 != uVar8) {
          uVar9 = 0x400;
          if (0x400 < uVar13) {
            uVar9 = uVar13;
          }
          iVar5 = (int)uVar8;
          if ((((param_3 + 0x400) - iVar14) - uVar9 & 1) != 0) {
            *(ulong *)(param_2 + (ulong)(uint)(iVar5 + iVar14) * 8) = (ulong)local_1038[uVar8];
            uVar8 = uVar8 + 1;
          }
          if (iVar2 - uVar9 != iVar5) {
            puVar3 = local_1038 + uVar8 + 1;
            uVar9 = iVar14 + (int)uVar8;
            if (uVar13 < 0x401) {
              uVar13 = 0x400;
            }
            uVar6 = iVar14 + 1 + (int)uVar8;
            do {
              *(ulong *)(param_2 + (ulong)uVar9 * 8) = (ulong)puVar3[-1];
              *(ulong *)(param_2 + (ulong)uVar6 * 8) = (ulong)*puVar3;
              puVar3 = puVar3 + 2;
              uVar9 = uVar9 + 2;
              uVar6 = uVar6 + 2;
            } while ((param_3 + 0x401) - uVar13 != uVar6);
          }
        }
      }
      uVar4 = 0;
      uVar10 = (ulong)(uVar1 + iVar14);
    } while (uVar1 + iVar14 < param_3);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

