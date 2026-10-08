
void FUN_10039eea0(long param_1)

{
  long lVar1;
  QString *pQVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = param_1 + 0x20;
  lVar4 = FUN_1003b0a30(lVar1);
  if (lVar4 == 0) {
    FUN_100df99c0("[CFG_ED]","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar5 = FUN_1003b0ad0(lVar1);
  cVar3 = FUN_1003e5e80(uVar5);
  CAuthorizationLock::setLockState
            (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),(cVar3 == '\0') + '\x01');
  uVar5 = FUN_1003b0a30(lVar1);
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmSettings();
  CVmSettings::getLockDown();
  CVmLockDown::getHash();
  iVar6 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039ef4b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10039ef4b:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x30);
  if (iVar6 == 0) {
    CAuthorizationLock::resetCustomText();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    FUN_100d80630(1);
    QWidget::setEnabled(SUB81(uVar5,0));
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    FUN_100d80630(1);
    iVar6 = (int)uVar5;
    goto LAB_10039f046;
  }
  QMetaObject::tr((char *)&local_38,"",0x1df1474);
  CAuthorizationLock::setCustomText(pQVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039efb8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10039efb8:
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
  iVar6 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
LAB_10039f046:
  QWidget::setMaximumWidth(iVar6);
  return;
}

