
ulong FUN_10055cc50(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar6 = *param_1;
  iVar3 = *(int *)(lVar6 + 8);
  uVar10 = 0;
  if (iVar3 < *(int *)(lVar6 + 0xc)) {
    lVar9 = lVar6 + 8 + (long)iVar3 * 8;
    lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      if (lVar6 == 0) goto LAB_10055cd9d;
      puVar1 = (undefined8 *)(lVar9 + 8);
      lVar9 = lVar9 + 8;
      cVar5 = FUN_10071bf20(*puVar1,param_2);
      lVar6 = lVar6 + -8;
    } while (cVar5 == '\0');
    puVar7 = (uint *)*param_1;
    puVar8 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
    if ((lVar9 - (long)puVar8 & 0x7fffffff8U) != 0x7fffffff8) {
      local_38 = *(undefined4 *)(param_2 + 1);
      local_40 = *param_2;
      if (1 < *puVar7) {
        FUN_10055cdb0(param_1,puVar7[1]);
        puVar7 = (uint *)*param_1;
      }
      lVar6 = (long)(int)((ulong)(lVar9 - (long)puVar8) >> 3) + (long)(int)puVar7[2];
      puVar8 = puVar7 + lVar6 * 2 + 4;
      uVar4 = puVar7[3];
      if (*(void **)(puVar7 + lVar6 * 2 + 4) != (void *)0x0) {
        operator_delete(*(void **)(puVar7 + lVar6 * 2 + 4));
      }
      puVar2 = puVar7 + (long)(int)uVar4 * 2 + 4;
      if (lVar6 + 1 != (long)(int)uVar4) {
        puVar7 = puVar7 + (lVar6 + 1) * 2 + 4;
        do {
          while (cVar5 = FUN_10071bf20(*(undefined8 *)puVar7,&local_40), cVar5 != '\0') {
            if (*(void **)puVar7 != (void *)0x0) {
              operator_delete(*(void **)puVar7);
            }
            puVar7 = puVar7 + 2;
            if (puVar2 == puVar7) goto LAB_10055cd8b;
          }
          *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
        } while (puVar7 != puVar2);
      }
LAB_10055cd8b:
      uVar10 = (ulong)((long)puVar2 - (long)puVar8) >> 3;
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar10;
    }
  }
LAB_10055cd9d:
  return uVar10 & 0xffffffff;
}

