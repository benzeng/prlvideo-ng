
undefined8 FUN_100445e90(int *param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  undefined1 auStack_10048 [65560];
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(auStack_10048,0x10010);
  iVar10 = param_1[3];
  iVar12 = iVar10 + 1;
  if (param_1[1] < iVar12) {
    iVar4 = param_1[2];
    iVar8 = param_1[1];
    do {
      iVar9 = iVar8 + 0x40;
      iVar2 = iVar4 + 1;
      if (*param_1 < iVar2) {
        if (iVar9 < iVar12) {
          iVar12 = iVar9;
        }
        iVar10 = *param_1;
        do {
          iVar5 = iVar10 + 0x40;
          if (iVar5 < iVar2) {
            iVar2 = iVar5;
          }
          uVar3 = (iVar2 - iVar10) * 4;
          uVar6 = uVar3 * (iVar12 - iVar8);
          if (uVar6 != 0) {
            pvVar11 = (void *)((ulong)(iVar8 * param_4 + iVar10 * 4) + param_3);
            puVar7 = auStack_10048;
            do {
              _memcpy(puVar7,pvVar11,(long)(int)uVar3);
              puVar7 = puVar7 + uVar3;
              pvVar11 = (void *)((long)pvVar11 + (ulong)param_4);
            } while (puVar7 < auStack_10048 + uVar6);
          }
          FUN_1004491e0(auStack_10048,iVar2 - iVar10,iVar12 - iVar8,param_2);
          iVar4 = param_1[2];
          iVar2 = iVar4 + 1;
          iVar10 = iVar5;
        } while (iVar5 < iVar2);
        iVar10 = param_1[3];
      }
      iVar12 = iVar10 + 1;
      iVar8 = iVar9;
    } while (iVar9 < iVar12);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

