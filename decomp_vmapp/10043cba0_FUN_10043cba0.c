
void FUN_10043cba0(byte *param_1,uint param_2,uint param_3,int param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  byte in_R10B;
  int iVar9;
  bool bVar10;
  byte local_4e;
  byte local_4d;
  int local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  if (param_4 * param_2 != 0) {
    local_4e = (byte)param_2;
    pbVar3 = param_1;
    local_4d = local_4e;
    uVar4 = param_3;
    do {
      if ((int)param_3 < 1) {
        bVar7 = (byte)uVar4;
      }
      else {
        pbVar2 = pbVar3;
        do {
          if (local_48[0] == 0) {
            in_R10B = *pbVar2;
          }
          bVar1 = *pbVar2;
          uVar8 = (uint)bVar1;
          if (in_R10B == bVar1) {
            piVar6 = local_48;
            iVar9 = local_48[0];
            bVar7 = (byte)uVar4;
          }
          else {
            if (local_48[1] == 0) {
              bVar1 = *pbVar2;
            }
            else {
              uVar8 = uVar4 & 0xff;
            }
            bVar7 = (byte)uVar8;
            if (uVar8 == bVar1) {
              piVar6 = local_48 + 1;
              iVar9 = local_48[1];
              bVar7 = bVar1;
            }
            else {
              if (local_48[2] == 0) {
                local_4d = bVar1;
                bVar1 = *pbVar2;
              }
              if (local_4d == bVar1) {
                piVar6 = local_48 + 2;
                iVar9 = local_48[2];
                local_4d = bVar1;
              }
              else {
                bVar5 = bVar1;
                if (local_48[3] == 0) {
                  bVar5 = *pbVar2;
                  local_4e = bVar1;
                }
                bVar10 = local_4e != bVar5;
                piVar6 = local_48 + 3;
                iVar9 = local_48[3];
                local_4e = bVar5;
                if (bVar10) goto LAB_10043cd72;
              }
            }
          }
          *piVar6 = iVar9 + 1;
          pbVar2 = pbVar2 + 1;
          uVar4 = (uint)bVar7;
        } while (pbVar2 < pbVar3 + (int)param_3);
      }
      pbVar3 = pbVar3 + param_2;
      uVar4 = (uint)bVar7;
    } while (pbVar3 < param_1 + param_4 * param_2);
  }
LAB_10043cd72:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  FUN_10043f940(param_1,param_2,param_3,param_4,param_5);
  return;
}

