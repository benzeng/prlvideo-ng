
undefined8 * FUN_1008b19a0(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  plVar2 = (long *)FUN_1008a4610(&DAT_100be2dc0);
  puVar8 = (undefined8 *)0x0;
  if (plVar2 != (long *)0x0) {
    piVar3 = (int *)FUN_1008afdf0(4);
    puVar8 = (undefined8 *)0x0;
    if (piVar3 != (int *)0x0) {
      *(int **)(*plVar2 + 8) = piVar3;
      *(undefined4 *)*plVar2 = 4;
      iVar1 = 8;
      if (param_3 != 0) {
        iVar1 = param_3;
      }
      pvVar4 = (void *)FUN_10081ddd0(iVar1,"p5_pbev2.c",0xdd);
      *(void **)(piVar3 + 2) = pvVar4;
      puVar8 = (undefined8 *)0x0;
      if (pvVar4 != (void *)0x0) {
        *piVar3 = iVar1;
        if (param_2 == (void *)0x0) {
          iVar1 = FUN_100886f90(pvVar4,iVar1);
          puVar8 = (undefined8 *)0x0;
          if (iVar1 < 0) goto LAB_1008b1b5f;
        }
        else {
          _memcpy(pvVar4,param_2,(long)iVar1);
        }
        lVar5 = 0x800;
        if (0 < param_1) {
          lVar5 = (long)param_1;
        }
        iVar1 = FUN_10089b2a0(plVar2[1],lVar5);
        puVar8 = (undefined8 *)0x0;
        if (iVar1 != 0) {
          if (0 < param_5) {
            lVar5 = FUN_1008afdf0(2);
            plVar2[2] = lVar5;
            puVar8 = (undefined8 *)0x0;
            if (lVar5 == 0) goto LAB_1008b1b5f;
            iVar1 = FUN_10089b2a0(lVar5,(long)param_5);
            puVar8 = (undefined8 *)0x0;
            if (iVar1 == 0) goto LAB_1008b1b5f;
          }
          if ((0 < param_4) && (param_4 != 0xa3)) {
            lVar5 = FUN_10089f8a0();
            plVar2[3] = lVar5;
            puVar8 = (undefined8 *)0x0;
            if (lVar5 == 0) goto LAB_1008b1b5f;
            uVar6 = FUN_100821870(param_4);
            FUN_10089f940(lVar5,uVar6,5,0);
          }
          puVar7 = (undefined8 *)FUN_10089f8a0();
          puVar8 = (undefined8 *)0x0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar6 = FUN_100821870(0x45);
            *puVar7 = uVar6;
            lVar5 = FUN_1008a8980();
            puVar7[1] = lVar5;
            puVar8 = puVar7;
            if ((lVar5 != 0) && (lVar5 = FUN_1008b1140(plVar2,&DAT_100be2dc0,lVar5 + 8), lVar5 != 0)
               ) {
              *(undefined4 *)puVar7[1] = 0x10;
              FUN_1008a4c40(plVar2,&DAT_100be2dc0);
              return puVar7;
            }
          }
        }
      }
    }
  }
LAB_1008b1b5f:
  FUN_100887ce0(0xd,0xdb,0x41,"p5_pbev2.c",0x114);
  FUN_1008a4c40(plVar2,&DAT_100be2dc0);
  FUN_10089f8c0(puVar8);
  return (undefined8 *)0x0;
}

