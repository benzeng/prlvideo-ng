
void FUN_1000b5140(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar6 = *param_1;
  uVar4 = (param_1[1] - lVar6 >> 3) + 1;
  if (uVar4 >> 0x3d == 0) {
    local_40 = param_1 + 2;
    if ((ulong)(param_1[2] - lVar6 >> 3) < 0xfffffffffffffff) {
      uVar8 = param_1[2] - lVar6 >> 2;
      if (uVar8 < uVar4) {
        uVar8 = uVar4;
      }
    }
    else {
      uVar8 = 0x1fffffffffffffff;
    }
    lVar5 = param_1[1];
    lVar7 = lVar5 - lVar6 >> 3;
    local_48 = 0;
    pvVar2 = (void *)0x0;
    if (uVar8 != 0) {
      pvVar2 = operator_new(uVar8 * 8);
    }
    pvVar3 = (void *)((long)pvVar2 + lVar7 * 8);
    piVar1 = (int *)*param_2;
    *(int **)((long)pvVar2 + lVar7 * 8) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      lVar6 = *param_1;
      lVar5 = param_1[1];
    }
    local_50 = lVar5;
    if (lVar5 != lVar6) {
      do {
        piVar1 = *(int **)(lVar5 + -8);
        lVar5 = lVar5 + -8;
        *(int **)((long)pvVar3 + -8) = piVar1;
        if (1 < *piVar1 + 1U) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          local_31 = *piVar1 != 0;
          UNLOCK();
        }
        pvVar3 = (void *)((long)pvVar3 + -8);
      } while (lVar6 != lVar5);
      lVar5 = *param_1;
      local_50 = param_1[1];
    }
    *param_1 = (long)pvVar3;
    param_1[1] = (long)pvVar2 + lVar7 * 8 + 8;
    local_48 = param_1[2];
    param_1[2] = (long)((long)pvVar2 + uVar8 * 8);
    local_60 = lVar5;
    local_58 = lVar5;
    FUN_1000b52b0(&local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}

