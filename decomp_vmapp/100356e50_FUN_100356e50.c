
void FUN_100356e50(undefined8 *param_1,undefined2 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  
  pvVar1 = (void *)*param_1;
  uVar6 = (param_1[1] - (long)pvVar1) * -0x5555555555555555 + 1;
  if (0x5555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)((param_1[2] - (long)pvVar1) * -0x5555555555555555) < 0x2aaaaaaaaaaaaaaa) {
    uVar3 = (param_1[2] - (long)pvVar1) * 0x5555555555555556;
    if (uVar3 < uVar6) {
      uVar3 = uVar6;
    }
    sVar8 = param_1[1] - (long)pvVar1;
    lVar9 = sVar8 * -0x5555555555555555;
    uVar6 = 0;
    pvVar4 = (void *)0x0;
    if (uVar3 == 0) goto LAB_100356f13;
  }
  else {
    sVar8 = param_1[1] - (long)pvVar1;
    lVar9 = sVar8 * -0x5555555555555555;
    uVar3 = 0x5555555555555555;
  }
  uVar6 = uVar3;
  pvVar4 = operator_new(uVar6 * 3);
LAB_100356f13:
  lVar2 = lVar9 * 3;
  *(undefined1 *)((long)pvVar4 + lVar2 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)pvVar4 + lVar2) = *param_2;
  lVar5 = SUB168(SEXT816((long)sVar8) * SEXT816(0x5555555555555555),8) - sVar8;
  pvVar7 = (void *)((((lVar5 >> 1) - (lVar5 >> 0x3f)) + lVar9) * 3 + (long)pvVar4);
  _memcpy(pvVar7,pvVar1,sVar8);
  *param_1 = pvVar7;
  param_1[1] = (long)pvVar4 + lVar2 + 3;
  param_1[2] = (void *)(uVar6 * 3 + (long)pvVar4);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

