
void FUN_10008bae0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CTaskGenericId *pCVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  QArrayData *local_50;
  QArrayData *local_48;
  CTaskGenericId local_40 [31];
  undefined1 local_21;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 4) == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x28) == 0) {
    return;
  }
  iVar3 = FUN_10018a9d0();
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar8 = 0;
  if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  cVar2 = FUN_10018ffc0(uVar8);
  if (cVar2 != '\0') {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar8 = 0;
    if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    }
    iVar3 = FUN_10018a9d0(uVar8);
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar8 = 0;
    if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    }
    if (iVar3 == 0x30000009) {
      FUN_100192d10(uVar8,0x27f,0,0);
      return;
    }
LAB_10008bd47:
    FUN_100193200(uVar8,0xc9);
    return;
  }
  switch(iVar3) {
  case 0x30000001:
  case 0x30000005:
  case 0x30000009:
    break;
  default:
    goto switchD_10008bbc0_caseD_1;
  case 0x30000004:
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar8 = 0;
    if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    }
    goto LAB_10008bd47;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar8 = 0;
  if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  iVar4 = FUN_10018d470(uVar8);
  if (iVar4 != 1) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar8 = 0;
  if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  cVar2 = FUN_10018ed10(uVar8);
  if (cVar2 == '\0') {
    if ((iVar3 != 0x30000005) && (iVar3 != 0x30000009)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      uVar8 = 0;
      if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
      }
      uVar8 = FUN_10018d490(uVar8);
      cVar2 = FUN_1001754c0(uVar8,0x10);
      if (cVar2 != '\0') {
        lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
        uVar8 = 0;
        if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
        }
        FUN_10018c2b0(uVar8);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmStartupOptions();
        iVar3 = CVmStartupOptionsBase::getWindowMode();
        if (iVar3 == 5) goto LAB_10008bddf;
      }
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
      uVar8 = 0;
      if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
      }
      uVar8 = FUN_10018c280(uVar8);
      FUN_10031a440(uVar8,1);
      return;
    }
LAB_10008bddf:
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar8 = 0;
    if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    }
    FUN_100192d60(uVar8,0x800,0x3ff,0,0);
    return;
  }
  pCVar5 = (CTaskGenericId *)CTaskManager::instance();
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar8 = 0;
  if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  FUN_100188480(&local_48,uVar8);
  FUN_100086960(local_40,&local_48);
  plVar6 = (long *)CTaskManager::getTaskById(pCVar5);
  CTaskGenericId::~CTaskGenericId(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008bc96;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10008bc96:
  if ((plVar6 != (long *)0x0) && (cVar2 = CAbstractTask::isFinished(), cVar2 == '\0')) {
    (**(code **)(*plVar6 + 0x80))(plVar6);
    return;
  }
  pvVar7 = operator_new(0x40);
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  uVar8 = 0;
  if ((lVar1 != 0) && (uVar8 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  FUN_100188480(&local_50,uVar8);
  FUN_1002e9320(pvVar7,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008bd1f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10008bd1f:
  CAbstractTask::execute();
switchD_10008bbc0_caseD_1:
  return;
}

