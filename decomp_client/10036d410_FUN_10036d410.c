
void FUN_10036d410(QCloseEvent *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CTaskGenericId *pCVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  QVariant local_98;
  QVariant local_88;
  QArrayData *local_78;
  CTaskGenericId local_70 [24];
  QArrayData *local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  lVar7 = *(long *)(param_1 + 0x40);
  if (((*(long *)(lVar7 + 0x18) == 0) || (*(int *)(*(long *)(lVar7 + 0x18) + 4) == 0)) ||
     (*(long *)(lVar7 + 0x20) == 0)) {
    cVar1 = MacUtils::isWindowInNativeFullScreen(*(QWidget **)(lVar7 + 0x10));
    if (cVar1 == '\0') {
      uVar6 = FUN_100370280();
      FUN_100372fc0(uVar6,*(undefined8 *)(lVar7 + 0x10));
    }
    QWidget::closeEvent(param_1);
    return;
  }
  cVar1 = FUN_10018ffc0();
  if (cVar1 == '\0') goto LAB_10036d551;
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  uVar6 = 0;
  if ((lVar7 != 0) && (uVar6 = 0, *(int *)(lVar7 + 4) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
  }
  iVar2 = FUN_10018a9d0(uVar6);
  if (iVar2 != 0x30000004) goto LAB_10036d551;
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  uVar6 = 0;
  if ((lVar7 != 0) && (uVar6 = 0, *(int *)(lVar7 + 4) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
  }
  cVar1 = FUN_10018c1f0(uVar6,2);
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  uVar6 = 0;
  if ((lVar7 != 0) && (uVar6 = 0, *(int *)(lVar7 + 4) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
  }
  if (cVar1 == '\0') {
    FUN_100188480(&local_78,uVar6);
    FUN_10021bfc0(local_70,&local_78);
    lVar7 = CTaskManager::getTaskById(pCVar4);
    CTaskGenericId::~CTaskGenericId(local_70);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10036d704;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10036d704:
    if (lVar7 == 0) {
      pvVar8 = operator_new(0x40);
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
      uVar6 = 0;
      if ((lVar7 != 0) && (uVar6 = 0, *(int *)(lVar7 + 4) != 0)) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
      }
      FUN_10021b330(pvVar8,1,uVar6,param_1);
      CAbstractTask::execute();
    }
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
    return;
  }
  FUN_100188480(&local_58,uVar6);
  FUN_100191030(local_50,&local_58);
  plVar5 = (long *)CTaskManager::getTaskById(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036d53e;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10036d53e:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,0x80000275);
  }
LAB_10036d551:
  QObject::property((char *)&local_88);
  if ((local_88.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    QVariant::~QVariant(&local_88);
  }
  else {
    QObject::property((char *)&local_98);
    cVar1 = QVariant::toBool();
    QVariant::~QVariant(&local_98);
    QVariant::~QVariant(&local_88);
    if (cVar1 != '\0') {
      QWidget::closeEvent(param_1);
      return;
    }
  }
  lVar7 = *(long *)(param_1 + 0x40);
  iVar2 = *(int *)(lVar7 + 0x38);
  uVar6 = 0;
  if ((*(long *)(lVar7 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(lVar7 + 0x18) + 4) != 0)) {
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
  }
  uVar6 = FUN_10018c280(uVar6);
  iVar3 = FUN_100319b00(uVar6);
  if (iVar2 == iVar3) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
    uVar6 = 0;
    if ((lVar7 != 0) && (uVar6 = 0, *(int *)(lVar7 + 4) != 0)) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
    }
    uVar6 = FUN_10018c280(uVar6);
    local_b0 = 3;
    local_a8 = 0;
    local_ac = 0;
    local_a4 = 0xffff;
    local_a0 = 0;
    local_9c = 0;
    FUN_10031bf10(uVar6,0,&local_b0);
  }
  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
  return;
}

