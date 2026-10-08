
undefined8 FUN_1001e9f60(long param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  Connection local_90 [8];
  QString local_88;
  QString local_80;
  QString local_78;
  undefined1 local_70;
  QString local_68;
  QString local_60;
  undefined *local_58 [2];
  QArrayData *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_60,uVar6);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e9fd3;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1001e9fd3:
  cVar2 = COsInstallationInfo::load();
  if (cVar2 == '\0') {
    uVar6 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t load OS installation info.");
  }
  else {
    COsInstallationInfo::windowsInfo();
    QString::operator=((QString *)(param_1 + 0x30),&local_88);
    QString::operator=((QString *)(param_1 + 0x38),&local_80);
    QString::operator=((QString *)(param_1 + 0x40),&local_78);
    *(undefined1 *)(param_1 + 0x48) = local_70;
    QString::operator=((QString *)(param_1 + 0x50),&local_68);
    FUN_1001ea7d0(&local_88);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar3 = FUN_10018f890(uVar6);
    if (iVar3 - 0x809U < 8) {
      uVar5 = *(undefined4 *)(&DAT_100e16a50 + (long)(int)(iVar3 - 0x809U) * 4);
    }
    else {
      uVar5 = 3;
      if (*(char *)(param_1 + 0x48) == '\0') {
        uVar5 = 2;
      }
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    lVar4 = FUN_100196eb0(uVar6,uVar5,(QString *)(param_1 + 0x38),(QString *)(param_1 + 0x40),
                          (QString *)(param_1 + 0x30));
    uVar6 = 0x80000009;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x60) = 1;
      uVar6 = 0;
      QObject::connect(local_90,lVar4,"2jobCompleted(PRL_RESULT)",param_1,
                       "1onCreateUnattendedDiskFinished( PRL_RESULT )",0);
      QMetaObject::Connection::~Connection(local_90);
    }
  }
  local_58[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ea151;
    }
    QHashData::free_helper(local_40);
  }
LAB_1001ea151:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ea181;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001ea181:
  QObject::~QObject((QObject *)local_58);
  return uVar6;
}

