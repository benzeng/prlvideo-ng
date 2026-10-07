
void FUN_100376bc0(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  size_t sVar10;
  
  pvVar1 = (void *)*param_1;
  uVar8 = (param_1[1] - (long)pvVar1 >> 2) * 0x6db6db6db6db6db7 + 1;
  if (0x924924924924924 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - (long)pvVar1 >> 2;
  if ((ulong)(lVar3 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar4 = lVar3 * -0x2492492492492492;
    if (uVar4 < uVar8) {
      uVar4 = uVar8;
    }
    sVar10 = param_1[1] - (long)pvVar1;
    lVar3 = ((long)sVar10 >> 2) * 0x6db6db6db6db6db7;
    uVar8 = 0;
    pvVar6 = (void *)0x0;
    if (uVar4 == 0) goto LAB_100376c9b;
  }
  else {
    sVar10 = param_1[1] - (long)pvVar1;
    lVar3 = ((long)sVar10 >> 2) * 0x6db6db6db6db6db7;
    uVar4 = 0x924924924924924;
  }
  uVar8 = uVar4;
  pvVar6 = operator_new(uVar8 * 0x1c);
LAB_100376c9b:
  lVar5 = lVar3 * 0x1c;
  *(undefined4 *)((long)pvVar6 + lVar5 + 0x18) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)((long)pvVar6 + lVar5 + 0x10) = param_2[2];
  uVar2 = *param_2;
  *(undefined8 *)((long)pvVar6 + lVar5 + 8) = param_2[1];
  *(undefined8 *)((long)pvVar6 + lVar5) = uVar2;
  lVar7 = SUB168(SEXT816((long)sVar10) * SEXT816(-0x4924924924924925),8);
  pvVar9 = (void *)((((lVar7 >> 3) - (lVar7 >> 0x3f)) + lVar3) * 0x1c + (long)pvVar6);
  _memcpy(pvVar9,pvVar1,sVar10);
  *param_1 = pvVar9;
  param_1[1] = (long)pvVar6 + lVar5 + 0x1c;
  param_1[2] = (void *)(uVar8 * 0x1c + (long)pvVar6);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

