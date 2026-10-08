
undefined8 FUN_100598900(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  
  if (DAT_10226c7d8 == 0) {
    DAT_10226c7d8 = FUN_1000871d0("Actions::ActionType",0xffffffffffffffff,1);
  }
  iVar1 = DAT_10226c7d8;
  if (DAT_102274448 == 0) {
    DAT_102274448 = FUN_100597d90("CShortcutInfo",0xffffffffffffffff,1);
  }
  iVar2 = DAT_102274448;
  *param_3 = param_2;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(int *)(param_3 + 3) = iVar2;
  *(undefined4 *)((long)param_3 + 0x1c) = 0;
  param_3[4] = FUN_100598a00;
  param_3[5] = FUN_100598a60;
  param_3[6] = FUN_100598ad0;
  param_3[7] = FUN_100598b20;
  param_3[8] = FUN_100598b50;
  param_3[9] = FUN_100598bb0;
  param_3[10] = FUN_100598bd0;
  param_3[0xb] = FUN_100598bf0;
  param_3[0xc] = FUN_100598c10;
  param_3[0xd] = FUN_100598c30;
  return 0x100598c01;
}

