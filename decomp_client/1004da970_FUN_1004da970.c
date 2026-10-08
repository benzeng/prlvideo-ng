
void FUN_1004da970(long *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  QWidget *pQVar8;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar3 = FUN_1003b0b30(param_1[8]);
  if (cVar3 != '\0') {
    return;
  }
  iVar4 = (**(code **)(*param_1 + 0x228))(param_1);
  lVar6 = QListWidget::item(iVar4);
  if (lVar6 == 0) {
    return;
  }
  lVar6 = ___dynamic_cast(lVar6,PTR_typeinfo_1021e16d0,&PTR_vtable_1022740f0,0x10);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_1004dcaa0(param_1,*(undefined4 *)(lVar6 + 0x3c),*(undefined4 *)(lVar6 + 0x40));
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: failed to find a valid page for dialog item %d %d",
                  *(undefined4 *)(lVar6 + 0x3c),*(undefined4 *)(lVar6 + 0x40));
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_1004daaf2;
  uVar5 = FUN_10044e5b0(lVar7);
  FUN_1003b4c00(&local_48,uVar5);
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar2 = local_40;
  lVar1 = *(long *)(local_40 + 0x10);
  uVar5 = FUN_10044e5a0(lVar7);
  FUN_100df99c0("","prl_client_app",3,"Changing page to %s %d",pQVar2 + lVar1,uVar5);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004daac2;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1004daac2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004daaf2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004daaf2:
  pQVar8 = (QWidget *)(**(code **)(*param_1 + 0x220))(param_1);
  QStackedWidget::setCurrentWidget(pQVar8);
  (**(code **)(*param_1 + 0x230))
            (param_1,*(undefined4 *)(lVar6 + 0x3c),*(undefined4 *)(lVar6 + 0x40));
  FUN_10083b620(param_1,*(undefined4 *)(lVar6 + 0x3c),*(undefined4 *)(lVar6 + 0x40));
  return;
}

