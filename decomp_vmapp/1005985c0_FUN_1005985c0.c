
int FUN_1005985c0(long param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar6 = (int)*(undefined8 *)(param_1 + 0x60) - 1;
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                              ((ulong)uVar6 + *(long *)(param_1 + 0x58) >> 9) * 8) +
                    ((ulong)((int)*(long *)(param_1 + 0x58) + uVar6) & 0x1ff) * 8);
  iVar8 = -0x7ffdefcd;
  if (lVar10 != 0) {
    plVar9 = (long *)___dynamic_cast(lVar10,&PTR_vtable_10111dd60,&PTR_vtable_100bcc3b0,
                                     0xffffffffffffffff);
    if (plVar9 != (long *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0xe0))(plVar9);
      iVar8 = 0;
      if (cVar5 == '\0') {
        plVar3 = (long *)*param_2;
        param_2[8] = 0;
        lVar10 = FUN_10069cb00(plVar9);
        param_2[7] = lVar10;
        plVar1 = param_2 + 0xb;
        lVar10 = param_2[1];
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        uVar11 = FUN_100575a30(plVar3,*(undefined8 *)(param_1 + 8));
        uVar12 = FUN_100575a30(plVar3,*(undefined8 *)(param_1 + 0x10));
        uVar13 = (**(code **)(*plVar3 + 0x328))(plVar3);
        uVar7 = (**(code **)(*plVar3 + 0x300))(plVar3);
        cVar5 = FUN_1006a8f40(plVar1,lVar10,uVar2,uVar11,uVar12,uVar13,uVar7,(int)plVar3[0x22b] != 0
                             );
        iVar8 = -0x7ffeffed;
        if (cVar5 != '\0') {
          pcVar4 = *(code **)(*plVar9 + 0xd8);
          uVar11 = (**(code **)(*plVar3 + 0x250))(plVar3);
          iVar8 = (*pcVar4)(plVar9,FUN_1005f5bb0,param_2,uVar11,0,0xffffffff);
          if (iVar8 < 0) {
            FUN_1008e3970("","vdisk",0,"StartBatScanning() failed for with error = 0x%X",iVar8);
            FUN_1006a8ec0(plVar1);
          }
          else {
            FUN_100568020(plVar3);
            FUN_1006a8ec0(plVar1);
            iVar8 = 0;
          }
        }
      }
    }
  }
  return iVar8;
}

