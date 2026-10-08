
void FUN_10071ce70(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  Data *pDVar11;
  QArrayData *pQVar12;
  long lVar13;
  QKeySequence local_88 [8];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  long *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar13 = *(long *)(param_1 + 0x30);
  iVar6 = *(int *)(lVar13 + 8);
  if (iVar6 != *(int *)(lVar13 + 0xc)) {
    plVar9 = (long *)(lVar13 + 0x10 + (long)iVar6 * 8);
    lVar13 = (long)*(int *)(lVar13 + 0xc) * 8 + (long)iVar6 * -8;
    do {
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 8))();
      }
      plVar9 = plVar9 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  FUN_100721aa0(param_1 + 0x30);
  cVar2 = FUN_10071f870(param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_102310998 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1006faf60(pvVar7);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar7;
  }
  FUN_1006fb680(&local_40,DAT_102310998,0);
  FUN_10055d1a0(&local_60,&local_40);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  pQVar12 = (QArrayData *)PTR_shared_null_1021e1288;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      uVar1 = *(undefined8 *)local_58;
      uVar8 = FUN_10071bea0(uVar1);
      if ((uVar8 & 2) == 0) break;
      plVar9 = operator_new(0x20);
      local_70 = pQVar12;
      uVar3 = FUN_10071c5d0(param_1,&local_70);
      uVar10 = FUN_10071fac0(param_1,uVar3);
      FUN_100724390(plVar9,uVar10);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10071cfdd;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10071cfdd:
      local_68 = plVar9;
      uVar4 = FUN_10071bf00(uVar1);
      uVar5 = FUN_10071bf10(uVar1);
      cVar2 = FUN_1007243e0(plVar9,uVar4,uVar5);
      if (cVar2 == '\0') {
        iVar6 = FUN_10071bf00(uVar1);
        QKeySequence::QKeySequence(local_88,iVar6,1,0,0);
        FUN_1007170a0(&local_80,local_88,0);
        QString::toUtf8();
        pQVar12 = local_78;
        lVar13 = *(long *)(local_78 + 0x10);
        uVar4 = FUN_10071bf10(uVar1);
        FUN_100df99c0("","prl_client_app",0,
                      "Mouse key action %s for button %d was not added into hook (already exist or some other reason)."
                      ,pQVar12 + lVar13,uVar4);
        pQVar12 = (QArrayData *)PTR_shared_null_1021e1288;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10071d0d6;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10071d0d6:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10071d106;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10071d106:
        QKeySequence::~QKeySequence(local_88);
        (**(code **)(*plVar9 + 8))();
      }
      else {
        FUN_100722610(param_1 + 0x30,&local_68);
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071d19f;
    }
    iVar6 = *(int *)(local_60 + 0xc);
    if (iVar6 != *(int *)(local_60 + 8)) {
      lVar13 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar6 * -8;
      pDVar11 = local_60 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_10071d19f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar6 = *(int *)(local_40 + 0xc);
    if (iVar6 != *(int *)(local_40 + 8)) {
      lVar13 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar6 * -8;
      pDVar11 = local_40 + (long)iVar6 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

