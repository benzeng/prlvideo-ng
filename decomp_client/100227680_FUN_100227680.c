
undefined8 FUN_100227680(long param_1)

{
  char cVar1;
  int iVar2;
  QPoint *pQVar3;
  undefined8 uVar4;
  CWindowShading *this;
  undefined8 uVar5;
  int extraout_var;
  int extraout_EDX;
  int extraout_var_00;
  int iVar6;
  bool bVar7;
  QVariant local_c8;
  QArrayData *local_b8;
  CTaskGenericId local_b0 [24];
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  long local_48;
  long local_40;
  long local_38;
  int local_30;
  int local_2c;
  
  cVar1 = MacUtils::isFrontProcess();
  if (cVar1 == '\0') {
    MacUtils::bringProcessToFront();
  }
  pQVar3 = operator_new(0x48);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_1003a3690(pQVar3,uVar4,uVar5);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018d490(uVar4);
  FUN_10015a350(&local_38,uVar4);
  if (local_38 != 0) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_10018d490(uVar4);
    FUN_10015aa50(&local_40,uVar4);
    bVar7 = true;
    if (local_40 != 0) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_10018d490(uVar4);
      FUN_10015aa80(&local_48,uVar4);
      bVar7 = local_48 == 0;
      if (!bVar7) {
        _PrlHandle_Free();
      }
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
    }
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    if (!bVar7) goto LAB_10022790f;
  }
  this = operator_new(0x40);
  CWindowShading::CWindowShading(this,(QWidget *)pQVar3);
  uVar5 = CTaskManager::instance();
  local_88 = (QArrayData *)QString::fromAscii_helper("deleteLater",0xb);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c6b0(local_80,&local_88,this,&local_98);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001884b0(&local_b8,uVar4);
  FUN_100228380(local_b0,&local_b8);
  CTaskManager::addTaskWatcher(uVar5,local_80,local_b0,4);
  CTaskGenericId::~CTaskGenericId(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      local_30 = CONCAT31(local_30._1_3_,*(int *)local_b8 != 0);
      if (*(int *)local_b8 != 0) goto LAB_1002278a5;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002278a5:
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    UNLOCK();
    local_30 = CONCAT31(local_30._1_3_,*local_80[0] != 0);
    if ((*local_80[0] == 0) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      local_30 = CONCAT31(local_30._1_3_,*(int *)local_88 != 0);
      if (*(int *)local_88 != 0) goto LAB_10022790f;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10022790f:
  QWidget::setAttribute(pQVar3,0x37,1);
  QWidget::show();
  QWidget::raise();
  QWidget::activateWindow();
  QObject::property((char *)&local_c8);
  uVar4 = QVariant::toPoint();
  QVariant::~QVariant(&local_c8);
  iVar6 = (int)((ulong)uVar4 >> 0x20);
  if (iVar6 != 0 || (int)uVar4 != 0) {
    iVar2 = QWidget::frameGeometry();
    QWidget::frameGeometry();
    local_2c = iVar6 - ((extraout_var_00 + 1) - extraout_var) / 2;
    local_30 = (int)uVar4 - ((extraout_EDX + 1) - iVar2) / 2;
    QWidget::move(pQVar3);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1003a3a70(pQVar3,*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  return 0;
}

