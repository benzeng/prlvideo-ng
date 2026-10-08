
void FUN_100572cb0(long param_1,QIPv6Address *param_2)

{
  QString *pQVar1;
  byte bVar2;
  uint uVar3;
  QArrayData *local_48;
  QHostAddress local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x80);
  QHostAddress::QHostAddress(local_40,param_2);
  QHostAddress::toString();
  QLineEdit::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100572d24;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100572d24:
  QHostAddress::~QHostAddress(local_40);
  bVar2 = FUN_100b3d460(param_2 + 0x20);
  uVar3 = 0x80;
  if (-1 < (char)bVar2) {
    uVar3 = (uint)bVar2;
  }
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x30) + 0x60);
  QString::number((int)&local_48,uVar3);
  QLineEdit::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

