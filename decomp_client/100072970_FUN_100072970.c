
void FUN_100072970(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  QString *pQVar5;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 == '\0') {
    MacUtils::cancelMenuTracking(*(QMenu **)(*(long *)(param_1 + 0x10) + 0x18),false);
    if (*(long *)(param_1 + 0x18) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    CSystemStatusBarItem::setVisible(SUB81(*(long *)(param_1 + 0x20),0));
    return;
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    FUN_100072590(param_1);
  }
  else {
    CSystemStatusBarItem::setPosition(*(long *)(param_1 + 0x20),3);
    uVar4 = false;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = false, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x20);
    }
    CSystemStatusBarItem::setVisible((bool)uVar4);
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar3 = FUN_10075afb0();
  if (lVar3 != 0) {
    uVar1 = FUN_10018f890(lVar3);
    if (uVar1 < 0x80c) {
      iVar2 = FUN_10018f860();
      if (iVar2 == 8) {
        QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Right_click_for_the_Windows_Star_10226e408);
        QString::operator=(&local_28,&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_19 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_100072b16;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
      }
    }
    else {
      QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Right_click_for_the_Windows_Star_10226e410);
      QString::operator=(&local_28,&local_30);
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          local_19 = *(int *)local_30.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100072b16;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
  }
LAB_100072b16:
  pQVar5 = (QString *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar5 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar5 = *(QString **)(param_1 + 0x20);
  }
  CSystemStatusBarItem::setToolTip(pQVar5);
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

