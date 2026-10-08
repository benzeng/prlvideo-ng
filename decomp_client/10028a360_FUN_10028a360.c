
ulong FUN_10028a360(long *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *local_38;
  
  puVar6 = (uint *)*param_1;
  uVar4 = puVar6[2];
  uVar7 = puVar6[3];
  uVar10 = 0;
  if ((int)uVar4 < (int)uVar7) {
    iVar2 = *param_2;
    lVar9 = (long)(int)uVar4 * 8;
    do {
      lVar5 = lVar9;
      if ((long)(int)uVar7 * 8 == lVar5) goto LAB_10028a484;
      lVar9 = lVar5 + 8;
    } while (**(int **)((long)puVar6 + lVar5 + 0x10) != iVar2);
    uVar8 = lVar5 + (long)(int)uVar4 * -8;
    if ((uVar8 & 0x7fffffff8) != 0x7fffffff8) {
      if (1 < *puVar6) {
        FUN_10028a560(param_1,puVar6[1]);
        puVar6 = (uint *)*param_1;
        uVar4 = puVar6[2];
        uVar7 = puVar6[3];
      }
      lVar9 = (long)(int)(uVar8 >> 3) + (long)(int)uVar4;
      local_38 = puVar6 + lVar9 * 2 + 4;
      if (*(void **)(puVar6 + lVar9 * 2 + 4) != (void *)0x0) {
        operator_delete(*(void **)(puVar6 + lVar9 * 2 + 4));
      }
      puVar1 = puVar6 + (long)(int)uVar7 * 2 + 4;
      if (lVar9 + 1 != (long)(int)uVar7) {
        puVar6 = puVar6 + (lVar9 + 1) * 2 + 4;
        do {
          while (piVar3 = *(int **)puVar6, *piVar3 != iVar2) {
            *(int **)local_38 = piVar3;
            local_38 = local_38 + 2;
            puVar6 = puVar6 + 2;
            if (puVar6 == puVar1) goto LAB_10028a475;
          }
          if (piVar3 != (int *)0x0) {
            operator_delete(piVar3);
          }
          puVar6 = puVar6 + 2;
        } while (puVar1 != puVar6);
      }
LAB_10028a475:
      uVar10 = (ulong)((long)puVar1 - (long)local_38) >> 3;
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar10;
    }
  }
LAB_10028a484:
  return uVar10 & 0xffffffff;
}

