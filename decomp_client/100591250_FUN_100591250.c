
void FUN_100591250(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  QMacToolBarItem *pQVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  QVariant local_78;
  char local_61;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  plVar4 = (long *)FUN_1005905b0();
  if (plVar4 == (long *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t set current page %d",param_2);
    return;
  }
  (**(code **)(*plVar4 + 0x1a0))(plVar4,param_3,param_4);
  iVar2 = QStackedWidget::indexOf(*(QWidget **)(param_1 + 0xb0));
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
  if (*(int *)local_60 == -1) {
LAB_1005913a2:
    if (local_50 != local_48) {
      do {
        if (local_40 == 0) {
LAB_100591437:
          local_50 = local_50 + 8;
          local_40 = 1;
        }
        else {
          pQVar1 = *(QMacToolBarItem **)local_50;
          local_61 = '\x01';
          QObject::property((char *)&local_78);
          iVar3 = QVariant::toInt((bool *)&local_78);
          QVariant::~QVariant(&local_78);
          if ((iVar2 != iVar3) || (local_61 == '\0')) goto LAB_100591437;
          MacUtils::selectToolbarItem(*(QMacToolBar **)(param_1 + 0xd0),pQVar1);
          local_50 = local_50 + 8;
          uVar5 = local_40 ^ 1;
          bVar8 = local_40 == 1;
          local_40 = uVar5;
          if (bVar8) break;
        }
      } while (local_50 != local_48);
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_100591392:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100591392;
    }
    if (local_40 != 0) goto LAB_1005913a2;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059147f;
    }
    QListData::dispose(local_58);
  }
LAB_10059147f:
  FUN_100590670(param_1,iVar2);
  return;
}

