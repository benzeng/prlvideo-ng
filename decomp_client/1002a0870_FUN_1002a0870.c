
void FUN_1002a0870(long param_1,int param_2)

{
  QArrayData *local_40;
  QString local_38;
  QProcess local_30 [23];
  undefined1 local_19;
  
  if ((-1 < param_2) || (*(int *)(*(long *)(param_1 + 0xc0) + 4) == 0)) goto LAB_1002a0947;
  QProcess::QProcess(local_30,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("hdiutil detach \"%1/\"",0x14);
  QString::arg(&local_38,&local_40,param_1 + 0xc0,0,0x20);
  QProcess::startDetached(&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002a090e;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002a090e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002a093e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002a093e:
  QProcess::~QProcess(local_30);
LAB_1002a0947:
  CAbstractTask::finish((int)param_1);
  return;
}

