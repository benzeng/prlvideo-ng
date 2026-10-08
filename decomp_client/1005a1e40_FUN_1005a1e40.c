
void FUN_1005a1e40(QString *param_1,QString *param_2,QVariant *param_3,QVariant *param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  QVariant *this;
  QString *pQVar5;
  QObject *pQVar6;
  QVariant local_68;
  QObject *local_58;
  QVariant local_50;
  QObject *local_40;
  char local_32;
  undefined1 local_31;
  
  local_32 = '\0';
  pQVar1 = param_2->field0_0x0;
  iVar4 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                     PTR_s_UserPreferences_102274480,0xffffffff,1);
  if (iVar4 == 0) {
    pQVar1 = param_1[3].field0_0x0;
    pcVar2 = *(code **)(*(long *)pQVar1 + 0x48);
    local_40 = (param_3->field0_0x0).field0_0x0.field15;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    QVariant::QVariant(&local_50,param_4);
    cVar3 = (*pcVar2)(pQVar1,&local_40,&local_50,&local_32);
    QVariant::~QVariant(&local_50);
    if (*(int *)local_40 != -1) {
      pQVar6 = local_40;
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        iVar4 = *(int *)local_40;
        UNLOCK();
joined_r0x0001005a205d:
        local_31 = iVar4 != 0;
        if ((bool)local_31) goto LAB_1005a20aa;
      }
LAB_1005a209b:
      QArrayData::deallocate((QArrayData *)pQVar6,2,8);
    }
  }
  else {
    pQVar1 = param_2->field0_0x0;
    iVar4 = QString::compare_helper
                      (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                       PTR_s_DispPreferences_102274488,0xffffffff,1);
    if (iVar4 == 0) {
      pQVar1 = param_1[4].field0_0x0;
      pcVar2 = *(code **)(*(long *)pQVar1 + 0x48);
      local_58 = (param_3->field0_0x0).field0_0x0.field15;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      QVariant::QVariant(&local_68,param_4);
      cVar3 = (*pcVar2)(pQVar1,&local_58,&local_68,&local_32);
      QVariant::~QVariant(&local_68);
      if (*(int *)local_58 != -1) {
        pQVar6 = local_58;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          iVar4 = *(int *)local_58;
          UNLOCK();
          goto joined_r0x0001005a205d;
        }
        goto LAB_1005a209b;
      }
    }
    else {
      pQVar1 = param_2->field0_0x0;
      iVar4 = QString::compare_helper
                        (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                         PTR_s_ShortcutsStorage_102274490,0xffffffff,1);
      if (iVar4 == 0) {
        pQVar5 = param_1 + 10;
LAB_1005a2069:
        this = (QVariant *)FUN_1002edf40(pQVar5,param_3);
        QVariant::operator=(this,param_4);
        local_32 = '\x01';
      }
      else {
        pQVar1 = param_2->field0_0x0;
        iVar4 = QString::compare_helper
                          (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                           PTR_s_SendKeyToVmListStorage_102274498,0xffffffff,1);
        if (iVar4 == 0) {
          pQVar5 = param_1 + 0xb;
          goto LAB_1005a2069;
        }
        pQVar1 = param_2->field0_0x0;
        iVar4 = QString::compare_helper
                          (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                           PTR_s_NetworkConfigStorage_1022744a0,0xffffffff,1);
        if (iVar4 != 0) goto LAB_1005a20c1;
        FUN_1005a2180(param_1,param_3,param_4,&local_32);
      }
      cVar3 = '\x01';
    }
  }
LAB_1005a20aa:
  if ((cVar3 != '\0') && (local_32 != '\0')) {
    CMappingModel::addStorageToSubmit(param_1);
  }
LAB_1005a20c1:
  CMappingModel::setValue(param_1,param_2,param_3);
  return;
}

