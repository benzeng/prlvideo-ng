
void FUN_1002d04d0(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar3 = (ulong)param_2;
  FUN_1002d60c0(param_1[uVar3 + 0xc],0);
  if (*(int *)(param_1[uVar3 + 0xc] + 0x18) == 0) {
    lVar2 = param_1[10];
    local_28 = *(QArrayData **)(param_1[uVar3 + 0xc] + 0x20);
    if (1 < *(int *)local_28 + 1U) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + 1;
      local_1b = *(int *)local_28 != 0;
      UNLOCK();
    }
    FUN_1002c3a00(lVar2,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  else {
    uVar1 = *(uint *)(param_1[8] + 0x1064 + uVar3 * 4);
    if ((uVar1 & 2) == 0) {
      *(uint *)(param_1[8] + 0x1064 + uVar3 * 4) = uVar1 | 2;
                    /* WARNING: Could not recover jumptable at 0x0001002d052b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1,0x10);
      return;
    }
  }
  return;
}

