
void FUN_100591740(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,int *param_4,
                  long param_5,uint param_6,int param_7,ulong param_8,int param_9)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar20;
  
  uVar10 = (ulong)*(uint *)(param_1 + 0x18);
  lVar16 = *(long *)(param_1 + 0x40);
  uVar18 = *(ulong *)(param_1 + 0x58);
  plVar8 = (long *)(lVar16 + (uVar18 >> 9) * 8);
  lVar15 = *(long *)(param_1 + 0x48);
  puVar17 = (undefined8 *)0x0;
  if (lVar15 != lVar16) {
    puVar17 = (undefined8 *)((uVar18 & 0x1ff) * 8 + *plVar8);
  }
  if (param_8 % uVar10 != 0) {
    FUN_1008e3970("","vdisk",0,"Error: start %llu is not aligned on block",param_8);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",0xaad,
                  "FillTableAsync");
    uVar11 = 0x80021011;
LAB_100591b86:
    *param_4 = *param_4 + 1;
                    /* WARNING: Could not recover jumptable at 0x000100591ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3,uVar11);
    return;
  }
  uVar7 = param_9 * *(uint *)(param_1 + 0x18) + param_8;
  if (param_8 < *(ulong *)(param_1 + 8)) {
    uVar12 = (uVar10 - 1) + *(ulong *)(param_1 + 8);
    uVar12 = uVar12 - uVar12 % uVar10;
    uVar5 = (uVar12 - param_8) / uVar10;
    param_8 = uVar12;
  }
  else {
    uVar5 = 0;
  }
  uVar12 = *(ulong *)(param_1 + 0x10);
  if (uVar12 < uVar7) {
    uVar7 = uVar12 - uVar12 % uVar10;
  }
  if (param_8 <= uVar7 && uVar7 - param_8 != 0) {
    iVar3 = 0;
    uVar13 = (int)((uVar7 - param_8) / uVar10) + (uint)uVar5;
    if (param_6 != 0) {
      uVar10 = 0;
      do {
        if ((uint)uVar5 < uVar13) {
          piVar9 = (int *)(*(long *)(param_5 + uVar10 * 0x10) + 0xc + (uVar5 & 0xffffffff) * 0x20);
          uVar7 = uVar5 & 0xffffffff;
          do {
            iVar4 = *piVar9;
            if ((iVar4 != -1) && (iVar4 != param_7)) {
              FUN_1008e3970("","vdisk",0,"Error: block %u occupied by storage %u, but should be %u",
                            uVar7,iVar4,param_7);
              uVar19 = 0xac9;
              goto LAB_100591b7c;
            }
            if (iVar4 == -1) {
              *piVar9 = param_7;
            }
            uVar14 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar14;
            piVar9 = piVar9 + 8;
          } while (uVar14 < uVar13);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_6);
    }
    while( true ) {
      puVar6 = (undefined8 *)0x0;
      if (lVar15 != lVar16) {
        uVar18 = uVar18 + *(long *)(param_1 + 0x60);
        puVar6 = (undefined8 *)((uVar18 & 0x1ff) * 8 + *(long *)(lVar16 + (uVar18 >> 9) * 8));
      }
      if (puVar17 == puVar6) break;
      uVar14 = 0;
      piVar9 = (int *)(param_5 + 8);
      if (param_6 != 0) {
        do {
          if ((*piVar9 == -1) || (*piVar9 == iVar3)) {
            *param_4 = *param_4 + 1;
            goto LAB_100591a01;
          }
          uVar14 = uVar14 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar14 < param_6);
      }
LAB_100591a80:
      puVar17 = puVar17 + 1;
      if ((long)puVar17 - *plVar8 == 0x1000) {
        puVar17 = (undefined8 *)plVar8[1];
        plVar8 = plVar8 + 1;
      }
      iVar3 = iVar3 + 1;
      uVar18 = *(ulong *)(param_1 + 0x58);
      lVar16 = *(long *)(param_1 + 0x40);
      lVar15 = *(long *)(param_1 + 0x48);
    }
  }
  return;
LAB_100591a01:
  uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  plVar1 = (long *)*puVar17;
  pcVar2 = *(code **)(*plVar1 + 0xa0);
  lVar16 = *(long *)(param_1 + 8);
  uVar19 = *(undefined4 *)(param_1 + 0x18);
  uVar11 = (**(code **)(**(long **)(param_1 + 0x70) + 0x250))();
  in_stack_ffffffffffffff30 = CONCAT44(uVar20,param_7);
  iVar4 = (*pcVar2)(plVar1,UNRECOVERED_JUMPTABLE,param_3,param_8 - lVar16,uVar5,uVar13,uVar19,
                    in_stack_ffffffffffffff30,iVar3,param_5,param_6,uVar11);
  if (-1 < iVar4) goto LAB_100591a80;
  if (iVar4 != -0x7ffdefbc) {
    FUN_1008e3970("","vdisk",0,"Unexpected error from FillTableAsync() 0x%X",iVar4);
    uVar19 = 0xaf7;
LAB_100591b7c:
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","Storage.cpp",uVar19,
                  "FillTableAsync");
    uVar11 = 0x80021025;
    goto LAB_100591b86;
  }
  FUN_100568020(*(undefined8 *)(param_1 + 0x70));
  goto LAB_100591a01;
}

