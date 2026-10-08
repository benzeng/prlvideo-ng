
void FUN_100354be0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  QArrayData *pQVar5;
  Connection local_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  uVar2 = FUN_100323e00();
  lVar3 = FUN_100319390(uVar2);
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x9d) != '\0') {
    if (DAT_10230ffd0 < 4) {
      return;
    }
    FUN_100df99c0("","prl_client_app",4,"[THUMB] CTaskGrabVmDisplayScreen is already running");
    return;
  }
  if (DAT_10230ffd0 < 4) goto LAB_100354d8c;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100323d90(&local_38,uVar2);
  QString::toLocal8Bit();
  pQVar5 = local_30 + *(long *)(local_30 + 0x10);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100323e20(uVar2);
  FUN_100df99c0("","prl_client_app",4,
                "[THUMB] CVmDisplayThumbnail is about to request next image for VM [%s], display #%d, scaled to %dx%d, rect from {%d,%d} with size %dx%d."
                ,pQVar5,uVar1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                *(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44),
                (1 - *(int *)(param_1 + 0x40)) + *(int *)(param_1 + 0x48),
                (1 - *(int *)(param_1 + 0x44)) + *(int *)(param_1 + 0x4c));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100354d5c;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100354d5c:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100354d8c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100354d8c:
  local_44 = 0x50000008;
  local_40 = 1;
  local_54 = *(undefined8 *)(param_1 + 0x40);
  local_4c = *(undefined8 *)(param_1 + 0x48);
  local_60 = *(undefined8 *)(param_1 + 0x50);
  local_58 = 1;
  pvVar4 = operator_new(0x90);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100292850(pvVar4,uVar2,&local_60);
  QObject::connect(local_68,pvVar4,"2taskFinished( PRL_RESULT )",param_1,
                   "1onScreenCaptured( PRL_RESULT )",0);
  QMetaObject::Connection::~Connection(local_68);
  *(undefined1 *)(param_1 + 0x9d) = 1;
  CAbstractTask::execute();
  return;
}

