
undefined8 * FUN_100c8cf20(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  plVar2 = (long *)FUN_100c7fb90(&DAT_1022533d0);
  puVar8 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    piVar3 = (int *)FUN_100c8b370(4);
    puVar8 = (undefined8 *)0x0;
    if (piVar3 != (int *)0x0) {
      *(int **)(*plVar2 + 8) = piVar3;
      *(undefined4 *)*plVar2 = 4;
      iVar1 = 8;
      if (param_3 != 0) {
        iVar1 = param_3;
      }
      pvVar4 = (void *)FUN_100bf3540(iVar1,"p5_pbev2.c",0xdd);
      *(void **)(piVar3 + 2) = pvVar4;
      puVar8 = (undefined8 *)0x0;
      if (pvVar4 != (void *)0x0) {
        *piVar3 = iVar1;
        if (param_2 == (void *)0x0) {
          iVar1 = FUN_100c62190(pvVar4,iVar1);
          puVar8 = (undefined8 *)0x0;
          if (iVar1 < 0) goto LAB_100c8d0df;
        }
        else {
          _memcpy(pvVar4,param_2,(long)iVar1);
        }
        lVar5 = 0x800;
        if (0 < param_1) {
          lVar5 = (long)param_1;
        }
        iVar1 = FUN_100c76820(plVar2[1],lVar5);
        puVar8 = (undefined8 *)0x0;
        if (iVar1 != 0) {
          if (0 < param_5) {
            lVar5 = FUN_100c8b370(2);
            plVar2[2] = lVar5;
            puVar8 = (undefined8 *)0x0;
            if (lVar5 == 0) goto LAB_100c8d0df;
            iVar1 = FUN_100c76820(lVar5,(long)param_5);
            puVar8 = (undefined8 *)0x0;
            if (iVar1 == 0) goto LAB_100c8d0df;
          }
          if ((0 < param_4) && (param_4 != 0xa3)) {
            lVar5 = FUN_100c7ae20();
            plVar2[3] = lVar5;
            puVar8 = (undefined8 *)0x0;
            if (lVar5 == 0) goto LAB_100c8d0df;
            uVar6 = FUN_100bf6fe0(param_4);
            FUN_100c7aec0(lVar5,uVar6,5,0);
          }
          puVar7 = (undefined8 *)FUN_100c7ae20();
          puVar8 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar6 = FUN_100bf6fe0(0x45);
            *puVar7 = uVar6;
            lVar5 = FUN_100c83f00();
            puVar7[1] = lVar5;
            puVar8 = puVar7;
            if ((lVar5 != 0) && (lVar5 = FUN_100c8c6c0(plVar2,&DAT_1022533d0,lVar5 + 8), lVar5 != 0)
               ) {
              *(undefined4 *)puVar7[1] = 0x10;
              FUN_100c801c0(plVar2,&DAT_1022533d0);
              return puVar7;
            }
          }
        }
      }
    }
  }
LAB_100c8d0df:
  FUN_100c62ee0(0xd,0xdb,0x41,"p5_pbev2.c",0x114);
  FUN_100c801c0(plVar2,&DAT_1022533d0);
  FUN_100c7ae40(puVar8);
  return (undefined8 *)0x0;
}

