
void FUN_100522780(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar4 = param_2[1] - *param_2 >> 3;
  if (uVar4 != 0) {
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    plVar3 = operator_new(param_2[1] - *param_2);
    param_1[1] = plVar3;
    *param_1 = plVar3;
    param_1[2] = plVar3 + uVar4;
    plVar1 = (long *)param_2[1];
    for (param_2 = (long *)*param_2; param_2 != plVar1; param_2 = param_2 + 1) {
      lVar2 = *param_2;
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      plVar3 = (long *)(param_1[1] + 8);
      param_1[1] = plVar3;
    }
  }
  return;
}

