
QIcon * FUN_1006b0b20(QIcon *param_1,undefined8 param_2)

{
  char cVar1;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  FUN_10069dca0(param_2);
  cVar1 = QAction::isChecked();
  if (cVar1 == '\0') {
    local_28.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper(":/pixmaps/PW7_Theme/ActionIcons/actionSummaryView.png",0x35);
    QIcon::QIcon(param_1,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return param_1;
        }
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  else {
    local_20.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper
                   (":/pixmaps/PW7_Theme/ActionIcons/actionSummaryView_toggled.png",0x3d);
    QIcon::QIcon(param_1,&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) {
          return param_1;
        }
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  return param_1;
}

