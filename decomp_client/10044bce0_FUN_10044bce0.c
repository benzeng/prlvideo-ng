
undefined8 FUN_10044bce0(QObject *param_1,QEvent *param_2,long param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_38;
  
  QObject::objectName();
  iVar2 = QString::compare_helper
                    (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),
                     "m_fakeControl",0xffffffff,1);
  if (iVar2 != 0) {
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10044bd9c;
      }
      QArrayData::deallocate(local_38,2,8);
    }
    goto LAB_10044bd9c;
  }
  sVar1 = *(short *)(param_3 + 0x10);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10044bd91;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10044bd91:
  if (sVar1 == 0xc) {
    return 1;
  }
LAB_10044bd9c:
  uVar3 = QObject::eventFilter(param_1,param_2);
  return uVar3;
}

