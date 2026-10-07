
void FUN_1005473c0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_10111d918;
  if (*(int *)(param_1 + 8) != 0) {
    if ((*(int *)(param_1 + 8) == 2) && (*(int *)(param_1 + 7) != 0)) {
      uVar3 = 0;
      do {
        if (*(int *)(param_1[6] + (ulong)uVar3 * 4) != 0) {
          uVar2 = *(int *)((long)param_1 + 0x3c) << 5;
          lVar4 = (ulong)uVar2 * (ulong)uVar3;
          uVar1 = (int)param_1[2] - (int)lVar4;
          if (lVar4 + (ulong)uVar2 <= (ulong)param_1[2]) {
            uVar1 = uVar2;
          }
          (**(code **)(*(long *)param_1[5] + 0x40))
                    ((long *)param_1[5],lVar4,uVar1,param_1[1] + lVar4);
          if (*(int *)(param_1 + 8) != 2) break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 7));
    }
    if ((void *)param_1[6] != (void *)0x0) {
      operator_delete__((void *)param_1[6]);
      return;
    }
  }
  return;
}

