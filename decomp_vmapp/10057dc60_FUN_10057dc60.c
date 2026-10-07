
void FUN_10057dc60(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = (undefined8 *)*param_1;
  lVar4 = param_1[2];
  if ((ulong)(lVar4 - (long)puVar3 >> 3) < param_2) {
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 != puVar3) {
        param_1[1] = (~((long)puVar1 + (-8 - (long)puVar3)) & 0xfffffffffffffff8U) + (long)puVar1;
      }
      operator_delete(puVar3);
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      lVar4 = 0;
    }
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
      uVar6 = lVar4 >> 2;
      if ((ulong)(lVar4 >> 2) < param_2) {
        uVar6 = param_2;
      }
      if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar6 = 0x1fffffffffffffff;
    }
    puVar3 = operator_new(uVar6 * 8);
    param_1[1] = (long)puVar3;
    *param_1 = (long)puVar3;
    param_1[2] = (long)(puVar3 + uVar6);
    do {
      *puVar3 = *param_3;
      puVar3 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar3;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  else {
    uVar2 = param_1[1] - (long)puVar3 >> 3;
    uVar6 = param_2;
    if (uVar2 < param_2) {
      uVar6 = uVar2;
    }
    if (uVar6 != 0) {
      uVar6 = ~param_2;
      if (~param_2 < ~uVar2) {
        uVar6 = ~uVar2;
      }
      lVar4 = uVar6 + 1;
      do {
        *puVar3 = *param_3;
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    lVar4 = uVar2 - param_2;
    if (uVar2 < param_2) {
      puVar3 = (undefined8 *)param_1[1];
      do {
        *puVar3 = *param_3;
        puVar3 = (undefined8 *)(param_1[1] + 8);
        param_1[1] = (long)puVar3;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    else {
      lVar5 = param_2 * 8 + *param_1;
      lVar4 = param_1[1];
      if (lVar4 != lVar5) {
        param_1[1] = (~((lVar4 + -8) - lVar5) & 0xfffffffffffffff8U) + lVar4;
      }
    }
  }
  return;
}

