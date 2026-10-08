
ulong FUN_100580580(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  char cVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint *local_58;
  int *local_50;
  int *local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  lVar7 = *param_1;
  iVar3 = *(int *)(lVar7 + 8);
  uVar11 = 0;
  if (iVar3 < *(int *)(lVar7 + 0xc)) {
    lVar9 = lVar7 + 8 + (long)iVar3 * 8;
    lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      if (lVar7 == 0) goto LAB_10058072c;
      puVar1 = (undefined8 *)(lVar9 + 8);
      lVar9 = lVar9 + 8;
      cVar6 = FUN_100714df0(*puVar1,param_2);
      lVar7 = lVar7 + -8;
    } while (cVar6 == '\0');
    uVar10 = lVar9 - (*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
    if ((uVar10 & 0x7fffffff8) != 0x7fffffff8) {
      local_50 = (int *)*param_2;
      if (1 < *local_50 + 1U) {
        LOCK();
        *local_50 = *local_50 + 1;
        local_31 = *local_50 != 0;
        UNLOCK();
      }
      local_48 = (int *)param_2[1];
      if (1 < *local_48 + 1U) {
        LOCK();
        *local_48 = *local_48 + 1;
        local_31 = *local_48 != 0;
        UNLOCK();
      }
      FUN_1000ff290(local_40,param_2 + 2);
      puVar8 = (uint *)*param_1;
      if (1 < *puVar8) {
        FUN_10055a380(param_1,puVar8[1]);
        puVar8 = (uint *)*param_1;
      }
      lVar7 = (long)(int)(uVar10 >> 3) + (long)(int)puVar8[2];
      uVar4 = puVar8[3];
      pvVar5 = *(void **)(puVar8 + lVar7 * 2 + 4);
      if (pvVar5 != (void *)0x0) {
        FUN_1000fec30(pvVar5);
        operator_delete(pvVar5);
      }
      local_58 = puVar8 + lVar7 * 2 + 4;
      puVar2 = puVar8 + (long)(int)uVar4 * 2 + 4;
      if (lVar7 + 1 != (long)(int)uVar4) {
        puVar8 = puVar8 + (lVar7 + 1) * 2 + 4;
        do {
          while (cVar6 = FUN_100714df0(*(undefined8 *)puVar8,&local_50), cVar6 == '\0') {
            *(undefined8 *)local_58 = *(undefined8 *)puVar8;
            local_58 = local_58 + 2;
            puVar8 = puVar8 + 2;
            if (puVar8 == puVar2) goto LAB_100580715;
          }
          pvVar5 = *(void **)puVar8;
          if (pvVar5 != (void *)0x0) {
            FUN_1000fec30(pvVar5);
            operator_delete(pvVar5);
          }
          puVar8 = puVar8 + 2;
        } while (puVar2 != puVar8);
      }
LAB_100580715:
      uVar11 = (ulong)((long)puVar2 - (long)local_58) >> 3;
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar11;
      FUN_1000fec30(&local_50);
    }
  }
LAB_10058072c:
  return uVar11 & 0xffffffff;
}

