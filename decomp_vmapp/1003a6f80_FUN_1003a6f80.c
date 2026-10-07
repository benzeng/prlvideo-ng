
void FUN_1003a6f80(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  
  pvVar2 = (void *)*param_1;
  uVar8 = (param_1[1] - (long)pvVar2 >> 2) * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)pvVar2 >> 2;
  if ((ulong)(lVar4 * -0x3333333333333333) < 0x666666666666666) {
    uVar5 = lVar4 * -0x6666666666666666;
    if (uVar5 < uVar8) {
      uVar5 = uVar8;
    }
    sVar9 = param_1[1] - (long)pvVar2;
    lVar4 = ((long)sVar9 >> 2) * -0x3333333333333333;
    uVar8 = 0;
    pvVar6 = (void *)0x0;
    if (uVar5 == 0) goto LAB_1003a7066;
  }
  else {
    sVar9 = param_1[1] - (long)pvVar2;
    lVar4 = ((long)sVar9 >> 2) * -0x3333333333333333;
    uVar5 = 0xccccccccccccccc;
  }
  uVar8 = uVar5;
  pvVar6 = operator_new(uVar8 * 0x14);
LAB_1003a7066:
  *(undefined4 *)((long)pvVar6 + lVar4 * 0x14 + 0x10) = *(undefined4 *)(param_2 + 2);
  uVar3 = *param_2;
  *(undefined8 *)((long)pvVar6 + lVar4 * 0x14 + 8) = param_2[1];
  *(undefined8 *)((long)pvVar6 + lVar4 * 0x14) = uVar3;
  lVar7 = SUB168(SEXT816((long)sVar9) * SEXT816(-0x6666666666666667),8);
  pvVar1 = (void *)((long)pvVar6 + (((lVar7 >> 3) - (lVar7 >> 0x3f)) + lVar4) * 0x14);
  _memcpy(pvVar1,pvVar2,sVar9);
  *param_1 = pvVar1;
  param_1[1] = (long)pvVar6 + lVar4 * 0x14 + 0x14;
  param_1[2] = (void *)((long)pvVar6 + uVar8 * 0x14);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

