
void FUN_100a36ca0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = (long)param_3 - (long)param_2;
  pvVar1 = (void *)*param_1;
  uVar6 = param_1[2];
  if (uVar6 - (long)pvVar1 < uVar5) {
    if (pvVar1 != (void *)0x0) {
      if ((void *)param_1[1] != pvVar1) {
        param_1[1] = pvVar1;
      }
      operator_delete(pvVar1);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      uVar6 = 0;
    }
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar6 < 0x3fffffffffffffff) {
      uVar7 = uVar6 * 2;
      if ((uVar6 * 2 < uVar5) && (uVar7 = uVar5, (long)uVar5 < 0)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
    puVar3 = operator_new(uVar7);
    param_1[1] = puVar3;
    *param_1 = puVar3;
    param_1[2] = puVar3 + uVar7;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar3 = *param_2;
      puVar3 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = puVar3;
    }
  }
  else {
    sVar4 = param_1[1] - (long)pvVar1;
    if (sVar4 < uVar5) {
      puVar3 = param_2 + sVar4;
      _memmove(pvVar1,param_2,sVar4);
      if (puVar3 != param_3) {
        puVar2 = (undefined1 *)param_1[1];
        do {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = (undefined1 *)(param_1[1] + 1);
          param_1[1] = puVar2;
        } while (param_3 != puVar3);
      }
    }
    else {
      _memmove(pvVar1,param_2,uVar5);
      if (param_1[1] != (long)pvVar1 + uVar5) {
        param_1[1] = (long)pvVar1 + uVar5;
      }
    }
  }
  return;
}

