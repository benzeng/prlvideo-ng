
int * FUN_100cbb9f0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                   char *param_5,size_t param_6,long param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_f8 [24];
  undefined1 local_e0 [168];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar4 = FUN_100cba1b0();
  piVar8 = (int *)0x0;
  if (lVar4 == 0) goto LAB_100cbbde2;
  if ((param_7 == 0) && (param_7 = *(long *)(*(long *)(lVar4 + 0x18) + 0x18), param_7 == 0)) {
    FUN_100c62ee0(0x2e,0xa5,0x7e,"cms_pwri.c",0x71);
  }
  else if ((param_3 < 1) || (param_3 == 0x37d)) {
    puVar5 = (undefined8 *)FUN_100c7ae20();
    piVar8 = (int *)0x0;
    puVar10 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_100cbbd8e;
    FUN_100c66060(local_e0);
    iVar2 = FUN_100c66e00(local_e0,param_7,0,0,0);
    if (iVar2 < 1) {
      uVar7 = 6;
      uVar11 = 0x82;
LAB_100cbbd1d:
      FUN_100c62ee0(0x2e,0xa5,uVar7,"cms_pwri.c",uVar11);
LAB_100cbbd22:
      FUN_100c66520(local_e0);
    }
    else {
      iVar2 = FUN_100c6fa50(local_e0);
      if (0 < iVar2) {
        iVar2 = FUN_100c62190(local_f8,iVar2);
        if (0 < iVar2) {
          iVar2 = FUN_100c66e00(local_e0,0,0,0,local_f8);
          if (iVar2 < 1) {
            uVar7 = 6;
            uVar11 = 0x8c;
          }
          else {
            lVar6 = FUN_100c83f00();
            puVar5[1] = lVar6;
            if (lVar6 == 0) {
              uVar7 = 0x41;
              uVar11 = 0x91;
            }
            else {
              iVar2 = FUN_100c6f7e0(local_e0,lVar6);
              if (0 < iVar2) goto LAB_100cbbb3a;
              uVar7 = 0x66;
              uVar11 = 0x96;
            }
          }
          goto LAB_100cbbd1d;
        }
        goto LAB_100cbbd22;
      }
LAB_100cbbb3a:
      uVar7 = FUN_100c6fba0(local_e0);
      uVar3 = FUN_100c6fa60(uVar7);
      uVar7 = FUN_100bf6fe0(uVar3);
      *puVar5 = uVar7;
      FUN_100c66520(local_e0);
      piVar8 = (int *)FUN_100c7fb90(&DAT_102258890);
      puVar10 = puVar5;
      if (piVar8 == (int *)0x0) {
LAB_100cbbd8e:
        FUN_100c62ee0(0x2e,0xa5,0x41,"cms_pwri.c",0xcd);
        FUN_100c66520(local_e0);
        if (piVar8 != (int *)0x0) goto LAB_100cbbdc0;
      }
      else {
        puVar9 = (undefined8 *)FUN_100c7fb90(&DAT_1022586d0);
        *(undefined8 **)(piVar8 + 2) = puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_100cbbd8e;
        *piVar8 = 3;
        FUN_100c7ae40(puVar9[2]);
        lVar6 = FUN_100c7ae20();
        puVar9[2] = lVar6;
        if (lVar6 == 0) goto LAB_100cbbd8e;
        uVar7 = FUN_100bf6fe0(0x37d);
        *(undefined8 *)puVar9[2] = uVar7;
        lVar6 = FUN_100c83f00();
        *(long *)(puVar9[2] + 8) = lVar6;
        if ((lVar6 == 0) || (lVar6 = FUN_100c8c6c0(puVar5,&DAT_102251530,lVar6 + 8), lVar6 == 0))
        goto LAB_100cbbd8e;
        **(undefined4 **)(puVar9[2] + 8) = 0x10;
        FUN_100c7ae40(puVar5);
        lVar6 = FUN_100c8cf20(param_2,0,0,0xffffffff,0xffffffff);
        puVar9[1] = lVar6;
        if (lVar6 != 0) {
          if (*piVar8 == 3) {
            lVar6 = *(long *)(piVar8 + 2);
            *(char **)(lVar6 + 0x20) = param_5;
            if ((param_5 != (char *)0x0) && ((long)param_6 < 0)) {
              param_6 = _strlen(param_5);
            }
            *(size_t *)(lVar6 + 0x28) = param_6;
          }
          else {
            FUN_100c62ee0(0x2e,0xa8,0xb1,"cms_pwri.c",0x47);
          }
          *puVar9 = 0;
          iVar2 = FUN_100c604e0(*(undefined8 *)(lVar4 + 0x10),piVar8);
          puVar10 = (undefined8 *)0x0;
          if (iVar2 != 0) goto LAB_100cbbde2;
          goto LAB_100cbbd8e;
        }
        FUN_100c66520(local_e0);
        puVar10 = (undefined8 *)0x0;
LAB_100cbbdc0:
        FUN_100c801c0(piVar8,&DAT_102258890);
      }
      piVar8 = (int *)0x0;
      puVar5 = puVar10;
      if (puVar10 == (undefined8 *)0x0) goto LAB_100cbbde2;
    }
    FUN_100c7ae40(puVar5);
  }
  else {
    FUN_100c62ee0(0x2e,0xa5,0xb3,"cms_pwri.c",0x76);
  }
  piVar8 = (int *)0x0;
LAB_100cbbde2:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar8;
}

