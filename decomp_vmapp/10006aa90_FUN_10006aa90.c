
void FUN_10006aa90(long *param_1,undefined8 *param_2)

{
  long lVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  undefined1 local_29;
  
  lVar7 = *param_1;
  uVar6 = (param_1[1] - lVar7 >> 4) + 1;
  if (uVar6 >> 0x3c == 0) {
    local_38 = param_1 + 2;
    if ((ulong)(param_1[2] - lVar7 >> 4) < 0x7ffffffffffffff) {
      uVar5 = param_1[2] - lVar7 >> 3;
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
    }
    else {
      uVar5 = 0xfffffffffffffff;
    }
    lVar1 = param_1[1];
    local_40 = 0;
    pvVar3 = (void *)0x0;
    if (uVar5 != 0) {
      pvVar3 = operator_new(uVar5 << 4);
    }
    lVar7 = (lVar1 - lVar7 >> 4) * 0x10;
    pvVar4 = (void *)((long)pvVar3 + lVar7);
    piVar2 = (int *)*param_2;
    *(int **)((long)pvVar3 + lVar7) = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
    }
    piVar2 = (int *)param_2[1];
    *(int **)((long)pvVar3 + lVar7 + 8) = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
    }
    local_58 = *param_1;
    lStack_48 = param_1[1];
    if (lStack_48 != local_58) {
      do {
        piVar2 = *(int **)(lStack_48 + -0x10);
        *(int **)((long)pvVar4 + -0x10) = piVar2;
        if (1 < *piVar2 + 1U) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          local_29 = *piVar2 != 0;
          UNLOCK();
        }
        piVar2 = *(int **)(lStack_48 + -8);
        lStack_48 = lStack_48 + -0x10;
        *(int **)((long)pvVar4 + -8) = piVar2;
        if (1 < *piVar2 + 1U) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          local_29 = *piVar2 != 0;
          UNLOCK();
        }
        pvVar4 = (void *)((long)pvVar4 + -0x10);
      } while (local_58 != lStack_48);
      local_58 = *param_1;
      lStack_48 = param_1[1];
    }
    *param_1 = (long)pvVar4;
    param_1[1] = lVar7 + 0x10 + (long)pvVar3;
    local_40 = param_1[2];
    param_1[2] = (long)(uVar5 * 0x10 + (long)pvVar3);
    local_50 = local_58;
    FUN_10006ac30(&local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_length_error();
}

