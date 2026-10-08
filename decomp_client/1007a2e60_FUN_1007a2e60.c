
void FUN_1007a2e60(QObject *param_1,char param_2)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  QAbstractAnimation *this;
  long lVar4;
  Data *pDVar5;
  long local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QPixmap local_68 [32];
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x148) != 0) goto LAB_1007a3110;
  this = operator_new(0x20);
  QAbstractAnimation::QAbstractAnimation(this,param_1);
  *(undefined ***)this = &PTR_FUN_10222d700;
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  *(undefined **)(this + 0x10) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  *(QAbstractAnimation **)(param_1 + 0x148) = this;
  lVar4 = 1;
  do {
    local_78 = (QArrayData *)QString::fromAscii_helper(":/progress_indicator_mac_white%1.png",0x24);
    QString::arg(&local_70,&local_78,lVar4,0,10,0x20);
    QPixmap::QPixmap(local_68,&local_70,0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a2f54;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1007a2f54:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a2f84;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1007a2f84:
    cVar2 = QPixmap::isNull();
    if (cVar2 == '\0') {
      FUN_1007a6ce0(&local_48,local_68);
    }
    QPixmap::~QPixmap(local_68);
    lVar4 = lVar4 + 1;
  } while (lVar4 < 0xd);
  lVar4 = *(long *)(param_1 + 0x148);
  if (*(Data **)(lVar4 + 0x10) != local_48) {
    FUN_1007a6ba0(&local_40,&local_48);
    pDVar1 = *(Data **)(lVar4 + 0x10);
    *(Data **)(lVar4 + 0x10) = local_40;
    local_40 = pDVar1;
    if (*(int *)pDVar1 != -1) {
      if (*(int *)pDVar1 != 0) {
        LOCK();
        *(int *)pDVar1 = *(int *)pDVar1 + -1;
        local_31 = *(int *)pDVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a304e;
      }
      iVar3 = *(int *)(pDVar1 + 0xc);
      if (iVar3 != *(int *)(pDVar1 + 8)) {
        lVar4 = (long)*(int *)(pDVar1 + 8) * 8 + (long)iVar3 * -8;
        pDVar5 = pDVar1 + (long)iVar3 * 8 + 8;
        do {
          if (*(long **)pDVar5 != (long *)0x0) {
            (**(code **)(**(long **)pDVar5 + 8))();
          }
          pDVar5 = pDVar5 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar1);
    }
  }
LAB_1007a304e:
  lVar4 = *(long *)(param_1 + 0x148);
  *(undefined4 *)(lVar4 + 0x18) = 1000;
  QAbstractAnimation::setLoopCount((int)lVar4);
  QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x148),"2pixmapChanged(QPixmap)",param_1,
                   "1update()",0);
  if (local_80 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  pDVar1 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a3110;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar4 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_48 + (long)iVar3 * 8 + 8;
      do {
        if (*(long **)pDVar5 != (long *)0x0) {
          (**(code **)(**(long **)pDVar5 + 8))();
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar1);
  }
LAB_1007a3110:
  iVar3 = QAbstractAnimation::state();
  if (param_2 == '\0') {
    if (iVar3 == 2) {
      QAbstractAnimation::stop();
    }
  }
  else if (iVar3 == 0) {
    QAbstractAnimation::setCurrentTime((int)*(undefined8 *)(param_1 + 0x148));
    QAbstractAnimation::start(*(undefined8 *)(param_1 + 0x148),0);
  }
  QWidget::update();
  return;
}

