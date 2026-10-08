
void FUN_100346c90(long param_1,void *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 auStack_268 [34];
  undefined4 local_158;
  undefined8 local_150 [34];
  undefined4 local_40;
  long local_38;
  
  bVar6 = 0;
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
    if (*(int *)((long)param_2 + 0x40) == 3) {
      lVar3 = QDateTime::currentMSecsSinceEpoch();
      if (lVar3 - *(long *)(*(long *)(param_1 + 0x1a0) + 0x10) < 1000) {
        _memcpy((void *)(param_1 + 0x3c),param_2,0x114);
        FUN_100346d70(param_1);
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x34);
    _memcpy(local_150,param_2,0x114);
    puVar4 = local_150;
    puVar5 = auStack_268;
    for (lVar3 = 0x22; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
      puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
    }
    local_158 = local_40;
    FUN_1008307d0(param_1,uVar2);
  }
  *(undefined8 *)(param_1 + 0x34) = 0;
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

