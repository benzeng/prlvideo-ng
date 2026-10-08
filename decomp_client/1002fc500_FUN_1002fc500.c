
void FUN_1002fc500(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QRegExp local_28 [15];
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("^INIT_REQ_SPACE (\\d+) (\\d+)$",0x1c);
  QRegExp::QRegExp(local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002fc56a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002fc56a:
  iVar1 = QRegExp::indexIn(local_28,param_2,0,0);
  if (iVar1 < 0) goto LAB_1002fc631;
  QRegExp::cap((int)&local_38);
  uVar2 = QString::toULongLong((bool *)&local_38,0);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002fc5d8;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002fc5d8:
  QRegExp::cap((int)&local_40);
  uVar2 = QString::toULongLong((bool *)&local_40,0);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002fc631;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002fc631:
  QRegExp::~QRegExp(local_28);
  return;
}

