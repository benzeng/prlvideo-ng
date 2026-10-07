
void FUN_10002ddb0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar5 = param_2[1] - *param_2 >> 3;
  if (uVar5 != 0) {
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar3 = operator_new(param_2[1] - *param_2);
    param_1[1] = puVar3;
    *param_1 = puVar3;
    param_1[2] = puVar3 + uVar5;
    puVar1 = (undefined8 *)param_2[1];
    for (puVar4 = (undefined8 *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      piVar2 = (int *)*puVar4;
      *puVar3 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      puVar3 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = puVar3;
    }
  }
  return;
}

