
void FUN_100340790(undefined8 *param_1,undefined4 *param_2)

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
  uVar5 = (param_1[1] - (long)pvVar1 >> 2) * -0xf0f0f0f0f0f0f0f + 1;
  if (0x3c3c3c3c3c3c3c3 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar2 = param_1[2] - (long)pvVar1 >> 2;
  if ((ulong)(lVar2 * -0xf0f0f0f0f0f0f0f) < 0x1e1e1e1e1e1e1e1) {
    uVar3 = lVar2 * -0x1e1e1e1e1e1e1e1e;
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    sVar9 = param_1[1] - (long)pvVar1;
    lVar2 = ((long)sVar9 >> 2) * -0xf0f0f0f0f0f0f0f;
    uVar5 = 0;
    pvVar8 = (void *)0x0;
    if (uVar3 == 0) goto LAB_100340872;
  }
  else {
    sVar9 = param_1[1] - (long)pvVar1;
    lVar2 = ((long)sVar9 >> 2) * -0xf0f0f0f0f0f0f0f;
    uVar3 = 0x3c3c3c3c3c3c3c3;
  }
  uVar5 = uVar3;
  pvVar8 = operator_new(uVar5 * 0x44);
LAB_100340872:
  puVar7 = (undefined4 *)((long)pvVar8 + lVar2 * 0x44);
  for (lVar4 = 0x11; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + (ulong)bVar10 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
  }
  lVar4 = SUB168(SEXT816((long)sVar9) * SEXT816(-0x7878787878787879),8);
  pvVar6 = (void *)((((lVar4 >> 5) - (lVar4 >> 0x3f)) + lVar2) * 0x44 + (long)pvVar8);
  _memcpy(pvVar6,pvVar1,sVar9);
  *param_1 = pvVar6;
  param_1[1] = (long)pvVar8 + lVar2 * 0x44 + 0x44;
  param_1[2] = (void *)(uVar5 * 0x44 + (long)pvVar8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

