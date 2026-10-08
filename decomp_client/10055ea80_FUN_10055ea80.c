
void FUN_10055ea80(QObject *param_1,QEvent *param_2,long param_3)

{
  QArrayData *local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  QArrayData *local_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  QArrayData *local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  QFontMetrics local_40 [15];
  undefined1 local_31;
  
  if ((*(QEvent **)(*(long *)(param_1 + 0x18) + 0x20) != param_2) ||
     (*(short *)(param_3 + 0x10) != 0xe)) goto LAB_10055ec81;
  QFontMetrics::QFontMetrics
            (local_40,(QFont *)(*(long *)(*(QEvent **)(*(long *)(param_1 + 0x18) + 0x20) + 0x28) +
                               0x38));
  local_50 = 0;
  local_48 = *(int *)(param_3 + 0x14) + -1;
  local_44 = *(int *)(param_3 + 0x18) + -1;
  FUN_10055e850(&local_58,0);
  QFontMetrics::boundingRect
            ((QRect *)local_40,(int)&local_50,(QString *)0x1000,(int)&local_58,(int *)0x0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055eb4f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10055eb4f:
  local_68 = 0;
  local_60 = *(int *)(param_3 + 0x14) + -1;
  local_5c = *(int *)(param_3 + 0x18) + -1;
  FUN_10055e850(&local_70,1);
  QFontMetrics::boundingRect
            ((QRect *)local_40,(int)&local_68,(QString *)0x1000,(int)&local_70,(int *)0x0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055ebdd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10055ebdd:
  local_80 = 0;
  local_78 = *(int *)(param_3 + 0x14) + -1;
  local_74 = *(int *)(param_3 + 0x18) + -1;
  FUN_10055e850(&local_88,2);
  QFontMetrics::boundingRect
            ((QRect *)local_40,(int)&local_80,(QString *)0x1000,(int)&local_88,(int *)0x0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055ec69;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10055ec69:
  QWidget::setFixedHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
  QFontMetrics::~QFontMetrics(local_40);
LAB_10055ec81:
  QObject::eventFilter(param_1,param_2);
  return;
}

