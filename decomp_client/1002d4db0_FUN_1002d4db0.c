
void FUN_1002d4db0(long *param_1)

{
  undefined8 uVar1;
  QString *pQVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar1 = FUN_100370280();
  pQVar2 = (QString *)FUN_1003704b0(uVar1,param_1 + 0xb,DAT_100e152b8);
  if (pQVar2 != (QString *)0x0) {
    QWidget::setWindowOpacity(0.0);
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Wizard_10226eea0);
    QWidget::setWindowTitle(pQVar2);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_22 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_22) goto LAB_1002d4e4d;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1002d4e4d:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

