
void FUN_10061e1d0(long param_1)

{
  QString *pQVar1;
  undefined8 local_40;
  
  QObject::blockSignals
            (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20),0));
  pQVar1 = *(QString **)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20);
  QString::toUpper();
  QLineEdit::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10061e256;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10061e256:
  QObject::blockSignals
            (SUB81(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x20),0));
  return;
}

