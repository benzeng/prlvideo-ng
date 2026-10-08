
void FUN_1003a2210(long param_1,undefined4 param_2,undefined4 param_3)

{
  QMacToolBarItem *pQVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  QVariant local_70;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1004e6b70();
  }
  plVar5 = (long *)FUN_10039fd40(param_1,param_2);
  if (plVar5 == (long *)0x0) {
    return;
  }
  QMacToolBar::items();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar7 * 8);
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
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1003a230c:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003a230c;
    }
    if (local_40 == 0) goto LAB_1003a23c9;
  }
  if (local_50 != local_48) {
    do {
      pQVar1 = *(QMacToolBarItem **)local_50;
      QObject::property((char *)&local_70);
      iVar2 = QVariant::toUInt((bool *)&local_70);
      iVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5);
      QVariant::~QVariant(&local_70);
      if (iVar2 == iVar3) {
        MacUtils::selectToolbarItem((QMacToolBar *)(param_1 + 0x60),pQVar1);
        (**(code **)(*plVar5 + 0x1c8))(plVar5,param_2,param_3);
        uVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5);
        FUN_10039fc50(param_1,uVar4);
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_1003a23c9:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

