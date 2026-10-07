
void FUN_10043c6c0(undefined2 *param_1,uint param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *local_70;
  undefined2 local_60;
  undefined1 local_5e;
  int local_58 [4];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_40 = 0;
  local_48 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  puVar6 = (undefined2 *)((ulong)(param_4 * param_2) + (long)param_1);
  iVar10 = 0;
  iVar1 = 0;
  iVar2 = 0;
  iVar3 = 0;
  if (param_1 < puVar6) {
    local_70 = param_1;
    do {
      if (0 < param_3) {
        puVar9 = local_70;
        do {
          iVar10 = local_58[0];
          if (local_58[0] == 0) {
            local_48 = CONCAT62(CONCAT51(local_48._3_5_,*(undefined1 *)(puVar9 + 1)),*puVar9);
          }
          iVar1 = _memcmp(&local_48,puVar9,3);
          if (iVar1 == 0) {
            piVar7 = local_58;
            iVar3 = iVar10;
          }
          else {
            iVar1 = local_58[1];
            if (local_58[1] == 0) {
              local_48 = CONCAT35(CONCAT21(local_48._6_2_,*(undefined1 *)(puVar9 + 1)),
                                  CONCAT23(*puVar9,(undefined3)local_48));
            }
            iVar2 = _memcmp((void *)((long)&local_48 + 3),puVar9,3);
            if (iVar2 == 0) {
              piVar7 = local_58 + 1;
              iVar3 = iVar1;
            }
            else {
              iVar2 = local_58[2];
              if (local_58[2] == 0) {
                local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)(puVar9 + 1));
                local_48 = CONCAT26(*puVar9,(undefined6)local_48);
              }
              iVar3 = _memcmp((void *)((long)&local_48 + 6),puVar9,3);
              if (iVar3 == 0) {
                piVar7 = local_58 + 2;
                iVar3 = iVar2;
              }
              else {
                iVar3 = local_58[3];
                if (local_58[3] == 0) {
                  local_40 = CONCAT13(*(undefined1 *)(puVar9 + 1),
                                      CONCAT21(*puVar9,(undefined1)local_40));
                }
                iVar4 = _memcmp((void *)((long)&local_40 + 1),puVar9,3);
                piVar7 = local_58 + 3;
                if (iVar4 != 0) goto LAB_10043c89a;
              }
            }
          }
          *piVar7 = iVar3 + 1;
          puVar9 = (undefined2 *)((long)puVar9 + 3);
        } while (puVar9 < (undefined2 *)((long)param_3 * 3 + (long)local_70));
      }
      local_70 = (undefined2 *)((long)local_70 + (ulong)param_2);
    } while (local_70 < puVar6);
    iVar10 = local_58[0];
    iVar1 = local_58[1];
    iVar2 = local_58[2];
    iVar3 = local_58[3];
  }
LAB_10043c89a:
  uVar5 = 2;
  if (iVar2 <= *(int *)((ulong)local_58 | (ulong)(iVar10 < iVar1) * 4)) {
    uVar5 = (uint)(iVar10 < iVar1);
  }
  uVar8 = 3;
  if (iVar3 <= local_58[uVar5]) {
    uVar8 = (ulong)uVar5;
  }
  local_5e = *(undefined1 *)((long)&local_48 + uVar8 * 3 + 2);
  local_60 = *(undefined2 *)((long)&local_48 + uVar8 * 3);
  FUN_10043e840(param_1,param_2,param_3,param_4,param_5,&local_60);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

