
void FUN_100340a40(undefined8 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  void *pvVar8;
  size_t sVar9;
  byte bVar10;
  
  bVar10 = 0;
  pvVar1 = (void *)*param_1;
  uVar5 = (param_1[1] - (long)pvVar1 >> 2) * -0x1084210842108421 + 1;
  if (0x210842108421084 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - (long)pvVar1 >> 2;
  if ((ulong)(lVar2 * -0x1084210842108421) < 0x108421084210842) {
    uVar3 = lVar2 * -0x2108421084210842;
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    sVar9 = param_1[1] - (long)pvVar1;
    lVar2 = ((long)sVar9 >> 2) * -0x1084210842108421;
    uVar5 = 0;
    pvVar8 = (void *)0x0;
    if (uVar3 == 0) goto LAB_100340b26;
  }
  else {
    sVar9 = param_1[1] - (long)pvVar1;
    lVar2 = ((long)sVar9 >> 2) * -0x1084210842108421;
    uVar3 = 0x210842108421084;
  }
  uVar5 = uVar3;
  pvVar8 = operator_new(uVar5 * 0x7c);
LAB_100340b26:
  puVar7 = (undefined4 *)((long)pvVar8 + lVar2 * 0x7c);
  for (lVar4 = 0x1f; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + (ulong)bVar10 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
  }
  lVar4 = SUB168(SEXT816((long)sVar9) * SEXT816(0x7bdef7bdef7bdef7),8) - sVar9;
  pvVar6 = (void *)((((lVar4 >> 6) - (lVar4 >> 0x3f)) + lVar2) * 0x7c + (long)pvVar8);
  _memcpy(pvVar6,pvVar1,sVar9);
  *param_1 = pvVar6;
  param_1[1] = (long)pvVar8 + lVar2 * 0x7c + 0x7c;
  param_1[2] = (void *)(uVar5 * 0x7c + (long)pvVar8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

