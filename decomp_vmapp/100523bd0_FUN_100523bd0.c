
void FUN_100523bd0(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  pvVar6 = (void *)*param_1;
  uVar4 = (param_1[1] - (long)pvVar6 >> 4) + 1;
  if (uVar4 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)pvVar6 >> 4) < 0x7ffffffffffffff) {
    uVar8 = param_1[2] - (long)pvVar6 >> 3;
    if (uVar8 < uVar4) {
      uVar8 = uVar4;
    }
    pvVar5 = (void *)param_1[1];
    lVar7 = (long)pvVar5 - (long)pvVar6 >> 4;
    uVar4 = 0;
    pvVar2 = (void *)0x0;
    if (uVar8 == 0) goto LAB_100523c7d;
  }
  else {
    pvVar5 = (void *)param_1[1];
    lVar7 = (long)pvVar5 - (long)pvVar6 >> 4;
    uVar8 = 0xfffffffffffffff;
  }
  uVar4 = uVar8;
  pvVar2 = operator_new(uVar4 << 4);
LAB_100523c7d:
  lVar7 = lVar7 * 0x10;
  pvVar3 = (void *)((long)pvVar2 + lVar7);
  *(undefined8 *)((long)pvVar2 + lVar7) = *param_2;
  *(undefined1 *)((long)pvVar2 + lVar7 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
  *(undefined4 *)((long)pvVar2 + lVar7 + 8) = *(undefined4 *)(param_2 + 1);
  if (pvVar5 != pvVar6) {
    do {
      *(undefined8 *)((long)pvVar3 + -0x10) = *(undefined8 *)((long)pvVar5 + -0x10);
      *(undefined1 *)((long)pvVar3 + -4) = *(undefined1 *)((long)pvVar5 + -4);
      puVar1 = (undefined4 *)((long)pvVar5 + -8);
      pvVar5 = (void *)((long)pvVar5 + -0x10);
      *(undefined4 *)((long)pvVar3 + -8) = *puVar1;
      pvVar3 = (void *)((long)pvVar3 + -0x10);
    } while (pvVar6 != pvVar5);
    pvVar6 = (void *)*param_1;
  }
  *param_1 = (long)pvVar3;
  param_1[1] = (long)pvVar2 + lVar7 + 0x10;
  param_1[2] = (long)(uVar4 * 0x10 + (long)pvVar2);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar6);
  return;
}

