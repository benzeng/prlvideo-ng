
void FUN_1007d11c0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Data *pDVar4;
  bool bVar5;
  long lVar6;
  Data *pDVar7;
  uint uVar8;
  bool bVar9;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  lVar3 = QObject::sender();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1730,0);
  if (lVar3 == 0) {
    return;
  }
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar3 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar3, lVar6 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_1007d12cf:
    bVar5 = false;
    do {
      while( true ) {
        if (local_50 == local_48) goto LAB_1007d13c8;
        if ((local_40 != 0) && (lVar3 = QAction::menu(), lVar3 != 0)) break;
LAB_1007d12e0:
        local_50 = local_50 + 8;
        local_40 = 1;
      }
      QWidget::actions();
      iVar1 = *(int *)(local_68 + 8);
      pDVar4 = local_68 + (long)iVar1 * 8 + 0x10;
      iVar2 = *(int *)(local_68 + 0xc);
      pDVar7 = pDVar4;
      if (iVar1 != iVar2) {
        lVar3 = (long)iVar2 * 8 + (long)iVar1 * -8;
        do {
          pDVar7 = pDVar4;
          if (*(long *)pDVar4 == param_2) break;
          pDVar4 = pDVar4 + 8;
          lVar3 = lVar3 + -8;
          pDVar7 = local_68 + (long)iVar2 * 8 + 0x10;
        } while (lVar3 != 0);
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d1389;
        }
        QListData::dispose(local_68);
      }
LAB_1007d1389:
      if (pDVar7 == local_68 + (long)iVar2 * 8 + 0x10) goto LAB_1007d12e0;
      local_50 = local_50 + 8;
      uVar8 = local_40 ^ 1;
      bVar5 = true;
      bVar9 = local_40 != 1;
      local_40 = uVar8;
    } while (bVar9);
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_1007d12bf:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007d12bf;
    }
    if (local_40 != 0) goto LAB_1007d12cf;
    bVar5 = false;
  }
LAB_1007d13c8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d13ee;
    }
    QListData::dispose(local_58);
  }
LAB_1007d13ee:
  if (bVar5) {
    FUN_1007d0bb0(param_1,param_2);
  }
  return;
}

