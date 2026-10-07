
QString * FUN_1006da0c0(QString *param_1)

{
  long lVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QDir local_70 [8];
  QDir local_68 [8];
  QString local_60;
  QString local_58;
  undefined1 local_49;
  QArrayData **local_48;
  QArrayData **local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  local_90 = (QArrayData *)
             QString::fromAscii_helper("4C6364ACXT.com.parallels.desktop.appstore",0x29);
  puVar3 = PTR_shared_null_100ba20d0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  FUN_1006d6200(&local_60,&local_90);
  QString::operator=(param_1,&local_60);
  piVar2 = (int *)CONCAT71(local_60.field0_0x0._1_7_,local_60.field0_0x0._0_1_);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_49 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1006da154;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_60.field0_0x0._1_7_,local_60.field0_0x0._0_1_),2,8);
  }
LAB_1006da154:
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    QDir::QDir(local_68,param_1);
    cVar4 = QDir::exists();
    QDir::~QDir(local_68);
    if ((cVar4 == '\0') &&
       (param_1->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0)) {
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
      QString::operator=(param_1,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_49 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1006da1cd;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
  }
LAB_1006da1cd:
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    local_80 = (QArrayData *)QString::fromAscii_helper("%1/Library/Group Containers/%2",0x1e);
    FUN_1006e1490(&local_88);
    local_48 = &local_88;
    local_40 = &local_90;
    QString::multiArg((int)&local_78,(QString **)&local_80);
    QDir::QDir(local_70,&local_78);
    cVar4 = QDir::exists();
    QDir::~QDir(local_70);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_49 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1006da26b;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1006da26b:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1006da29b;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1006da29b:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1006da2cb;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1006da2cb:
    if (cVar4 != '\0') {
      FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "!path.isEmpty() || !QDir(QString(\"%1/Library/Group Containers/%2\") .arg(ParallelsDirs::getCurrentUserHomeDir(), groupId)).exists()"
                    ,"ParallelsDirs.cpp",0x8c1,"getSandboxAppGroupPath");
    }
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_60.field0_0x0._0_1_ = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_60.field0_0x0._0_1_) goto LAB_1006da348;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1006da348:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

