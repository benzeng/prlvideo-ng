
void FUN_1009d7ab0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  
  lVar6 = *param_1;
  uVar5 = (param_1[1] - lVar6 >> 4) + 1;
  if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - lVar6 >> 4) < 0x7ffffffffffffff) {
    uVar8 = param_1[2] - lVar6 >> 3;
    if (uVar8 < uVar5) {
      uVar8 = uVar5;
    }
    lVar6 = param_1[1] - lVar6 >> 4;
    uVar5 = 0;
    lVar2 = 0;
    if (uVar8 == 0) goto LAB_1009d7b5f;
  }
  else {
    uVar8 = 0xfffffffffffffff;
    lVar6 = param_1[1] - lVar6 >> 4;
  }
  uVar5 = uVar8;
  if ((ulong)param_1[5] < uVar8 << 4) {
    lVar2 = FUN_1009d79a0(param_1[3]);
  }
  else {
    lVar2 = param_1[4];
  }
LAB_1009d7b5f:
  lVar3 = lVar6 * 0x10;
  uVar1 = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3) = param_2[1];
  *(undefined8 *)(lVar2 + lVar3) = uVar1;
  sVar4 = param_1[1] - *param_1;
  pvVar7 = (void *)((lVar6 - (sVar4 >> 4)) * 0x10 + lVar2);
  _memcpy(pvVar7,(void *)*param_1,sVar4);
  *param_1 = (long)pvVar7;
  param_1[1] = lVar2 + 0x10 + lVar3;
  param_1[2] = uVar5 * 0x10 + lVar2;
  return;
}

