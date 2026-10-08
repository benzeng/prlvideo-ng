
QString * FUN_10026ca90(QString *param_1,long param_2)

{
  QString *this;
  undefined4 uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  QString local_88;
  QString local_80;
  QTypedArrayData<unsigned_short> *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  this = (QString *)(param_2 + 0x50);
  if (*(int *)(*(long *)(param_2 + 0x50) + 4) == 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x58) == 3) {
      uVar4 = 0;
      if ((lVar2 != 0) && (uVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
      }
      FUN_10018d860(&local_48,uVar4);
      QDir::QDir(local_40,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026cb2a;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_10026cb2a:
      QDir::cdUp();
      QDir::absolutePath();
      QString::operator=(this,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026cb7c;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_10026cb7c:
      QDir::~QDir(local_40);
    }
    else {
      uVar4 = 0;
      if ((lVar2 != 0) && (uVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
      }
      uVar4 = FUN_10018d490(uVar4);
      FUN_100109c10(&local_58,uVar4);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10026cbe7;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
  }
LAB_10026cbe7:
  if (*(int *)(*(long *)(param_2 + 0x48) + 4) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x58);
    uVar4 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
    }
    FUN_10018d830(&local_68,uVar4);
    uVar4 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
    }
    uVar4 = FUN_10018d490(uVar4);
    FUN_100726820(&local_60,uVar1,&local_68,uVar4);
    QString::operator=((QString *)(param_2 + 0x48),&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026cc88;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10026cc88:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026ccb8;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10026ccb8:
  uVar3 = QDir::separator();
  local_78 = this->field0_0x0;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  iVar5 = *(int *)(local_78 + 4);
  if ((1 < *(uint *)local_78) || ((*(uint *)(local_78 + 8) & 0x7fffffff) < iVar5 + 2U)) {
    QString::reallocData((uint)&local_78,SUB41(iVar5 + 2U,0));
    iVar5 = *(int *)(local_78 + 4);
  }
  *(int *)(local_78 + 4) = iVar5 + 1;
  *(undefined2 *)(local_78 + (long)iVar5 * 2 + *(long *)(local_78 + 0x10)) = uVar3;
  *(undefined2 *)(local_78 + (long)*(int *)(local_78 + 4) * 2 + *(long *)(local_78 + 0x10)) = 0;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  local_70.field0_0x0 = local_78;
  QString::append(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026cd7e;
    }
    QArrayData::deallocate((QArrayData *)local_78,2,8);
  }
LAB_10026cd7e:
  FileUtils::browseForFile(&local_80,&local_70,5,0,0,0);
  QString::operator=(param_1,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026cdd4;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10026cdd4:
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMS]",5);
    SandboxFileAccessHelpers::saveBookmark(param_1,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026ce2e;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
LAB_10026ce2e:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return param_1;
}

