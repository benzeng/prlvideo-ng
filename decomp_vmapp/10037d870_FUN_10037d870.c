
void FUN_10037d870(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  
  pvVar2 = (void *)*param_1;
  uVar7 = (param_1[1] - (long)pvVar2 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - (long)pvVar2 >> 2;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar4 = lVar3 * 0x5555555555555556;
    if (uVar4 < uVar7) {
      uVar4 = uVar7;
    }
    sVar8 = param_1[1] - (long)pvVar2;
    lVar3 = ((long)sVar8 >> 2) * -0x5555555555555555;
    uVar7 = 0;
    pvVar5 = (void *)0x0;
    if (uVar4 == 0) goto LAB_10037d956;
  }
  else {
    sVar8 = param_1[1] - (long)pvVar2;
    lVar3 = ((long)sVar8 >> 2) * -0x5555555555555555;
    uVar4 = 0x1555555555555555;
  }
  uVar7 = uVar4;
  pvVar5 = operator_new(uVar7 * 0xc);
LAB_10037d956:
  *(undefined4 *)((long)pvVar5 + lVar3 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)pvVar5 + lVar3 * 0xc) = *param_2;
  lVar6 = SUB168(SEXT816((long)sVar8) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  pvVar1 = (void *)((long)pvVar5 + (((lVar6 >> 1) - (lVar6 >> 0x3f)) + lVar3) * 0xc);
  _memcpy(pvVar1,pvVar2,sVar8);
  *param_1 = pvVar1;
  param_1[1] = (long)pvVar5 + lVar3 * 0xc + 0xc;
  param_1[2] = (void *)((long)pvVar5 + uVar7 * 0xc);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

