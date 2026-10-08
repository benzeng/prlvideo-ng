
void FUN_1007a6340(QEvent *param_1,long param_2)

{
  int iVar1;
  QVariant *this;
  undefined8 uVar2;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(short *)(param_2 + 0x10) != 0xaa) goto LAB_1007a6491;
  local_30 = *(QArrayData **)(param_2 + 0x18);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  iVar1 = qstrcmp((QByteArray *)&local_30,"pressedOpacity");
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007a63be;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1007a63be:
  if (iVar1 == 0) {
    QObject::property((char *)&local_40);
    uVar2 = QVariant::toReal((bool *)&local_40);
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    this = &local_40;
  }
  else {
    local_48 = *(QArrayData **)(param_2 + 0x18);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
    iVar1 = qstrcmp((QByteArray *)&local_48,"hoverOpacity");
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007a6423;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1007a6423:
    if (iVar1 != 0) goto LAB_1007a6491;
    QObject::property((char *)&local_58);
    uVar2 = QVariant::toReal((bool *)&local_58);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    this = &local_58;
  }
  QVariant::~QVariant(this);
  QWidget::repaint();
LAB_1007a6491:
  QFrame::event(param_1);
  return;
}

