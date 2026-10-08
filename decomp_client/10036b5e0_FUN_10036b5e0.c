
void FUN_10036b5e0(long param_1,uint param_2)

{
  QString *pQVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance to update widget title.");
    return;
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 < 2) {
    local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d830(&local_68,uVar4);
    QString::arg(&local_58,&local_60,&local_68,0,0x20);
    QString::operator=(&local_28,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_19 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b867;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10036b867:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_19 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b897;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10036b897:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b8c7;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    lVar3 = FUN_10036c660(*(undefined8 *)(param_1 + 0x10));
    if (lVar3 == 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: can\'t get server instance to update widget title.");
      goto LAB_10036ba0b;
    }
    local_40 = (QArrayData *)QString::fromAscii_helper("%1: %2",6);
    FUN_10015a020(&local_48,lVar3);
    QString::arg(&local_38,&local_40,&local_48,0,0x20);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018d830(&local_50,uVar4);
    QString::arg(&local_30,&local_38,&local_50,0,0x20);
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b6e9;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_10036b6e9:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b719;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10036b719:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b749;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10036b749:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b779;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10036b779:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b8c7;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10036b8c7:
  QString::operator=((QString *)(param_1 + 0x40),&local_28);
  MacUtils::setAlternateWindowTitle(*(QWidget **)(param_1 + 0x10),&local_28);
  FUN_100833360(*(undefined8 *)(param_1 + 0x10),&local_28);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = FUN_10018ffc0(uVar4);
  pQVar1 = *(QString **)(param_1 + 0x10);
  if (cVar2 == '\0') {
    QWidget::setWindowTitle(pQVar1);
  }
  else {
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Wizard_10226eea0);
    QWidget::setWindowTitle(pQVar1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_19 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10036b97e;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10036b97e:
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(QString **)(param_1 + 0x30) != (QString *)0x0)) {
    QWidget::setWindowTitle(*(QString **)(param_1 + 0x30));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  QWidget::windowTitle();
  FUN_100833310(uVar4,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036ba0b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10036ba0b:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

