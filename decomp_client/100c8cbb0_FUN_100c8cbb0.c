
undefined8 *
FUN_100c8cbb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *local_128;
  int local_fc;
  undefined1 local_f8 [24];
  undefined1 local_e0 [168];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_fc = param_6;
  local_38 = lVar6;
  iVar1 = FUN_100c6fa60();
  if (iVar1 == 0) {
    FUN_100c62ee0(0xd,0xa7,0x6c,"p5_pbev2.c",0x68);
    puVar9 = (undefined8 *)0x0;
    plVar5 = (long *)0x0;
    goto LAB_100c8cede;
  }
  uVar4 = FUN_100bf6fe0(iVar1);
  plVar5 = (long *)FUN_100c7fb90(&DAT_1022532f0);
  puVar9 = (undefined8 *)0x0;
  if (plVar5 == (long *)0x0) {
LAB_100c8ceab:
    FUN_100c62ee0(0xd,0xa7,0x41,"p5_pbev2.c",0xba);
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  else {
    puVar7 = (undefined8 *)plVar5[1];
    *puVar7 = uVar4;
    lVar6 = FUN_100c83f00();
    puVar7[1] = lVar6;
    puVar9 = (undefined8 *)0x0;
    if (lVar6 == 0) goto LAB_100c8ceab;
    iVar2 = FUN_100c6fbe0(param_1);
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (iVar2 != 0) {
      iVar2 = FUN_100c6fbe0(param_1);
      if (param_5 == 0) {
        iVar2 = FUN_100c62190(local_f8,iVar2);
        puVar9 = (undefined8 *)0x0;
        if (iVar2 < 0) goto LAB_100c8cede;
      }
      else {
        ___memcpy_chk(local_f8,param_5,(long)iVar2,0x10);
      }
    }
    local_128 = local_f8;
    FUN_100c66060(local_e0);
    puVar9 = (undefined8 *)0x0;
    iVar2 = FUN_100c66110(local_e0,param_1,0,0,local_128,0);
    if (iVar2 != 0) {
      iVar2 = FUN_100c6f7e0(local_e0,puVar7[1]);
      if (-1 < iVar2) {
        if ((local_fc == -1) && (iVar2 = FUN_100c665a0(local_e0,7,0,&local_fc), iVar2 < 1)) {
          FUN_100c63270();
          local_fc = 0xa3;
        }
        FUN_100c66520(local_e0);
        uVar3 = 0xffffffff;
        if (iVar1 == 0x25) {
          uVar3 = FUN_100c6fbf0(param_1);
        }
        FUN_100c7ae40(*plVar5);
        lVar6 = FUN_100c8cf20(param_2,param_3,param_4,local_fc,uVar3);
        *plVar5 = lVar6;
        puVar9 = (undefined8 *)0x0;
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)FUN_100c7ae20();
          puVar9 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            lVar8 = FUN_100c83f00();
            puVar7[1] = lVar8;
            lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
            puVar9 = puVar7;
            if (lVar8 != 0) {
              uVar4 = FUN_100bf6fe0(0xa1);
              *puVar7 = uVar4;
              lVar8 = FUN_100c8c6c0(plVar5,&DAT_1022532f0,puVar7[1] + 8);
              if (lVar8 != 0) {
                *(undefined4 *)puVar7[1] = 0x10;
                FUN_100c801c0(plVar5,&DAT_1022532f0);
                goto LAB_100c8cefe;
              }
            }
          }
        }
        goto LAB_100c8ceab;
      }
      FUN_100c62ee0(0xd,0xa7,0x72,"p5_pbev2.c",0x85);
      FUN_100c66520(local_e0);
      puVar9 = (undefined8 *)0x0;
    }
  }
LAB_100c8cede:
  FUN_100c801c0(plVar5,&DAT_1022532f0);
  puVar7 = (undefined8 *)0x0;
  FUN_100c7ae40(0);
  FUN_100c7ae40(puVar9);
LAB_100c8cefe:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar7;
}

