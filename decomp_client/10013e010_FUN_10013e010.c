
void FUN_10013e010(long *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  QVariant *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  undefined1 local_60 [55];
  undefined1 local_29;
  
  piVar1 = (int *)*param_2;
  *param_1 = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_8;
  param_1[1] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined4 *)((long)param_1 + 0x14) = param_3;
  piVar1 = (int *)*param_6;
  param_1[3] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)*param_7;
  param_1[4] = (long)piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  QVariant::QVariant((QVariant *)(param_1 + 7),param_5);
  QMenu::QMenu((QMenu *)local_60,(QWidget *)0x0);
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_68,(QFont *)(local_60._40_8_ + 0x38));
  if (*(int *)(*param_1 + 4) != 0) {
    iVar2 = QFontMetrics::boundingRect(&local_68);
    *(int *)(param_1 + 5) = (extraout_EDX + 1) - iVar2;
  }
  if (*(int *)(param_1[3] + 4) != 0) {
    iVar2 = QFontMetrics::boundingRect(&local_68);
    *(int *)((long)param_1 + 0x2c) = (extraout_EDX_00 + 1) - iVar2;
  }
  if ((int)param_1[5] == 0) goto LAB_10013e210;
  if (*(int *)((long)param_1 + 0x2c) == 0) {
    *(int *)(param_1 + 6) = (int)param_1[5];
    goto LAB_10013e210;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
  QString::arg(&local_78,&local_80,param_1,0,0x20);
  QString::arg(&local_70,&local_78,param_1 + 3,0,0x20);
  iVar2 = QFontMetrics::boundingRect(&local_68);
  *(int *)(param_1 + 6) = (extraout_EDX_01 + 1) - iVar2;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10013e1a3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10013e1a3:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10013e1d3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10013e1d3:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10013e210;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10013e210:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_68);
  QMenu::~QMenu((QMenu *)local_60);
  return;
}

