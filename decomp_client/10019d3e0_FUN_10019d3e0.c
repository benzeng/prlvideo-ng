
void FUN_10019d3e0(QSize *param_1)

{
  QSize QVar1;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1001c72e0(&local_30);
  QLabel::text();
  QString::replace(&local_38,0x40,&local_30,1);
  QLabel::setText((QString *)param_1[0x17]);
  if (*(int *)((long)param_1[0x1e] + 0x28) == 0) {
    QStackedWidget::setCurrentIndex(param_1[0xd].field0_0x0);
    QVar1 = param_1[0x13];
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dd5719);
    QLabel::setText((QString *)QVar1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10019d5d7;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10019d5d7:
    QLabel::text();
    QString::operator=(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10019d624;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10019d624:
    local_50 = (QArrayData *)QString::fromAscii_helper("@",1);
    QString::replace(&local_38,&local_50,&local_30,1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10019d67f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10019d67f:
    QLabel::setText((QString *)param_1[0x13]);
  }
  else {
    QStackedWidget::setCurrentIndex(param_1[0xd].field0_0x0);
    QVar1 = param_1[0x10];
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,0x1dd5dfa);
    QLabel::setText((QString *)QVar1);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10019d4ae;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10019d4ae:
    QLabel::text();
    QString::operator=(&local_38,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10019d4fb;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10019d4fb:
    local_68 = (QArrayData *)QString::fromAscii_helper("@",1);
    QString::replace(&local_38,&local_68,&local_30,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10019d556;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10019d556:
    QLabel::setText((QString *)param_1[0x10]);
  }
  (**(code **)((long)*param_1 + 0x78))(param_1);
  QWidget::setFixedSize(param_1);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019d71c;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10019d71c:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

