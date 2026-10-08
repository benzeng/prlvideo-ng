
void FUN_100578100(long param_1,uint param_2)

{
  QString *pQVar1;
  undefined8 uVar2;
  int iVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 < 2) {
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x78);
    QMetaObject::tr((char *)&local_30,"",0x1dd1ed6);
    QLabel::setText(pQVar1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10057817a;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_10057817a:
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68);
  }
  else {
    if ((param_2 & 0xfffffffe) != 2) goto LAB_100578205;
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x78);
    QMetaObject::tr((char *)&local_38,"",0x1e00bae);
    QLabel::setText(pQVar1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005781f6;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1005781f6:
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68);
  }
  QProgressBar::setMaximum(iVar3);
LAB_100578205:
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x70);
  CAbstractTask::canBeTerminated();
  QWidget::setEnabled(SUB81(uVar2,0));
  return;
}

