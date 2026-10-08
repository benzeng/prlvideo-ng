
void FUN_1007d7860(long param_1,int param_2)

{
  CSbaInstallation local_108 [216];
  QArrayData *local_30;
  undefined1 local_21;
  
  QString::number((int)&local_30,param_2);
  CSbaInstallation::setResult((QTypedArrayData<unsigned_short> *)(param_1 + 0x140));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007d78c6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007d78c6:
  FUN_1007d7460(param_1);
  CSbaInstallation::CSbaInstallation(local_108);
  CSbaInstallation::operator=((CSbaInstallation *)(param_1 + 0x140),local_108);
  CSbaInstallation::~CSbaInstallation(local_108);
  return;
}

