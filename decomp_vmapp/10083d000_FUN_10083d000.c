
void FUN_10083d000(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_38;
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar2;
  _memcpy(param_1,&DAT_100b53668,0x1048);
  lVar4 = 0x48;
  if (param_2 < 0x49) {
    lVar4 = (long)param_2;
  }
  puVar3 = param_3 + lVar4;
  lVar4 = 0;
  puVar8 = param_3;
  do {
    uVar1 = *puVar8;
    puVar5 = puVar8 + 1;
    if (puVar3 <= puVar8 + 1) {
      puVar5 = param_3;
    }
    puVar6 = puVar5 + 1;
    if (puVar3 <= puVar5 + 1) {
      puVar6 = param_3;
    }
    puVar7 = puVar6 + 1;
    if (puVar3 <= puVar6 + 1) {
      puVar7 = param_3;
    }
    puVar8 = puVar7 + 1;
    if (puVar3 <= puVar7 + 1) {
      puVar8 = param_3;
    }
    param_1[lVar4] = param_1[lVar4] ^ CONCAT31(CONCAT21(CONCAT11(uVar1,*puVar5),*puVar6),*puVar7);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x12);
  local_38 = 0;
  FUN_10083d2a0(&local_38,param_1);
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[2] = (undefined4)local_38;
  param_1[3] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[4] = (undefined4)local_38;
  param_1[5] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[6] = (undefined4)local_38;
  param_1[7] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[8] = (undefined4)local_38;
  param_1[9] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[10] = (undefined4)local_38;
  param_1[0xb] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[0xc] = (undefined4)local_38;
  param_1[0xd] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[0xe] = (undefined4)local_38;
  param_1[0xf] = local_38._4_4_;
  FUN_10083d2a0(&local_38,param_1);
  param_1[0x10] = (undefined4)local_38;
  param_1[0x11] = local_38._4_4_;
  lVar4 = 0;
  do {
    FUN_10083d2a0(&local_38,param_1);
    param_1[lVar4 + 0x12] = (undefined4)local_38;
    param_1[lVar4 + 0x13] = local_38._4_4_;
    lVar4 = lVar4 + 2;
  } while (lVar4 < 0x400);
  if (lVar2 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

