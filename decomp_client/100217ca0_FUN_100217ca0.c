
/* WARNING: Removing unreachable block (ram,0x000100217fe2) */
/* WARNING: Removing unreachable block (ram,0x000100217ff4) */
/* WARNING: Removing unreachable block (ram,0x000100218004) */

void FUN_100217ca0(long param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  QWidget *pQVar4;
  undefined8 uVar5;
  long lVar6;
  QWidget *pQVar7;
  QSize *pQVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  long local_78;
  QArrayData *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58 [16];
  ExternalRefCountData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    QObject::deleteLater();
    return;
  }
  uVar3 = FUN_100370280();
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_40,uVar5);
  pQVar4 = (QWidget *)FUN_1003704b0(uVar3,&local_40,DAT_100e152b8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100217d4e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100217d4e:
  if (pQVar4 == (QWidget *)0x0) goto LAB_10021808d;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = FUN_10018c280(uVar5);
  uVar5 = FUN_100319960(uVar5);
  auVar13 = FUN_100325fd0(uVar5);
  uVar5 = FUN_10037a280(1);
  iVar9 = (auVar13._8_4_ + 1) - auVar13._0_4_;
  iVar10 = (int)uVar5;
  if (iVar9 < iVar10) {
    iVar9 = iVar10;
  }
  iVar12 = (auVar13._12_4_ + 1) - auVar13._4_4_;
  iVar11 = (int)((ulong)uVar5 >> 0x20);
  if (iVar12 < iVar11) {
    iVar12 = iVar11;
  }
  uVar5 = FUN_10036da80(pQVar4);
  local_48 = (ExternalRefCountData *)
             CONCAT44((int)((ulong)uVar5 >> 0x20) + iVar12,(int)uVar5 + iVar9);
  uVar2 = CWindowInterface::customWindowFlags();
  CWindowInterface::setCustomWindowFlags(pQVar4 + 0x30,uVar2 | 0x10);
  WidgetUtils::setWindowResizeEnabled(pQVar4,true);
  iVar9 = FUN_10036da80(pQVar4);
  QWidget::setMinimumSize((int)pQVar4,iVar9 + iVar10);
  lVar6 = FUN_10036ab70(pQVar4);
  if (lVar6 != 0) {
    iVar9 = FUN_10036ab70(pQVar4);
    QWidget::setMinimumSize(iVar9,iVar10);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_10018c1f0(uVar5,2);
  if ((param_2 < 0) && (cVar1 != '\0')) goto LAB_10021808d;
  uVar5 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar5,0);
  auVar13._8_8_ = local_58._8_8_;
  auVar13._0_8_ = local_58._0_8_;
  if ((param_2 == -0x7ffffcdb) || (local_58 = auVar13, cVar1 == '\x01')) goto LAB_10021808d;
  pQVar7 = (QWidget *)QApplication::desktop();
  local_58 = QDesktopWidget::availableGeometry(pQVar7);
  uVar5 = QWidget::pos();
  local_68 = (int)uVar5;
  local_60 = local_68 + -1 + (int)local_48;
  local_64 = (int)((ulong)uVar5 >> 0x20);
  local_5c = local_64 + -1 + (int)((ulong)local_48 >> 0x20);
  cVar1 = QRect::contains((QRect *)local_58,SUB81(&local_68,0));
  if (cVar1 != '\0') {
    pQVar8 = operator_new(0x88);
    CWindowResizeController::CWindowResizeController
              ((CWindowResizeController *)pQVar8,pQVar4,0,0x12);
    QObject::connect(&local_78,pQVar8,"2resized()",param_1,"1onResizeFinished()",0);
    if (local_78 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    local_90 = 0x80000000;
    local_98.field7 = 0;
    local_88 = 1;
    CWindowResizeController::beginResize(pQVar8,(CSlotInfo *)&local_48);
    QVariant::~QVariant((QVariant *)&local_98);
    return;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(&local_70,uVar5);
  QWidget::setWindowTitle((QString *)pQVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100218085;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100218085:
  QWidget::showMaximized();
LAB_10021808d:
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018bcf0(uVar5,0);
  QObject::deleteLater();
  return;
}

