
void FUN_10032f380(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar4 = puVar5;
  uVar9 = param_2;
  if (param_2 <= (ulong)((param_1[2] - (long)puVar5 >> 2) * -0x5555555555555555)) {
    do {
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      uVar9 = uVar9 - 1;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    } while (uVar9 != 0);
    param_1[1] = (long)puVar5 + param_2 * 0xc;
    return;
  }
  pvVar2 = (void *)*param_1;
  uVar9 = ((long)puVar5 - (long)pvVar2 >> 2) * -0x5555555555555555 + param_2;
  if (0x1555555555555555 < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = param_1[2] - (long)pvVar2 >> 2;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar7 = lVar3 * 0x5555555555555556;
    if (uVar7 < uVar9) {
      uVar7 = uVar9;
    }
    sVar10 = param_1[1] - (long)pvVar2;
    lVar3 = ((long)sVar10 >> 2) * -0x5555555555555555;
    uVar9 = 0;
    pvVar6 = (void *)0x0;
    if (uVar7 == 0) goto LAB_10032f4a5;
  }
  else {
    sVar10 = param_1[1] - (long)pvVar2;
    lVar3 = ((long)sVar10 >> 2) * -0x5555555555555555;
    uVar7 = 0x1555555555555555;
  }
  uVar9 = uVar7;
  pvVar6 = operator_new(uVar9 * 0xc);
LAB_10032f4a5:
  puVar5 = (undefined8 *)((long)pvVar6 + lVar3 * 0xc);
  uVar7 = param_2;
  do {
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar5 = (undefined8 *)((long)puVar5 + 0xc);
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  lVar8 = SUB168(SEXT816((long)sVar10) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  pvVar1 = (void *)((long)pvVar6 + (((lVar8 >> 1) - (lVar8 >> 0x3f)) + lVar3) * 0xc);
  _memcpy(pvVar1,pvVar2,sVar10);
  *param_1 = pvVar1;
  param_1[1] = (void *)((long)pvVar6 + (param_2 + lVar3) * 0xc);
  param_1[2] = (void *)((long)pvVar6 + uVar9 * 0xc);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

