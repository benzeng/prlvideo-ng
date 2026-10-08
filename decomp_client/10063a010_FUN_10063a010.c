
void FUN_10063a010(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  QLocale local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  undefined4 local_40;
  int iStack_3c;
  QString local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_21;
  
  uVar2 = QCursor::pos();
  _local_40 = CONCAT44((int)((ulong)uVar2 >> 0x20) + -0x28,(int)uVar2);
  local_48 = (QArrayData *)QString::fromAscii_helper("#become_registered_user",0x17);
  iVar1 = QString::indexOf(param_2,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063a090;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10063a090:
  if (iVar1 != -1) {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Fill_in_a_short_form_102270558);
    QToolTip::showText((QPoint *)&local_40,&local_50,*(QWidget **)(param_1 + 0x98));
    if (*(int *)local_50.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_10063a1f4;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    local_30 = 0;
    local_2c = 0;
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QToolTip::showText((QPoint *)&local_30,&local_38,(QWidget *)0x0);
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_38.field0_0x0;
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_10063a1f4;
  }
  local_60 = (QArrayData *)
             QString::fromAscii_helper("http://www.parallels.com/buy-pdfm12-@LOCALE@",0x2c);
  QLocale::QLocale(local_68);
  FUN_100d3f730(&local_58,&local_60,local_68);
  QToolTip::showText((QPoint *)&local_40,&local_58,*(QWidget **)(param_1 + 0x98));
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10063a17f;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10063a17f:
  QLocale::~QLocale(local_68);
  if (*(int *)local_60 == -1) {
    return;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (*(int *)local_60 != 0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 != 0) {
      return;
    }
    local_21 = 0;
  }
LAB_10063a1f4:
  QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  return;
}

