
void FUN_1000f8400(undefined8 *param_1,undefined8 *param_2)

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
  uVar8 = (param_1[1] - (long)pvVar2 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)pvVar2 >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    if (uVar5 < uVar8) {
      uVar5 = uVar8;
    }
    sVar9 = param_1[1] - (long)pvVar2;
    lVar4 = ((long)sVar9 >> 3) * -0x5555555555555555;
    uVar8 = 0;
    pvVar6 = (void *)0x0;
    if (uVar5 == 0) goto LAB_1000f84e6;
  }
  else {
    sVar9 = param_1[1] - (long)pvVar2;
    lVar4 = ((long)sVar9 >> 3) * -0x5555555555555555;
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  uVar8 = uVar5;
  pvVar6 = operator_new(uVar8 * 0x18);
LAB_1000f84e6:
  *(undefined8 *)((long)pvVar6 + lVar4 * 0x18 + 0x10) = param_2[2];
  uVar3 = *param_2;
  *(undefined8 *)((long)pvVar6 + lVar4 * 0x18 + 8) = param_2[1];
  *(undefined8 *)((long)pvVar6 + lVar4 * 0x18) = uVar3;
  lVar7 = SUB168(SEXT816((long)sVar9) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  pvVar1 = (void *)((long)pvVar6 + (((lVar7 >> 2) - (lVar7 >> 0x3f)) + lVar4) * 0x18);
  _memcpy(pvVar1,pvVar2,sVar9);
  *param_1 = pvVar1;
  param_1[1] = (long)pvVar6 + lVar4 * 0x18 + 0x18;
  param_1[2] = (void *)((long)pvVar6 + uVar8 * 0x18);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

