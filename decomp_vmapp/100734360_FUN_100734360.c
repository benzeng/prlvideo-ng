
bool FUN_100734360(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  bVar10 = true;
  if ((int)param_2[10] == 0) {
    pcVar3 = *(code **)(*param_1 + 0xc0);
    if (((pcVar3 == (code *)0x0) || (*param_1 != *param_2)) ||
       (iVar4 = (*pcVar3)(param_1,param_2), iVar4 == 0)) {
      puVar5 = (undefined8 *)0x0;
      if (param_3 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_10081ddd0(0x40,"../src/snlic/sn_crypto_helper_15.c",0xe6);
        if (puVar5 == (undefined8 *)0x0) {
          return false;
        }
        *(undefined4 *)(puVar5 + 7) = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        param_3 = puVar5;
      }
      bVar10 = false;
      FUN_1007353b0(param_3);
      uVar6 = FUN_100735470(param_3);
      lVar7 = FUN_100735470(param_3);
      if (lVar7 != 0) {
        pcVar3 = *(code **)(*param_1 + 0x88);
        if (((pcVar3 != (code *)0x0) && (*param_1 == *param_2)) &&
           (iVar4 = (*pcVar3)(param_1,param_2,uVar6,lVar7,param_3), iVar4 != 0)) {
          pcVar3 = *(code **)(*param_1 + 0x80);
          if (((pcVar3 != (code *)0x0) && (*param_1 == *param_2)) &&
             (iVar4 = (*pcVar3)(param_1,param_2,uVar6,lVar7,param_3), iVar4 != 0)) {
            bVar10 = (int)param_2[10] != 0;
          }
        }
      }
      if (*(int *)((long)param_3 + 0x34) == 0) {
        iVar4 = *(int *)(param_3 + 5);
        *(uint *)(param_3 + 5) = iVar4 - 1U;
        uVar1 = *(uint *)(param_3[4] + (ulong)(iVar4 - 1U) * 4);
        uVar2 = *(uint *)(param_3 + 6);
        if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
          iVar4 = *(int *)(param_3 + 3);
          uVar8 = uVar2 - uVar1;
          *(uint *)(param_3 + 3) = iVar4 - (uVar2 - uVar1);
          if (uVar8 != 0) {
            uVar9 = iVar4 + 0xfU & 0xf;
            if ((uVar8 & 1) != 0) {
              if (uVar9 == 0) {
                param_3[1] = *(undefined8 *)(param_3[1] + 0x180);
                uVar9 = 0xf;
              }
              else {
                uVar9 = uVar9 - 1;
              }
              uVar8 = uVar8 - 1;
            }
            if (uVar2 - 1 != uVar1) {
              do {
                if (uVar9 == 0) {
                  param_3[1] = *(undefined8 *)(param_3[1] + 0x180);
                  iVar4 = 0xf;
                }
                else {
                  iVar4 = uVar9 - 1;
                }
                uVar8 = uVar8 - 2;
                if (iVar4 == 0) {
                  param_3[1] = *(undefined8 *)(param_3[1] + 0x180);
                  uVar9 = 0xf;
                }
                else {
                  uVar9 = iVar4 - 1;
                }
              } while (uVar8 != 0);
            }
          }
        }
        *(uint *)(param_3 + 6) = uVar1;
        *(undefined4 *)(param_3 + 7) = 0;
      }
      else {
        *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + -1;
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_100729fd0();
      }
    }
  }
  return bVar10;
}

