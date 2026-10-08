
void FUN_1003e4ad0(long param_1)

{
  QVariant *this;
  char cVar1;
  uint uVar2;
  QObject *pQVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auVar10 [12];
  char local_39;
  QVariant local_38;
  
  QFutureInterfaceBase::waitForResult((int)param_1 + 0x88);
  lVar6 = QFutureInterfaceBase::mutex();
  if (lVar6 != 0) {
    QMutex::lock();
  }
  iVar5 = QFutureInterfaceBase::resultStoreBase();
  auVar10 = QtPrivate::ResultStoreBase::resultAt(iVar5);
  plVar7 = *(long **)(auVar10._0_8_ + 0x28);
  if (*(int *)(auVar10._0_8_ + 0x20) != 0) {
    plVar7 = (long *)((long)auVar10._8_4_ + *(long *)(*plVar7 + 0x10) + *plVar7);
  }
  if (lVar6 != 0) {
    QMutex::unlock();
  }
  cVar1 = (char)*plVar7;
  this = (QVariant *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x70);
  local_39 = cVar1;
  if ((uVar2 & 0x3fffffff) != 0) {
    cVar4 = QVariant::toBool();
    pcVar9 = "false";
    pcVar8 = "false";
    if (cVar4 != '\0') {
      pcVar8 = "true";
    }
    if (cVar1 != '\0') {
      pcVar9 = "true";
    }
    FUN_100df99c0("","prl_client_app",0,
                  "TM value changed to %s while initialization. Skip initialization result %s ",
                  pcVar8,pcVar9);
    return;
  }
  if ((uVar2 & 0x40000000) == 0) {
    if ((uVar2 & 0x3ffffff8) < 8) {
      *(undefined4 *)(param_1 + 0x70) = 1;
      (this->field0_0x0).field0_0x0.field0 = cVar1;
      goto LAB_1003e4c1b;
    }
  }
  else if (((uVar2 & 0x3ffffff8) < 8) &&
          (pQVar3 = (this->field0_0x0).field0_0x0.field15, *(int *)(pQVar3 + 8) == 1)) {
    *(uint *)(param_1 + 0x70) = uVar2 & 0x40000000 | 1;
    **(char **)pQVar3 = cVar1;
    goto LAB_1003e4c1b;
  }
  QVariant::QVariant(&local_38,1,&local_39,0);
  QVariant::operator=(this,&local_38);
  QVariant::~QVariant(&local_38);
LAB_1003e4c1b:
  CMappingModel::dataChanged();
  return;
}

