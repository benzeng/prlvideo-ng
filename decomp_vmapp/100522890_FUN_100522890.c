
void FUN_100522890(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  ulong uVar12;
  undefined4 *puVar13;
  void *pvVar14;
  void *pvVar15;
  
  uVar12 = 0x492492492492492;
  pvVar14 = (void *)*param_1;
  uVar10 = (param_1[1] - (long)pvVar14 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = param_1[2] - (long)pvVar14 >> 3;
  if ((ulong)(lVar8 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar12 = lVar8 * -0x2492492492492492;
    if (uVar12 < uVar10) {
      uVar12 = uVar10;
    }
    pvVar11 = (void *)param_1[1];
    lVar8 = ((long)pvVar11 - (long)pvVar14 >> 3) * 0x6db6db6db6db6db7;
    uVar10 = 0;
    pvVar9 = (void *)0x0;
    if (uVar12 == 0) goto LAB_100522951;
  }
  else {
    pvVar11 = (void *)param_1[1];
    lVar8 = ((long)pvVar11 - (long)pvVar14 >> 3) * 0x6db6db6db6db6db7;
  }
  pvVar9 = operator_new(uVar12 * 0x38);
  uVar10 = uVar12;
LAB_100522951:
  lVar8 = lVar8 * 0x38;
  puVar13 = (undefined4 *)((long)pvVar9 + lVar8);
  uVar7 = *param_2;
  *(undefined4 *)((long)pvVar9 + lVar8) = uVar7;
  lVar3 = *(long *)(param_2 + 2);
  *(long *)((long)pvVar9 + lVar8 + 8) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    uVar7 = *param_2;
    pvVar14 = (void *)*param_1;
    pvVar11 = (void *)param_1[1];
  }
  *puVar13 = uVar7;
  uVar7 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  puVar2 = (undefined4 *)((long)pvVar9 + lVar8 + 0x10);
  *puVar2 = param_2[4];
  puVar2[1] = uVar7;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined1 *)((long)pvVar9 + lVar8 + 0x28) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)((long)pvVar9 + lVar8 + 0x20) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)((long)pvVar9 + lVar8 + 0x30) = param_2[0xc];
  pvVar15 = pvVar11;
  if (pvVar11 != pvVar14) {
    do {
      pvVar15 = (void *)((long)pvVar11 + -0x38);
      puVar13[-0xe] = *(undefined4 *)((long)pvVar11 + -0x38);
      lVar3 = *(long *)((long)pvVar11 + -0x30);
      *(long *)(puVar13 + -0xc) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar13[-0xe] = *(undefined4 *)((long)pvVar11 + -0x38);
      *(undefined8 *)(puVar13 + -10) = *(undefined8 *)((long)pvVar11 + -0x28);
      *(undefined8 *)(puVar13 + -8) = *(undefined8 *)((long)pvVar11 + -0x20);
      *(undefined1 *)(puVar13 + -4) = *(undefined1 *)((long)pvVar11 + -0x10);
      *(undefined8 *)(puVar13 + -6) = *(undefined8 *)((long)pvVar11 + -0x18);
      puVar13[-2] = *(undefined4 *)((long)pvVar11 + -8);
      puVar13 = puVar13 + -0xe;
      pvVar11 = pvVar15;
    } while (pvVar14 != pvVar15);
    pvVar11 = (void *)param_1[1];
    pvVar15 = (void *)*param_1;
  }
  *param_1 = (long)puVar13;
  param_1[1] = (long)pvVar9 + lVar8 + 0x38;
  param_1[2] = (long)(uVar10 * 0x38 + (long)pvVar9);
  for (; pvVar11 != pvVar15; pvVar11 = (void *)((long)pvVar11 + -0x38)) {
    plVar4 = *(long **)((long)pvVar11 + -0x30);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if (pvVar15 != (void *)0x0) {
    operator_delete(pvVar15);
    return;
  }
  return;
}

