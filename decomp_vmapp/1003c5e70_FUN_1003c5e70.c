
void FUN_1003c5e70(long *param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar5 = (ushort *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 6)) {
    do {
      *puVar5 = *puVar5 & 0xfc00;
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x16] = 0;
      puVar5[0x17] = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5 = (ushort *)(param_1[1] + 0x40);
      param_1[1] = (long)puVar5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return;
  }
  lVar6 = *param_1;
  uVar4 = ((long)puVar5 - lVar6 >> 6) + param_2;
  if (uVar4 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - lVar6;
  if ((ulong)(lVar7 >> 6) < 0x1ffffffffffffff) {
    uVar8 = lVar7 >> 5;
    if (uVar8 < uVar4) {
      uVar8 = uVar4;
    }
    lVar6 = param_1[1] - lVar6 >> 6;
    uVar4 = 0;
    pvVar2 = (void *)0x0;
    if (uVar8 == 0) goto LAB_1003c5f8e;
  }
  else {
    lVar6 = param_1[1] - lVar6 >> 6;
    uVar8 = 0x3ffffffffffffff;
  }
  uVar4 = uVar8;
  pvVar2 = operator_new(uVar4 << 6);
LAB_1003c5f8e:
  puVar5 = (ushort *)(lVar6 * 0x40 + (long)pvVar2);
  do {
    *puVar5 = *puVar5 & 0xfc00;
    puVar5[0x1e] = 0;
    puVar5[0x1f] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5 = puVar5 + 0x20;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  pvVar1 = (void *)*param_1;
  pvVar3 = (void *)((long)pvVar2 + (lVar6 - ((ulong)(param_1[1] - (long)pvVar1) >> 6)) * 0x40);
  _memcpy(pvVar3,pvVar1,param_1[1] - (long)pvVar1);
  *param_1 = (long)pvVar3;
  param_1[1] = (long)puVar5;
  param_1[2] = (long)(uVar4 * 0x40 + (long)pvVar2);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar1);
  return;
}

