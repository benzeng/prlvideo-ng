
void FUN_100282ac0(long *param_1,undefined8 *param_2,int param_3,int param_4)

{
  char cVar1;
  QMapNodeBase *pQVar2;
  ulong *puVar3;
  int iVar4;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QMapNodeBase *local_b0;
  QVariant local_a8;
  undefined *local_98 [2];
  int *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  int local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  QMapNodeBase *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "Web store catalog download to: %s has finished with exit code: %d, exitStatus: %d"
                  ,local_40 + *(long *)(local_40 + 0x10),param_3,param_4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100282b58;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_100282b58:
  if (param_4 != 0 || param_3 != 0) {
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
      cVar1 = CTaskDownloadFile::isCanceled();
      iVar4 = -0x7ffffd8b;
      if (cVar1 != '\0') goto LAB_100282ec7;
    }
    iVar4 = -0x7ffeacdf;
    if (param_4 == 0) {
      iVar4 = (param_3 == 0x19) + 0x80015321;
    }
    goto LAB_100282ec7;
  }
  QObject::QObject((QObject *)local_98,(QObject *)0x0);
  local_88 = (int *)*param_2;
  if (1 < *local_88 + 1U) {
    LOCK();
    *local_88 = *local_88 + 1;
    local_31 = *local_88 != 0;
    UNLOCK();
  }
  local_78 = 0x80000000;
  local_80.field7 = 0;
  local_98[0] = &DAT_1021ef4d0;
  local_68._8_4_ = (int)PTR_shared_null_1021e1288;
  local_68._0_8_ = PTR_shared_null_1021e1288;
  local_68._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_48 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_58 = local_68;
  local_70 = FUN_10027f360(local_98,&local_80);
  QVariant::QVariant(&local_a8,(QVariant *)&local_80);
  QVariant::~QVariant(&local_a8);
  if (local_70 == 0) {
    if (*(int *)local_48 == 0) {
      pQVar2 = (QMapNodeBase *)QMapDataBase::createData();
      local_b0 = pQVar2;
      if (*(long *)(local_48 + 0x10) != 0) {
        puVar3 = (ulong *)FUN_1002833f0(*(long *)(local_48 + 0x10),pQVar2);
        *(ulong **)(pQVar2 + 0x10) = puVar3;
        *puVar3 = *puVar3 & 3 | (ulong)(pQVar2 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      if (*(int *)local_48 != -1) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
      }
      local_b0 = local_48;
      pQVar2 = local_48;
    }
    FUN_100283220(param_1 + 0xe,&local_b0);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100282d31;
      }
      if (*(long *)(pQVar2 + 0x10) != 0) {
        FUN_100283b30();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
LAB_100282d31:
    local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68._0_8_;
    if (1 < *(int *)local_68._0_8_ + 1U) {
      LOCK();
      *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + 1;
      local_31 = *(int *)local_68._0_8_ != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 9),&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100282d93;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_100282d93:
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68._8_8_;
    if (1 < *(int *)local_68._8_8_ + 1U) {
      LOCK();
      *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + 1;
      local_31 = *(int *)local_68._8_8_ != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 10),&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100282df5;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100282df5:
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58._0_8_;
    if (1 < *(int *)local_58._0_8_ + 1U) {
      LOCK();
      *(int *)local_58._0_8_ = *(int *)local_58._0_8_ + 1;
      local_31 = *(int *)local_58._0_8_ != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 0xb),&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100282e57;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_100282e57:
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58._8_8_;
    if (1 < *(int *)local_58._8_8_ + 1U) {
      LOCK();
      *(int *)local_58._8_8_ = *(int *)local_58._8_8_ + 1;
      local_31 = *(int *)local_58._8_8_ != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(param_1 + 0xc),&local_d0);
    iVar4 = 0;
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100282ebb;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
  }
  else {
    iVar4 = -0x7ffeacdd;
    if (local_70 != 4) {
      iVar4 = -0x7ffeacdc;
    }
  }
LAB_100282ebb:
  FUN_100283900(local_98);
LAB_100282ec7:
  (**(code **)(*param_1 + 0xb0))(param_1,iVar4);
  return;
}

