
undefined8 FUN_100c76820(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 auStack_32 [10];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  param_1[1] = 2;
  local_28 = lVar1;
  if (*param_1 < 9) {
    if (*(long *)(param_1 + 2) != 0) {
      FUN_100bf3910();
    }
    puVar3 = (undefined8 *)FUN_100bf3540(9,"a_int.c",0x164);
    *(undefined8 **)(param_1 + 2) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar3 + 1) = 0;
      *puVar3 = 0;
    }
  }
  puVar8 = *(undefined1 **)(param_1 + 2);
  if (puVar8 == (undefined1 *)0x0) {
    FUN_100c62ee0(0xd,0x76,0x41,"a_int.c",0x168);
    uVar4 = 0;
  }
  else {
    if (param_2 < 0) {
      param_2 = -param_2;
      param_1[1] = 0x102;
    }
    iVar6 = 0;
    uVar5 = 1;
    if (param_2 != 0) {
      do {
        uVar9 = uVar5;
        auStack_32[uVar9] = (char)param_2;
        if (7 < uVar9) break;
        param_2 = param_2 >> 8;
        uVar5 = uVar9 + 1;
      } while (param_2 != 0);
      iVar2 = (int)(uVar9 - 1);
      if (-1 < iVar2) {
        lVar7 = (long)iVar2;
        *puVar8 = auStack_32[lVar7 + 1];
        if (iVar2 != 0) {
          bVar10 = (uVar9 - 1 & 1) != 0;
          if (bVar10) {
            puVar8 = auStack_32 + lVar7;
            lVar7 = lVar7 + -1;
            *(undefined1 *)(*(long *)(param_1 + 2) + 1) = *puVar8;
          }
          uVar5 = (ulong)bVar10;
          if (iVar2 != 1) {
            puVar8 = auStack_32 + lVar7;
            do {
              *(undefined1 *)(*(long *)(param_1 + 2) + 1 + uVar5) = *puVar8;
              *(undefined1 *)(*(long *)(param_1 + 2) + 2 + uVar5) = puVar8[-1];
              uVar5 = uVar5 + 2;
              puVar8 = puVar8 + -2;
            } while (iVar2 != (int)uVar5);
          }
        }
        iVar6 = iVar2 + 1;
      }
    }
    *param_1 = iVar6;
    uVar4 = 1;
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

