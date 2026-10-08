
void FUN_10018bcf0(long param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  CTaskGenericId *pCVar3;
  long lVar4;
  QObject *pQVar5;
  char *pcVar6;
  QArrayData *local_80;
  CTaskGenericId local_78 [24];
  QString local_60;
  undefined *local_58 [2];
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (2 < DAT_10230ffd0) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    QString::toUtf8();
    pcVar6 = "false";
    if (param_2 != '\0') {
      pcVar6 = "true";
    }
    FUN_100df99c0("","prl_client_app",3,"%s CVmWrap::setOsInstalling( %s )",
                  local_30 + *(long *)(local_30 + 0x10),pcVar6);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10018bda6;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_10018bda6:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10018bdd6;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10018bdd6:
  cVar2 = *(char *)(param_1 + 0xd8);
  if (cVar2 != param_2) {
    *(char *)(param_1 + 0xd8) = param_2;
    if (param_2 == '\0') {
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getVmUuid();
      COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_58,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_21 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10018be4f;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_10018be4f:
      COsInstallationInfo::remove();
      local_58[0] = PTR_vtable_1021e17e0 + 0x10;
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_40 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_21 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10018be96;
        }
        QHashData::free_helper(local_40);
      }
LAB_10018be96:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10018bec6;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_10018bec6:
      QObject::~QObject((QObject *)local_58);
      param_2 = *(char *)(param_1 + 0xd8);
    }
    FUN_100805580(param_1,param_2 != '\0');
    cVar2 = *(char *)(param_1 + 0xd8);
  }
  if (cVar2 == '\0') {
    return;
  }
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100191030(local_78,&local_80);
  lVar4 = CTaskManager::getTaskById(pCVar3);
  CTaskGenericId::~CTaskGenericId(local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10018bf6c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10018bf6c:
  if (lVar4 == 0) {
    pQVar5 = operator_new(0x180);
    FUN_100217490(pQVar5,param_1,0,0,1);
    QTimer::singleShot(0,pQVar5,"1execute()");
  }
  return;
}

