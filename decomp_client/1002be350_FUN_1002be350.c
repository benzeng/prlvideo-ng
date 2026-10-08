
void FUN_1002be350(long *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  Data *pDVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  long lVar11;
  long local_158;
  Data *local_150;
  QArrayData *local_148;
  CVmConfiguration local_140 [248];
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  undefined1 local_31;
  
  if ((param_2 != 1) && (cVar5 = (**(code **)(*param_1 + 0xd8))(param_1), cVar5 == '\0'))
  goto LAB_1002be658;
  puVar3 = PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_44 = 4;
  FUN_100129840(&local_40,&local_44);
  local_48 = 5;
  FUN_100129840(&local_40,&local_48);
  lVar11 = 0;
  if ((param_1[5] != 0) && (lVar11 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar11 = param_1[6];
  }
  cVar5 = FUN_10018c2b0(lVar11);
  CBaseNode::toString(SUB81(&local_148,0),(bool)(cVar5 + '\x10'));
  FUN_100129dd0(local_140,&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002be433;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1002be433:
  (**(code **)(*param_1 + 0xd0))(param_1,local_140,param_2);
  local_150 = (Data *)puVar3;
  CVmConfiguration::getVmSettings();
  lVar6 = CVmSettings::getVmProtection();
  lVar11 = 0;
  if ((param_1[5] != 0) && (lVar11 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar11 = param_1[6];
  }
  FUN_10018c2b0(lVar11);
  CVmConfiguration::getVmSettings();
  uVar7 = CVmSettings::getVmProtection();
  FUN_1002bed80(lVar6 + 0x10,uVar7,&local_150);
  bVar2 = false;
  if (*(int *)(local_150 + 0xc) != *(int *)(local_150 + 8)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    cVar5 = (**(code **)(*param_1 + 0xe0))(param_1,local_140);
    if (cVar5 == '\0') {
      CAbstractTask::removeSubTask((int)param_1);
    }
    pvVar8 = operator_new(600);
    lVar11 = 0;
    if ((param_1[5] != 0) && (lVar11 = 0, *(int *)(param_1[5] + 4) != 0)) {
      lVar11 = param_1[6];
    }
    FUN_100210650(pvVar8,local_140,lVar11,&local_40,0);
    CAbstractTask::execute();
    QObject::connect(&local_158,pvVar8,"2taskFinished(PRL_RESULT)",param_1,
                     "1onTaskEditVmConfigFinished()",0);
    if (local_158 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_158);
    bVar2 = true;
  }
  pDVar4 = local_150;
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002be621;
    }
    iVar1 = *(int *)(local_150 + 0xc);
    if (iVar1 != *(int *)(local_150 + 8)) {
      lVar11 = (long)*(int *)(local_150 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_150 + (long)iVar1 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_1002be600:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_1002be600;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1002be621:
  CVmConfiguration::~CVmConfiguration(local_140);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002be653;
    }
    QListData::dispose(local_40);
  }
LAB_1002be653:
  if (bVar2) {
    return;
  }
LAB_1002be658:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

