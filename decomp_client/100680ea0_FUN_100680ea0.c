
void FUN_100680ea0(QObject *param_1,char param_2)

{
  QObject *pQVar1;
  int iVar2;
  int *piVar3;
  QStringList *pQVar4;
  char *pcVar5;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  ExternalRefCountData *local_38;
  AnonymousUnion0 local_30;
  undefined1 local_21;
  
  pcVar5 = "failed";
  if (param_2 != '\0') {
    pcVar5 = "ok";
  }
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download select trial page finished: %s",pcVar5);
  CContentModel::setBusy(SUB81(param_1,0));
  if (((*(long *)(param_1 + 0x188) != 0) && (*(int *)(*(long *)(param_1 + 0x188) + 4) != 0)) &&
     (*(QObject **)(param_1 + 400) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 400),(char *)0x0,param_1,(char *)0x0);
  }
  if (param_2 != '\0') {
    CAbstractWizardModel::goToPage(param_1,6,0);
    return;
  }
  pQVar1 = param_1 + 0x188;
  piVar3 = *(int **)pQVar1;
  if (piVar3 != (int *)0x0) {
    if ((piVar3[1] != 0) && (*(long *)(param_1 + 400) != 0)) {
      QObject::deleteLater();
      piVar3 = *(int **)pQVar1;
      if (piVar3 == (int *)0x0) goto LAB_100680f8d;
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (*(void **)pQVar1 != (void *)0x0)) {
      operator_delete(*(void **)pQVar1);
    }
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)pQVar1 = 0;
  }
LAB_100680f8d:
  iVar2 = CMessageManager::instance();
  CAbstractWizardModel::wizardCtrl();
  pQVar4 = (QStringList *)CWizardController::parentWidget();
  local_30.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_38 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_48 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015501,pQVar4,(QStringList *)&local_30.field0,
             (CSlotInfo *)&local_38,SUB81(&local_78,0));
  QVariant::~QVariant((QVariant *)&local_58);
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_21 = *local_78 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  FUN_100039a80(&local_38);
  FUN_100039a80(&local_30);
  return;
}

