
void FUN_100638150(long param_1,undefined8 param_2)

{
  QString *pQVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = *(QString **)(param_1 + 0x70);
  local_30 = (QArrayData *)QString::fromAscii_helper("<b>%1</b>",9);
  QString::arg(&local_28,&local_30,param_2,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006381cb;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006381cb:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

