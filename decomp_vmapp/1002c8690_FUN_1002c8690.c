
uint FUN_1002c8690(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  
  if ((int)param_1[0x292] == 3) {
    FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","m_speed != HOST_SPEED_SUPER",
                  "../Usb/CUsbHost.cpp",0x181,"ProcessFrame");
  }
  uVar4 = *(uint *)(param_1 + 0xb);
  uVar11 = 0xffffffff;
  if (uVar4 != 0) {
    uVar11 = 0xffffffff;
    uVar7 = 0;
    do {
      lVar10 = param_1[uVar7 + 0xc];
      if (lVar10 != 0) {
        if (((int)param_1[7] != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
          (**(code **)(*param_1 + 0x60))(param_1,uVar7 & 0xffffffff);
          lVar10 = param_1[uVar7 + 0xc];
        }
        uVar4 = FUN_1002d7030(lVar10);
        if (uVar4 <= uVar11) {
          uVar11 = uVar4;
        }
        uVar4 = *(uint *)(param_1 + 0xb);
      }
      uVar7 = uVar7 + 1;
    } while ((uint)uVar7 < uVar4);
  }
  iVar5 = (int)param_1[0x291];
  if (((uint)(iVar5 - *(int *)((long)param_1 + 0x148c)) < DAT_1011c5654) &&
     (DAT_1011c5650 <= uVar11)) {
    uVar11 = DAT_1011c5650;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  plVar6 = (long *)param_1[5];
  if ((long *)param_1[5] != param_1 + 5) {
    while( true ) {
      plVar3 = (long *)*plVar6;
      if (0x1000 < (uint)(iVar5 - *(int *)((long)plVar6 + 0x24))) {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] Aborting stale endpoint",(long)plVar6 + 0x4f);
        }
        FUN_1002d94a0(plVar6 + -0x10);
      }
      if (plVar3 == param_1 + 5) break;
      iVar5 = (int)param_1[0x291];
      plVar6 = plVar3;
    }
  }
  if ((long *)param_1[3] != param_1 + 3) {
    plVar6 = (long *)param_1[3];
    do {
      plVar1 = (long *)*plVar6;
      plVar3 = plVar6 + -8;
      plVar8 = (long *)plVar6[-8];
      while (plVar8 != plVar3) {
        if (*(int *)((long)plVar8 + 0x464) == 0) {
          if (plVar8 != plVar3) goto LAB_1002c88c5;
          break;
        }
        lVar10 = *plVar8;
        plVar2 = (long *)plVar8[1];
        *(long **)(lVar10 + 8) = plVar2;
        *plVar2 = lVar10;
        *plVar8 = 0x112233;
        plVar8[1] = (long)&DAT_00445566;
        *(int *)(plVar6 + -6) = (int)plVar6[-6] + -1;
        if ((*(uint *)(plVar8 + 0x8e) & 2) == 0) {
          DAT_1011c5620[1] = (long)plVar8;
          *plVar8 = (long)DAT_1011c5620;
          puVar9 = &DAT_1011c5620;
          DAT_1011c5620 = plVar8;
        }
        else {
          DAT_1011c5630[1] = (long)plVar8;
          *plVar8 = (long)DAT_1011c5630;
          puVar9 = &DAT_1011c5630;
          DAT_1011c5630 = plVar8;
        }
        plVar8[1] = (long)puVar9;
        plVar8 = (long *)*plVar3;
      }
      lVar10 = *plVar6;
      plVar3 = (long *)plVar6[1];
      *(long **)(lVar10 + 8) = plVar3;
      *plVar3 = lVar10;
      *plVar6 = (long)plVar6;
      plVar6[1] = (long)plVar6;
LAB_1002c88c5:
      plVar6 = plVar1;
    } while (plVar1 != param_1 + 3);
  }
  uVar4 = *(uint *)(param_1 + 0x8e);
  if (uVar4 != 0) {
    *(undefined4 *)(param_1 + 0x8e) = 0;
    (**(code **)(*param_1 + 0x40))(param_1,uVar4 & 0xffff);
  }
  *(long *)(param_1[0x294] + 0xf0) = *(long *)(param_1[0x294] + 0xf0) + 1;
  uVar4 = DAT_1011c5650;
  if (DAT_1011c5650 <= uVar11) {
    uVar4 = uVar11;
  }
  if (uVar11 == 0) {
    uVar4 = uVar11;
  }
  return uVar4;
}

