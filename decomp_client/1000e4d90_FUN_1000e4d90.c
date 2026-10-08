
ulong FUN_1000e4d90(long *param_1,int *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *local_38;
  
  puVar3 = (uint *)*param_1;
  uVar7 = puVar3[2];
  uVar6 = puVar3[3];
  uVar8 = 0;
  if (((int)uVar7 < (int)uVar6) && (uVar7 != uVar6)) {
    lVar5 = (long)(int)uVar7 << 3;
    do {
      piVar1 = *(int **)((long)puVar3 + lVar5 + 0x10);
      if ((piVar1[1] == param_2[1]) && (*piVar1 == *param_2)) {
        uVar9 = lVar5 + (long)(int)uVar7 * -8;
        uVar8 = 0;
        if ((uVar9 & 0x7fffffff8) != 0x7fffffff8) {
          uVar2 = *(undefined8 *)param_2;
          if (1 < *puVar3) {
            FUN_1000abfa0(param_1,puVar3[1]);
            puVar3 = (uint *)*param_1;
            uVar7 = puVar3[2];
            uVar6 = puVar3[3];
          }
          lVar5 = (long)(int)(uVar9 >> 3) + (long)(int)uVar7;
          local_38 = puVar3 + lVar5 * 2 + 4;
          if (*(void **)(puVar3 + lVar5 * 2 + 4) != (void *)0x0) {
            operator_delete(*(void **)(puVar3 + lVar5 * 2 + 4));
          }
          if (lVar5 + 1 != (long)(int)uVar6) {
            puVar4 = puVar3 + (lVar5 + 1) * 2 + 4;
            do {
              piVar1 = *(int **)puVar4;
              if ((piVar1[1] == (int)((ulong)uVar2 >> 0x20)) && (*piVar1 == (int)uVar2)) {
                operator_delete(piVar1);
              }
              else {
                *(int **)local_38 = piVar1;
                local_38 = local_38 + 2;
              }
              puVar4 = puVar4 + 2;
            } while (puVar3 + (long)(int)uVar6 * 2 + 4 != puVar4);
          }
          uVar8 = (ulong)((long)(puVar3 + (long)(int)uVar6 * 2 + 4) - (long)local_38) >> 3;
          *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar8;
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((long)(int)uVar6 * 8 != lVar5);
  }
  return uVar8 & 0xffffffff;
}

