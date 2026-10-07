
undefined8 FUN_1006a83b0(long param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
    uVar4 = FUN_1006a7d80();
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    lVar9 = *(long *)(param_1 + 0x18);
  }
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x30) = param_2[4];
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  iVar11 = (int)(1L << (*(byte *)(param_2 + 1) & 0x3f));
  *(int *)(param_1 + 0x24) = iVar11;
  uVar4 = 0x80000018;
  if (param_4 - param_3 == lVar9) {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar7 = (ulong)(uint)(iVar11 * iVar1 * 8);
    uVar5 = (lVar9 + -1 + uVar7) / uVar7;
    puVar8 = *(ulong **)(param_1 + 0x40);
    puVar12 = *(ulong **)(param_1 + 0x38);
    uVar10 = (long)puVar8 - (long)puVar12 >> 3;
    if (uVar10 < uVar5) {
      FUN_1006a8970(param_1 + 0x38);
      puVar12 = *(ulong **)(param_1 + 0x38);
      puVar8 = *(ulong **)(param_1 + 0x40);
    }
    else if ((uVar5 < uVar10) && (puVar8 != puVar12 + uVar5)) {
      puVar8 = (ulong *)((long)puVar8 +
                        (~((long)puVar8 + (-8 - (long)(puVar12 + uVar5))) & 0xfffffffffffffff8U));
      *(ulong **)(param_1 + 0x40) = puVar8;
    }
    if (puVar12 != puVar8) {
      do {
        uVar5 = (uint)(iVar1 * iVar11 * 8) + param_3;
        if (param_4 <= uVar5) {
          uVar5 = param_4;
        }
        iVar2 = FUN_1007dbcf0(*param_2,(int)(uVar5 - 1 >> (*(byte *)(param_2 + 1) & 0x3f)) + 1,
                              param_3 >> (*(byte *)(param_2 + 1) & 0x3f));
        if (iVar2 < 1) {
          iVar3 = FUN_1007dbe40(*param_2,(int)(uVar5 - 1 >> (*(byte *)(param_2 + 1) & 0x3f)) + 1,
                                param_3 >> (*(byte *)(param_2 + 1) & 0x3f));
          pvVar6 = (void *)*puVar12;
          if (0 < iVar3) goto LAB_1006a8521;
          if (pvVar6 < (void *)0x2) {
            pvVar6 = _valloc((ulong)*(uint *)(param_1 + 0x20));
            *puVar12 = (ulong)pvVar6;
            if (pvVar6 == (void *)0x0) {
              return 0x80000002;
            }
          }
          uVar4 = FUN_1006a86d0(param_2,pvVar6,*(undefined4 *)(param_1 + 0x24),param_3,uVar5);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
        }
        else {
          pvVar6 = (void *)*puVar12;
LAB_1006a8521:
          if ((void *)0x1 < pvVar6) {
            _free(pvVar6);
          }
          *puVar12 = (ulong)(0 < iVar2);
        }
        param_3 = param_3 + uVar7;
        puVar12 = puVar12 + 1;
      } while (puVar12 != *(ulong **)(param_1 + 0x40));
    }
    uVar4 = 0;
  }
  return uVar4;
}

