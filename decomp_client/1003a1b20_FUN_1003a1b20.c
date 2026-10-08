
void FUN_1003a1b20(long param_1,long param_2)

{
  QSize *pQVar1;
  int iVar2;
  undefined1 local_80 [24];
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  if (param_2 == 0) {
    return;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper("onSectionResizeFinished",0x17);
  iVar2 = QStackedWidget::indexOf(*(QWidget **)(param_1 + 0x38));
  QVariant::QVariant((QVariant *)(local_80 + 8),iVar2);
  FUN_100a1c6b0(local_60,&local_68,param_1,local_80 + 8);
  QVariant::~QVariant((QVariant *)(local_80 + 8));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a1bb5;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003a1bb5:
  QWidget::hide();
  pQVar1 = *(QSize **)(param_1 + 0x48);
  local_80._0_8_ = FUN_10039ffd0(param_1,param_2);
  CWindowResizeController::beginResize(pQVar1,(CSlotInfo *)local_80);
  QVariant::~QVariant(local_40);
  if (local_60[0] != (int *)0x0) {
    LOCK();
    *local_60[0] = *local_60[0] + -1;
    local_21 = *local_60[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_60[0] != (int *)0x0)) {
      operator_delete(local_60[0]);
    }
  }
  return;
}

