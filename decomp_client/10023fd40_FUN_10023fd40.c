
void FUN_10023fd40(undefined8 *param_1,undefined8 param_2,char param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  QString local_58;
  QString local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  pvVar4 = operator_new(0x18);
  FUN_1002419e0(pvVar4,param_2);
  FUN_100223cc0(param_1,param_2,&local_40,pvVar4,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023fdc9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10023fdc9:
  *param_1 = &PTR_FUN_102203810;
  param_1[8] = puVar1;
  param_1[9] = PTR_shared_null_1021e15e8;
  *(undefined1 *)((long)param_1 + 0x29) = param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_2);
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Error: cannot get vm instance.");
    return;
  }
  uVar5 = FUN_10018d490(lVar6);
  FUN_10015ccc0(&local_48,uVar5,param_2);
  FUN_100241920(param_1 + 9,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023fe60;
    }
    QListData::dispose(local_48);
  }
LAB_10023fe60:
  FUN_10018d860(&local_50,lVar6);
  QString::operator=((QString *)(param_1 + 4),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023fea9;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10023fea9:
  FUN_10018d830(&local_58,lVar6);
  QString::operator=((QString *)(param_1 + 8),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023fef1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10023fef1:
  iVar7 = (int)param_1;
  CAbstractTask::appendSubTask(iVar7);
  cVar2 = *(char *)((long)param_1 + 0x29);
  if ((cVar2 == '\0') && (param_3 == '\0')) {
    iVar3 = FUN_10018bce0(lVar6);
    if (iVar3 != 1) {
      CAbstractTask::appendSubTask(iVar7);
    }
    cVar2 = *(char *)((long)param_1 + 0x29);
  }
  if (cVar2 != '\0') {
    CAbstractTask::appendSubTask(iVar7);
  }
  CAbstractTask::appendSubTask(iVar7);
  lVar6 = param_1[9];
  if (*(int *)(lVar6 + 0xc) != *(int *)(lVar6 + 8)) {
    CAbstractTask::appendSubTask(iVar7);
  }
  if (param_3 == '\0') {
    CAbstractTask::appendSubTask(iVar7);
  }
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    CAbstractTask::appendSubTask(iVar7);
  }
  return;
}

