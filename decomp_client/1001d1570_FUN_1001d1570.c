
undefined4 FUN_1001d1570(long param_1,undefined4 *param_2)

{
  QString *this;
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  QArrayData *local_b0;
  undefined1 local_a8 [8];
  QDir local_a0 [8];
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QFileInfo local_78 [8];
  QString local_70;
  QString local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  this = (QString *)(param_1 + 0x40);
  QString::operator=(this,(QString *)(param_2 + 2));
  plVar1 = (long *)(param_1 + 0x48);
  FUN_1000e5fc0(plVar1,param_2 + 4);
  if (*(int *)(*(long *)(param_1 + 0x40) + 4) == 0) {
    QCoreApplication::applicationFilePath();
    QString::operator=(this,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        iVar7 = *(int *)local_40.field0_0x0;
        UNLOCK();
        goto joined_r0x0001001d177f;
      }
      goto LAB_1001d1785;
    }
  }
  else {
    uVar4 = QDir::separator();
    local_50 = this->field0_0x0;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    iVar7 = *(int *)(local_50 + 4);
    if ((1 < *(uint *)local_50) || ((*(uint *)(local_50 + 8) & 0x7fffffff) < iVar7 + 2U)) {
      QString::reallocData((uint)&local_50,SUB41(iVar7 + 2U,0));
      iVar7 = *(int *)(local_50 + 4);
    }
    *(int *)(local_50 + 4) = iVar7 + 1;
    *(undefined2 *)(local_50 + (long)iVar7 * 2 + *(long *)(local_50 + 0x10)) = uVar4;
    *(undefined2 *)(local_50 + (long)*(int *)(local_50 + 4) * 2 + *(long *)(local_50 + 0x10)) = 0;
    QCoreApplication::applicationFilePath();
    QFileInfo::QFileInfo(local_60,&local_68);
    QFileInfo::fileName();
    local_48.field0_0x0 = local_50;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
    QString::append(&local_48);
    QString::operator=(this,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d16c1;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1001d16c1:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d16f1;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001d16f1:
    QFileInfo::~QFileInfo(local_60);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d172a;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1001d172a:
    if (*(int *)local_50 != -1) {
      local_40.field0_0x0 = local_50;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        iVar7 = *(int *)local_50;
        UNLOCK();
joined_r0x0001001d177f:
        local_31 = iVar7 != 0;
        if ((bool)local_31) goto LAB_1001d1794;
      }
LAB_1001d1785:
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1001d1794:
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("prl_client_app",0xe);
  QFileInfo::QFileInfo(local_78,this);
  QFileInfo::fileName();
  cVar3 = operator==(&local_80,&local_70);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d1801;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1001d1801:
  if (cVar3 == '\0') {
    QFileInfo::dir();
    QDir::absolutePath();
    uVar4 = QDir::separator();
    local_90 = local_98;
    if (1 < *(uint *)local_98 + 1) {
      LOCK();
      *(uint *)local_98 = *(uint *)local_98 + 1;
      local_31 = *(uint *)local_98 != 0;
      UNLOCK();
    }
    uVar8 = *(uint *)(local_98 + 4);
    if ((1 < *(uint *)local_98) || ((*(uint *)(local_98 + 8) & 0x7fffffff) < uVar8 + 2)) {
      QString::reallocData((uint)&local_90,SUB41(uVar8 + 2,0));
      uVar8 = *(uint *)(local_90 + 4);
    }
    *(uint *)(local_90 + 4) = uVar8 + 1;
    *(undefined2 *)(local_90 + (long)(int)uVar8 * 2 + *(long *)(local_90 + 0x10)) = uVar4;
    *(undefined2 *)(local_90 + (long)(int)*(uint *)(local_90 + 4) * 2 + *(long *)(local_90 + 0x10))
         = 0;
    if (1 < *(uint *)local_90 + 1) {
      LOCK();
      *(uint *)local_90 = *(uint *)local_90 + 1;
      local_31 = *(uint *)local_90 != 0;
      UNLOCK();
    }
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
    QString::append(&local_88);
    QString::operator=(this,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d190f;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1001d190f:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d1945;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1001d1945:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d197b;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1001d197b:
    QDir::~QDir(local_a0);
  }
  if (*(int *)(*plVar1 + 0xc) == *(int *)(*plVar1 + 8)) {
    QCoreApplication::arguments();
    FUN_1000e5fc0(plVar1,local_a8);
    FUN_100039a80(local_a8);
    FUN_100094da0(plVar1,0);
    puVar2 = PTR_s___sba_upgrade_10230ffa0;
    iVar7 = -1;
    if (PTR_s___sba_upgrade_10230ffa0 != (undefined *)0x0) {
      sVar6 = _strlen(PTR_s___sba_upgrade_10230ffa0);
      iVar7 = (int)sVar6;
    }
    local_b0 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar7);
    FUN_1000e5580(plVar1,&local_b0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d1a3a;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
  }
LAB_1001d1a3a:
  uVar5 = FUN_1001d12b0(param_1,0,1,*param_2);
  QFileInfo::~QFileInfo(local_78);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return uVar5;
}

