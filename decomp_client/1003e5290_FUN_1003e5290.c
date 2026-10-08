
void FUN_1003e5290(QString *param_1,QString *param_2,QVariant *param_3,QVariant *param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QObject *pQVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  QVariant local_60;
  QVariant local_50;
  QObject *local_40;
  char local_32;
  undefined1 local_31;
  
  local_32 = '\0';
  pQVar1 = param_2->field0_0x0;
  iVar6 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                     PTR_s_VmConfig_1021f1e00,0xffffffff,1);
  if (iVar6 == 0) {
    pQVar2 = (param_3->field0_0x0).field0_0x0.field15;
    iVar6 = QString::compare_helper
                      (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                       PTR_s_Settings_Startup_BootingOrder_Bo_102273e38,0xffffffff,1);
    if (iVar6 == 0) goto LAB_1003e5478;
    plVar3 = *(long **)(param_1[3].field0_0x0 + 0x20);
    pcVar4 = *(code **)(*plVar3 + 0x88);
    local_40 = (param_3->field0_0x0).field0_0x0.field15;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    QVariant::QVariant(&local_50,param_4);
    cVar5 = (*pcVar4)(plVar3,&local_40,&local_50,&local_32);
    QVariant::~QVariant(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003e545d;
      }
      QArrayData::deallocate((QArrayData *)local_40,2,8);
    }
  }
  else {
    pQVar1 = param_2->field0_0x0;
    iVar6 = QString::compare_helper
                      (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                       PTR_s_TimeMachine_1021f1e08,0xffffffff,1);
    if (iVar6 != 0) goto LAB_1003e5478;
    pQVar1 = param_1[3].field0_0x0;
    QVariant::QVariant(&local_60,param_4);
    if (*(long *)(pQVar1 + 0x20) == 0) {
      cVar5 = '\0';
    }
    else {
      pQVar2 = (param_3->field0_0x0).field0_0x0.field15;
      iVar6 = QString::compare_helper
                        (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                         PTR_s_DoNotBackupVm_102273e40,0xffffffff,1);
      if (iVar6 == 0) {
        cVar5 = '\x01';
        QVariant::operator=((QVariant *)(pQVar1 + 0x68),&local_60);
      }
      else {
        cVar5 = '\0';
      }
    }
    local_32 = cVar5;
    QVariant::~QVariant(&local_60);
  }
LAB_1003e545d:
  if ((cVar5 != '\0') && (local_32 != '\0')) {
    CMappingModel::addStorageToSubmit(param_1);
  }
LAB_1003e5478:
  CMappingModel::setValue(param_1,param_2,param_3);
  return;
}

