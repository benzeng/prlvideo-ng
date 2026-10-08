
void FUN_100ae8db0(QObject *param_1,QObject *param_2,undefined8 *param_3)

{
  QObject *this;
  QObject *pQVar1;
  int *piVar2;
  undefined *puVar3;
  ushort uVar4;
  uid_t uVar5;
  QString QVar6;
  QArrayData *pQVar7;
  QLocalServer *this_00;
  uint uVar8;
  QString local_d8;
  QDir local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10223b530;
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x10) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  puVar3 = PTR_shared_null_1021e1288;
  this = param_1 + 0x10;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e1288;
  pQVar1 = param_1 + 0x28;
  FUN_100aea9b0(pQVar1);
  local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)this;
  QVar6.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
    QVar6.field0_0x0 = *(QTypedArrayData<unsigned_short> **)this;
  }
  if (*(int *)(QVar6.field0_0x0 + 4) == 0) {
    QCoreApplication::applicationFilePath();
    QString::operator=((QString *)this,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ae8e85;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100ae8e85:
    QString::QString(&local_48,0x2f);
    QString::section(&local_60,this,&local_48,0xffffffff,0xffffffff,0);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ae8ee1;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100ae8ee1:
    QString::operator=(&local_50,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ae8f1e;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_100ae8f1e:
  local_70 = (QArrayData *)QString::fromAscii_helper("[^a-zA-Z]",9);
  QRegExp::QRegExp((QRegExp *)&local_68,&local_70,1,0);
  local_40 = (QArrayData *)puVar3;
  QString::replace((QRegExp *)&local_50,&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae8f8c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ae8f8c:
  QRegExp::~QRegExp((QRegExp *)&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae8fc5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100ae8fc5:
  QString::truncate((int)&local_50);
  QString::toUtf8();
  uVar4 = qChecksum((char *)(local_78 + *(long *)(local_78 + 0x10)),*(uint *)(local_78 + 4));
  pQVar7 = (QArrayData *)QString::fromLatin1_helper("qtsingleapp-",0xc);
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    local_31 = *(int *)pQVar7 != 0;
    UNLOCK();
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
  QString::append(&local_90);
  local_88 = (QArrayData *)local_90.field0_0x0;
  if (1 < *(uint *)local_90.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_90.field0_0x0 = *(uint *)local_90.field0_0x0 + 1;
    local_31 = *(uint *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  uVar8 = *(uint *)(local_90.field0_0x0 + 4);
  if ((1 < *(uint *)local_90.field0_0x0) ||
     ((*(uint *)(local_90.field0_0x0 + 8) & 0x7fffffff) < uVar8 + 2)) {
    QString::reallocData((uint)&local_88,SUB41(uVar8 + 2,0));
    uVar8 = *(uint *)(local_88 + 4);
  }
  *(uint *)(local_88 + 4) = uVar8 + 1;
  *(undefined2 *)(local_88 + (long)(int)uVar8 * 2 + *(long *)(local_88 + 0x10)) = 0x2d;
  *(undefined2 *)(local_88 + (long)(int)*(uint *)(local_88 + 4) * 2 + *(long *)(local_88 + 0x10)) =
       0;
  QString::number((int)&local_98,(uint)uVar4);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
  if (1 < *(uint *)local_88 + 1) {
    LOCK();
    *(uint *)local_88 = *(uint *)local_88 + 1;
    local_31 = *(uint *)local_88 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  QString::operator=((QString *)(param_1 + 0x18),&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae912b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100ae912b:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae9161;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100ae9161:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae9191;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100ae9191:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae91c7;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100ae91c7:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae91f6;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100ae91f6:
  uVar5 = _getuid();
  QString::number((uint)&local_a8,uVar5);
  QString::QString(&local_a0,0x2d);
  QString::append(&local_a0);
  QString::append((QString *)(param_1 + 0x18));
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae927b;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100ae927b:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae92b1;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100ae92b1:
  this_00 = operator_new(0x10);
  QLocalServer::QLocalServer(this_00,param_1);
  *(QLocalServer **)(param_1 + 0x20) = this_00;
  QDir::tempPath();
  QDir::QDir(local_d0,&local_d8);
  QDir::absolutePath();
  local_c0 = local_c8;
  if (1 < *(uint *)local_c8 + 1) {
    LOCK();
    *(uint *)local_c8 = *(uint *)local_c8 + 1;
    local_31 = *(uint *)local_c8 != 0;
    UNLOCK();
  }
  uVar8 = *(uint *)(local_c8 + 4);
  if ((1 < *(uint *)local_c8) || ((*(uint *)(local_c8 + 8) & 0x7fffffff) < uVar8 + 2)) {
    QString::reallocData((uint)&local_c0,SUB41(uVar8 + 2,0));
    uVar8 = *(uint *)(local_c0 + 4);
  }
  *(uint *)(local_c0 + 4) = uVar8 + 1;
  *(undefined2 *)(local_c0 + (long)(int)uVar8 * 2 + *(long *)(local_c0 + 0x10)) = 0x2f;
  *(undefined2 *)(local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 2 + *(long *)(local_c0 + 0x10)) =
       0;
  if (1 < *(uint *)local_c0 + 1) {
    LOCK();
    *(uint *)local_c0 = *(uint *)local_c0 + 1;
    local_31 = *(uint *)local_c0 != 0;
    UNLOCK();
  }
  local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c0;
  QString::append(&local_b8);
  pQVar7 = (QArrayData *)QString::fromLatin1_helper("-lockfile",9);
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(uint *)local_b8.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_b8.field0_0x0 = *(uint *)local_b8.field0_0x0 + 1;
    local_31 = *(uint *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_b0);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae9429;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100ae9429:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae945f;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100ae945f:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae9495;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100ae9495:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae94cb;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100ae94cb:
  QDir::~QDir(local_d0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae950d;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100ae950d:
  QFile::setFileName((QString *)pQVar1);
  FUN_100aeaa40(pQVar1,3);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae955f;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100ae955f:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae9596;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100ae9596:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

