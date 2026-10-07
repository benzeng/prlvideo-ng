
void FUN_10043c480(uint *param_1,uint param_2,int param_3,int param_4,ulong param_5,uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  ulong uVar8;
  uint in_R10D;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_58 [5];
  uint local_44;
  uint local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  puVar1 = (uint *)((ulong)(param_4 * param_2) + (long)param_1);
  if (param_1 < puVar1) {
    puVar3 = param_1;
    puVar7 = param_1;
    uVar8 = param_5;
    do {
      if (param_3 < 1) {
        uVar5 = (uint)puVar7;
      }
      else {
        puVar2 = puVar3;
        do {
          if (local_58[0] == 0) {
            in_R10D = *puVar2;
            local_58[4] = in_R10D;
          }
          uVar10 = *puVar2;
          uVar11 = (uint)puVar7;
          piVar6 = local_58;
          uVar5 = uVar11;
          iVar9 = local_58[0];
          if (in_R10D != uVar10) {
            if (local_58[1] == 0) {
              local_44 = uVar10;
              uVar11 = uVar10;
              uVar10 = *puVar2;
            }
            piVar6 = local_58 + 1;
            uVar5 = uVar10;
            iVar9 = local_58[1];
            if (uVar11 != uVar10) {
              uVar4 = uVar10;
              if (local_58[2] == 0) {
                local_40 = uVar10;
                uVar4 = *puVar2;
                param_6 = uVar10;
              }
              uVar5 = uVar11;
              if (param_6 == uVar4) {
                piVar6 = local_58 + 2;
                iVar9 = local_58[2];
                param_6 = uVar4;
              }
              else {
                if (local_58[3] == 0) {
                  local_3c = uVar4;
                  uVar10 = *puVar2;
                }
                else {
                  uVar10 = uVar4;
                  uVar4 = (uint)uVar8;
                }
                uVar8 = (ulong)uVar10;
                piVar6 = local_58 + 3;
                iVar9 = local_58[3];
                if (uVar4 != uVar10) goto LAB_10043c63b;
              }
            }
          }
          *piVar6 = iVar9 + 1;
          puVar2 = puVar2 + 1;
          puVar7 = (uint *)(ulong)uVar5;
        } while (puVar2 < puVar3 + param_3);
      }
      puVar3 = (uint *)((long)puVar3 + (ulong)param_2);
      puVar7 = (uint *)(ulong)uVar5;
    } while (puVar3 < puVar1);
  }
LAB_10043c63b:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  FUN_10043df60(param_1,param_2,param_3,param_4,param_5);
  return;
}

