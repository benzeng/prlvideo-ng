
void FUN_100446600(long param_1)

{
  QString *pQVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate((char *)&local_28,"CVmEdVmProfileDialog","Configure for:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

