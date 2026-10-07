
undefined8 FUN_100446400(int *param_1,undefined8 param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  undefined1 local_1048 [4112];
  long local_38;
  int iVar6;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(local_1048,0x1004);
  iVar2 = param_1[3];
  iVar11 = iVar2 + 1;
  if (param_1[1] < iVar11) {
    iVar4 = param_1[2];
    iVar8 = param_1[1];
    do {
      iVar9 = iVar8 + 0x40;
      iVar6 = iVar4 + 1;
      if (*param_1 < iVar6) {
        if (iVar9 < iVar11) {
          iVar11 = iVar9;
        }
        iVar2 = *param_1;
        do {
          iVar1 = iVar2 + 0x40;
          if (iVar1 < iVar6) {
            iVar6 = iVar1;
          }
          uVar5 = iVar6 - iVar2;
          uVar3 = uVar5 * (iVar11 - iVar8);
          if (uVar3 != 0) {
            pvVar10 = (void *)((ulong)(iVar2 + iVar8 * param_4) + param_3);
            puVar7 = local_1048;
            do {
              _memcpy(puVar7,pvVar10,(long)(int)uVar5);
              puVar7 = puVar7 + uVar5;
              pvVar10 = (void *)((long)pvVar10 + (ulong)param_4);
            } while (puVar7 < local_1048 + uVar3);
          }
          FUN_10044c510(local_1048,uVar5,iVar11 - iVar8,param_2);
          iVar4 = param_1[2];
          iVar6 = iVar4 + 1;
          iVar2 = iVar1;
        } while (iVar1 < iVar6);
        iVar2 = param_1[3];
      }
      iVar11 = iVar2 + 1;
      iVar8 = iVar9;
    } while (iVar9 < iVar11);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

