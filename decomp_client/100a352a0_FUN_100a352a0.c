
void FUN_100a352a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  long ****pppplVar1;
  int iVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  undefined4 uVar5;
  long lVar6;
  long *****ppppplVar7;
  long ****local_78;
  long ****local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  if (0x23 < param_4) {
    local_40 = *(undefined4 *)(param_3 + 4);
    local_48 = param_3[3];
    local_50 = param_3[2];
    local_60 = *param_3;
    local_58 = param_3[1];
    local_78 = (long ****)&local_78;
    local_68 = 0;
    local_70 = local_78;
    uVar5 = FUN_100a35d10(param_1,(long)param_3 + 0x24,param_4 - 0x24,local_78);
    local_50 = CONCAT44(local_50._4_4_,uVar5);
    FUN_100a36910(param_1,param_2,&local_60,&local_78);
    if (local_68 != 0) {
      pppplVar3 = (long ****)*local_70;
      pppplVar3[1] = local_78[1];
      *local_78[1] = (long **)pppplVar3;
      local_68 = 0;
      ppppplVar7 = (long *****)local_70;
      while (ppppplVar7 != &local_78) {
        ppppplVar4 = (long *****)ppppplVar7[1];
        pppplVar3 = ppppplVar7[2];
        if (pppplVar3 != (long ****)0x0) {
          LOCK();
          pppplVar1 = pppplVar3 + 1;
          iVar2 = *(int *)pppplVar1;
          *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (*(code *)(*pppplVar3)[2])();
          }
        }
        operator_delete(ppppplVar7);
        ppppplVar7 = ppppplVar4;
      }
    }
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar6 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

