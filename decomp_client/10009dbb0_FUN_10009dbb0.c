
void FUN_10009dbb0(long param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  if (0xf < param_4) {
    piVar6 = *(int **)(*param_3 + 0x10);
    if (*piVar6 == 1) {
      piVar7 = (int *)0x0;
      if (*param_3 != 0) {
        piVar7 = piVar6;
      }
      uVar11 = (ulong)(uint)piVar7[3];
      if (uVar11 == 0) {
        bVar15 = false;
      }
      else if (param_4 < uVar11 + 0x10) {
        bVar15 = false;
      }
      else if (*(uint *)((long)piVar7 + uVar11) < 0xc) {
        bVar15 = false;
      }
      else {
        uVar14 = (ulong)*(uint *)(uVar11 + 4 + (long)piVar7);
        if (uVar14 == 0) {
          bVar15 = false;
        }
        else {
          uVar13 = 0;
          piVar10 = (int *)(*(uint *)(uVar11 + 8 + (long)piVar7) + uVar11 + (long)piVar7);
          do {
            if ((int *)((long)piVar7 + param_4) < piVar10 + 2) {
              bVar15 = false;
              break;
            }
            uVar2 = piVar10[1];
            piVar1 = (int *)((ulong)uVar2 + 8 + (long)piVar10);
            if ((int *)((long)piVar7 + param_4) < piVar1) {
              bVar15 = false;
              break;
            }
            if (*piVar10 == 1) {
              sVar12 = 0x7f;
              if (uVar2 < 0x80) {
                sVar12 = (ulong)uVar2;
              }
              _memcpy(local_b8,piVar10 + 2,sVar12);
              local_b8[sVar12] = 0;
              bVar15 = sVar12 - 1 < 0x7f;
              break;
            }
            uVar13 = uVar13 + 1;
            bVar15 = false;
            piVar10 = piVar1;
          } while (uVar13 < uVar14);
        }
      }
      if (((0x17 < param_4) && (piVar6[2] == 1)) && (param_4 = param_4 - 0x18, 3 < param_4)) {
        if (bVar15) {
          lVar8 = FUN_10009dda0(param_1,local_b8);
          if (lVar8 != 0) {
            FUN_10009ea40(lVar8,param_2,piVar6 + 6,param_4,piVar6[4] != 0,piVar6[5] != 0);
          }
        }
        else if ((0x1f < param_4) && (piVar6[6] == 0xc)) {
          local_c0 = param_2;
          puVar9 = (uint *)FUN_10009ebe0(param_1 + 0x90,&local_c0);
          uVar2 = piVar6[9];
          uVar3 = piVar6[10];
          uVar4 = *puVar9;
          puVar9 = (uint *)FUN_10009ebe0(param_1 + 0x90,&local_c0);
          *puVar9 = ~uVar3 & (uVar2 | uVar4);
          FUN_10009e010(param_1);
        }
      }
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

