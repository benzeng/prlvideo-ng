
long FUN_1007cfad0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  QMutex *pQVar10;
  uint uVar11;
  bool bVar12;
  long *local_40;
  uint local_34;
  
  bVar12 = false;
  local_34 = param_3;
  if (-2 < DAT_1011bff68) {
    if (-1 < DAT_1011bff68) {
      QMutex::lock();
      if (DAT_1011bff68 == 0) {
        pQVar10 = operator_new(8);
        QMutex::QMutex(pQVar10,0);
        DAT_1011bff70 = pQVar10;
        if ((DAT_1011bff88 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_1011bff88), iVar4 != 0)) {
          ___cxa_atexit(FUN_1007d2410,&DAT_1011bff80,0x100000000);
          ___cxa_guard_release(&DAT_1011bff88);
        }
        DAT_1011bff68 = -1;
      }
      QMutex::unlock();
    }
    bVar12 = false;
    if (DAT_1011bff70 != (QMutex *)0x0) {
      QMutex::lock();
      bVar12 = true;
    }
  }
  if (-1 < DAT_1011bff90) {
    QMutex::lock();
    if (DAT_1011bff90 == 0) {
      DAT_1011bff98 = operator_new(8);
      *DAT_1011bff98 = (long)PTR_shared_null_100ba2180;
      if ((DAT_1011bffb0 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_1011bffb0), iVar4 != 0)) {
        ___cxa_atexit(FUN_1007d2460,&DAT_1011bffa8,0x100000000);
        ___cxa_guard_release(&DAT_1011bffb0);
      }
      DAT_1011bff90 = -1;
    }
    QMutex::unlock();
  }
  plVar3 = DAT_1011bff98;
  puVar1 = (undefined8 *)*DAT_1011bff98;
  if (*(uint *)(puVar1 + 4) != 0) {
    uVar11 = *(uint *)((long)puVar1 + 0x24) ^ param_3;
    puVar5 = *(undefined8 **)(puVar1[1] + ((ulong)uVar11 % (ulong)*(uint *)(puVar1 + 4)) * 8);
    for (puVar2 = puVar5; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar11) && (*(uint *)((long)puVar2 + 0xc) == param_3)) {
        if (puVar2 != puVar1) {
          lVar8 = 0;
          if (*(int *)((long)puVar1 + 0x14) == 0) goto LAB_1007cfde2;
          lVar8 = 0;
          goto LAB_1007cfb90;
        }
        break;
      }
    }
  }
  if ((int)param_3 < 0x800) {
    if (param_3 != 0x200) {
      if ((param_3 == 0x400) && (lVar6 = FUN_1008768f0(), lVar6 != 0)) {
        uVar7 = FUN_10084bc20(&DAT_1011a6080,0x80,0);
        *(undefined8 *)(lVar6 + 8) = uVar7;
        lVar8 = FUN_10084bc20(&DAT_1011a6100,1,0);
        *(long *)(lVar6 + 0x10) = lVar8;
        if ((lVar8 != 0) && (*(long *)(lVar6 + 8) != 0)) goto LAB_1007cfd74;
        FUN_100876b00(lVar6);
      }
      goto LAB_1007cfd59;
    }
    lVar6 = FUN_1008768f0();
    if (lVar6 == 0) goto LAB_1007cfd59;
    uVar7 = FUN_10084bc20(&DAT_1011a6030,0x40,0);
    *(undefined8 *)(lVar6 + 8) = uVar7;
    lVar8 = FUN_10084bc20(&DAT_1011a6070,1,0);
    *(long *)(lVar6 + 0x10) = lVar8;
    if ((lVar8 == 0) || (*(long *)(lVar6 + 8) == 0)) {
      FUN_100876b00(lVar6);
      goto LAB_1007cfd59;
    }
  }
  else {
    if (param_3 == 0x800) {
      lVar6 = FUN_1008768f0();
      if (lVar6 != 0) {
        uVar7 = FUN_10084bc20(&DAT_1011a6110,0x100,0);
        *(undefined8 *)(lVar6 + 8) = uVar7;
        lVar8 = FUN_10084bc20(&DAT_1011a6210,1,0);
        *(long *)(lVar6 + 0x10) = lVar8;
        if ((lVar8 != 0) && (*(long *)(lVar6 + 8) != 0)) goto LAB_1007cfd74;
        FUN_100876b00(lVar6);
      }
    }
    else if ((param_3 == 0x1000) && (lVar6 = FUN_1008768f0(), lVar6 != 0)) {
      uVar7 = FUN_10084bc20(&DAT_1011a6220,0x200,0);
      *(undefined8 *)(lVar6 + 8) = uVar7;
      lVar8 = FUN_10084bc20(&DAT_1011a6420,1,0);
      *(long *)(lVar6 + 0x10) = lVar8;
      if ((lVar8 != 0) && (*(long *)(lVar6 + 8) != 0)) goto LAB_1007cfd74;
      FUN_100876b00(lVar6);
    }
LAB_1007cfd59:
    lVar6 = FUN_100876ea0(param_3,2,0,0);
    lVar8 = 0;
    if (lVar6 == 0) goto LAB_1007cfde2;
  }
LAB_1007cfd74:
  lVar8 = lVar6;
  plVar9 = operator_new(0x20);
  *(undefined4 *)(plVar9 + 1) = 1;
  plVar9[2] = lVar8;
  *plVar9 = (long)&PTR_FUN_1011a6440;
  plVar9[3] = (long)FUN_100876b00;
  local_40 = plVar9;
  FUN_1007d24e0(plVar3,&local_34,&local_40);
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_1007cfde2:
  if (bVar12) {
    QMutex::unlock();
  }
  return lVar8;
  while (puVar5 = (undefined8 *)*puVar5, puVar5 != puVar1) {
LAB_1007cfb90:
    if ((*(uint *)(puVar5 + 1) == uVar11) && (*(uint *)((long)puVar5 + 0xc) == param_3)) {
      lVar8 = 0;
      if (puVar5 != puVar1) {
        plVar3 = (long *)puVar5[2];
        lVar8 = 0;
        if (plVar3 != (long *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          lVar8 = plVar3[2];
          LOCK();
          plVar9 = plVar3 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      break;
    }
  }
  goto LAB_1007cfde2;
}

