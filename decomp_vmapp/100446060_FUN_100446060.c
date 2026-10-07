
undefined8 FUN_100446060(int *param_1,undefined8 param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  undefined1 local_9048 [36880];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_9048,0x900c);
  iVar9 = param_1[3];
  iVar11 = iVar9 + 1;
  if (param_1[1] < iVar11) {
    iVar3 = param_1[2];
    iVar7 = param_1[1];
    do {
      iVar8 = iVar7 + 0x40;
      iVar2 = iVar3 + 1;
      if (*param_1 < iVar2) {
        if (iVar8 < iVar11) {
          iVar11 = iVar8;
        }
        iVar9 = *param_1;
        do {
          iVar4 = iVar9 + 0x40;
          if (iVar4 < iVar2) {
            iVar2 = iVar4;
          }
          uVar1 = (iVar2 - iVar9) * 3;
          uVar5 = uVar1 * (iVar11 - iVar7);
          if (uVar5 != 0) {
            pvVar10 = (void *)((ulong)(iVar9 * 3 + iVar7 * param_4) + param_3);
            puVar6 = local_9048;
            do {
              _memcpy(puVar6,pvVar10,(long)(int)uVar1);
              puVar6 = puVar6 + uVar1;
              pvVar10 = (void *)((long)pvVar10 + (ulong)param_4);
            } while (puVar6 < local_9048 + uVar5);
          }
          FUN_10044a250(local_9048,iVar2 - iVar9,iVar11 - iVar7,param_2);
          iVar3 = param_1[2];
          iVar2 = iVar3 + 1;
          iVar9 = iVar4;
        } while (iVar4 < iVar2);
        iVar9 = param_1[3];
      }
      iVar11 = iVar9 + 1;
      iVar7 = iVar8;
    } while (iVar8 < iVar11);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

