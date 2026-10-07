
void FUN_100757fa0(undefined8 param_1,byte param_2,ulong param_3,ulong param_4,ulong param_5,
                  char *param_6)

{
  long lVar1;
  ulong *puVar2;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  ulong uStack_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = (ulong)param_2;
  uStack_50 = param_4;
  local_48 = param_3;
  uStack_40 = param_5;
  local_18 = lVar1;
  qstrncpy((char *)&uStack_30,param_6,0x14);
  puVar2 = DAT_1011bf938;
  DAT_1011bf948 = DAT_1011bf948 + uStack_50;
  if (DAT_1011bf938 == DAT_1011bf940) {
    FUN_10075a980(&DAT_1011bf930,&local_58);
  }
  else {
    DAT_1011bf938[7] = uStack_20;
    puVar2[6] = local_28;
    puVar2[5] = uStack_30;
    puVar2[4] = local_38;
    puVar2[3] = uStack_40;
    puVar2[2] = local_48;
    puVar2[1] = uStack_50;
    *puVar2 = local_58;
    DAT_1011bf938 = DAT_1011bf938 + 8;
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

