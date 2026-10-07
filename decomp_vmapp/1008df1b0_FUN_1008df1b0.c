
int * FUN_1008df1b0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
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
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  lVar4 = FUN_1008dd970();
  piVar8 = (int *)0x0;
  if (lVar4 == 0) goto LAB_1008df5a2;
  if ((param_7 == 0) && (param_7 = *(long *)(*(long *)(lVar4 + 0x18) + 0x18), param_7 == 0)) {
    FUN_100887ce0(0x2e,0xa5,0x7e,"cms_pwri.c",0x71);
  }
  else if ((param_3 < 1) || (param_3 == 0x37d)) {
    puVar5 = (undefined8 *)FUN_10089f8a0();
    piVar8 = (int *)0x0;
    puVar10 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1008df54e;
    FUN_10088ae60(local_e0);
    iVar2 = FUN_10088bc00(local_e0,param_7,0,0,0);
    if (iVar2 < 1) {
      uVar7 = 6;
      uVar11 = 0x82;
LAB_1008df4dd:
      FUN_100887ce0(0x2e,0xa5,uVar7,"cms_pwri.c",uVar11);
LAB_1008df4e2:
      FUN_10088b320(local_e0);
    }
    else {
      iVar2 = FUN_1008944d0(local_e0);
      if (0 < iVar2) {
        iVar2 = FUN_100886f90(local_f8,iVar2);
        if (0 < iVar2) {
          iVar2 = FUN_10088bc00(local_e0,0,0,0,local_f8);
          if (iVar2 < 1) {
            uVar7 = 6;
            uVar11 = 0x8c;
          }
          else {
            lVar6 = FUN_1008a8980();
            puVar5[1] = lVar6;
            if (lVar6 == 0) {
              uVar7 = 0x41;
              uVar11 = 0x91;
            }
            else {
              iVar2 = FUN_100894260(local_e0,lVar6);
              if (0 < iVar2) goto LAB_1008df2fa;
              uVar7 = 0x66;
              uVar11 = 0x96;
            }
          }
          goto LAB_1008df4dd;
        }
        goto LAB_1008df4e2;
      }
LAB_1008df2fa:
      uVar7 = FUN_100894620(local_e0);
      uVar3 = FUN_1008944e0(uVar7);
      uVar7 = FUN_100821870(uVar3);
      *puVar5 = uVar7;
      FUN_10088b320(local_e0);
      piVar8 = (int *)FUN_1008a4610(&DAT_100be8280);
      puVar10 = puVar5;
      if (piVar8 == (int *)0x0) {
LAB_1008df54e:
        FUN_100887ce0(0x2e,0xa5,0x41,"cms_pwri.c",0xcd);
        FUN_10088b320(local_e0);
        if (piVar8 != (int *)0x0) goto LAB_1008df580;
      }
      else {
        puVar9 = (undefined8 *)FUN_1008a4610(&DAT_100be80c0);
        *(undefined8 **)(piVar8 + 2) = puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_1008df54e;
        *piVar8 = 3;
        FUN_10089f8c0(puVar9[2]);
        lVar6 = FUN_10089f8a0();
        puVar9[2] = lVar6;
        if (lVar6 == 0) goto LAB_1008df54e;
        uVar7 = FUN_100821870(0x37d);
        *(undefined8 *)puVar9[2] = uVar7;
        lVar6 = FUN_1008a8980();
        *(long *)(puVar9[2] + 8) = lVar6;
        if ((lVar6 == 0) || (lVar6 = FUN_1008b1140(puVar5,&DAT_100be0f20,lVar6 + 8), lVar6 == 0))
        goto LAB_1008df54e;
        **(undefined4 **)(puVar9[2] + 8) = 0x10;
        FUN_10089f8c0(puVar5);
        lVar6 = FUN_1008b19a0(param_2,0,0,0xffffffff,0xffffffff);
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
            FUN_100887ce0(0x2e,0xa8,0xb1,"cms_pwri.c",0x47);
          }
          *puVar9 = 0;
          iVar2 = FUN_1008852e0(*(undefined8 *)(lVar4 + 0x10),piVar8);
          puVar10 = (undefined8 *)0x0;
          if (iVar2 != 0) goto LAB_1008df5a2;
          goto LAB_1008df54e;
        }
        FUN_10088b320(local_e0);
        puVar10 = (undefined8 *)0x0;
LAB_1008df580:
        FUN_1008a4c40(piVar8,&DAT_100be8280);
      }
      piVar8 = (int *)0x0;
      puVar5 = puVar10;
      if (puVar10 == (undefined8 *)0x0) goto LAB_1008df5a2;
    }
    FUN_10089f8c0(puVar5);
  }
  else {
    FUN_100887ce0(0x2e,0xa5,0xb3,"cms_pwri.c",0x76);
  }
  piVar8 = (int *)0x0;
LAB_1008df5a2:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar8;
}

