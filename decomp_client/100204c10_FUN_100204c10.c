
undefined8 FUN_100204c10(long param_1)

{
  QString *this;
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  long local_40;
  undefined1 local_31;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  pQVar2 = operator_new(0x68);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001449a0(pQVar2,uVar7);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  piVar4 = *(int **)(param_1 + 0x80);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x80);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x80));
      }
    }
    *(int **)(param_1 + 0x80) = piVar3;
    *(QObject **)(param_1 + 0x88) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x80) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x88);
  }
  QObject::connect(&local_40,uVar7,"2canceled()",param_1,"1breakImport()",0);
  if (local_40 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
LAB_100204d31:
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                  "Tasks/CTaskImportBootCampVm.cpp",0xe2,"importVm");
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    if (cVar1 == '\0') goto LAB_100204d31;
  }
  plVar6 = (long *)0x0;
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (plVar6 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
    plVar6 = *(long **)(param_1 + 0x88);
  }
  (**(code **)(*plVar6 + 0x1a0))();
  local_58 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,(int)PTR_s_Imported_10226fe10);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018d830(&local_68,uVar7);
  QString::arg(&local_48,&local_50,&local_68,0,0x20);
  this = (QString *)(param_1 + 0x40);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100204e62;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100204e62:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100204e92;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100204e92:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100204ec2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100204ec2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100204ef2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100204ef2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100204f22;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100204f22:
  lVar5 = 1;
  do {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x58);
    }
    cVar1 = FUN_100109f80(uVar7,this);
    if (cVar1 == '\0') break;
    local_88 = (QArrayData *)QString::fromAscii_helper("%1 %2 %3",8);
    QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,(int)PTR_s_Imported_10226fe10);
    QString::arg(&local_80,&local_88,&local_90,0,0x20);
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_10018d830(&local_98,uVar7);
    QString::arg(&local_78,&local_80,&local_98,0,0x20);
    QString::arg(&local_70,&local_78,lVar5,0,10,0x20);
    QString::operator=(this,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10020504e;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_10020504e:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10020507e;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10020507e:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002050b4;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1002050b4:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002050e4;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002050e4:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10020511a;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10020511a:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10020514a;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10020514a:
    lVar5 = lVar5 + 1;
  } while (lVar5 < 10000);
  FUN_100204a00(param_1);
  FUN_10080e230(param_1,0);
  return 0;
}

