
void FUN_10043c930(short *param_1,uint param_2,int param_3,int param_4,undefined8 param_5)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short unaff_BX;
  int *piVar5;
  short in_R10W;
  int iVar6;
  short sVar7;
  bool bVar8;
  short local_5c;
  short local_5a;
  int local_58 [6];
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  psVar2 = (short *)((ulong)(param_4 * param_2) + (long)param_1);
  if (param_1 < psVar2) {
    local_5c = (short)param_2;
    psVar4 = param_1;
    local_5a = local_5c;
    do {
      if (0 < param_3) {
        psVar3 = psVar4;
        do {
          if (local_58[0] == 0) {
            in_R10W = *psVar3;
            local_40 = in_R10W;
          }
          sVar1 = *psVar3;
          piVar5 = local_58;
          iVar6 = local_58[0];
          if (in_R10W != sVar1) {
            sVar7 = sVar1;
            if (local_58[1] == 0) {
              local_3e = sVar1;
              sVar7 = *psVar3;
              unaff_BX = sVar1;
            }
            if (unaff_BX == sVar7) {
              piVar5 = local_58 + 1;
              iVar6 = local_58[1];
              unaff_BX = sVar7;
            }
            else {
              if (local_58[2] == 0) {
                local_3c = sVar7;
                local_5a = sVar7;
                sVar7 = *psVar3;
              }
              if (local_5a == sVar7) {
                piVar5 = local_58 + 2;
                iVar6 = local_58[2];
                local_5a = sVar7;
              }
              else {
                if (local_58[3] == 0) {
                  local_3a = sVar7;
                  local_5c = sVar7;
                  sVar7 = *psVar3;
                }
                bVar8 = local_5c != sVar7;
                piVar5 = local_58 + 3;
                iVar6 = local_58[3];
                local_5c = sVar7;
                if (bVar8) goto LAB_10043cb1c;
              }
            }
          }
          *piVar5 = iVar6 + 1;
          psVar3 = psVar3 + 1;
        } while (psVar3 < psVar4 + param_3);
      }
      psVar4 = (short *)((long)psVar4 + (ulong)param_2);
    } while (psVar4 < psVar2);
  }
LAB_10043cb1c:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  FUN_10043f040(param_1,param_2,param_3,param_4,param_5);
  return;
}

