
undefined1
FUN_1004f8260(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4,
             QByteArray *param_5)

{
  QArrayData *pQVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  undefined1 local_58 [32];
  QArrayData *local_38;
  undefined1 local_29;
  
  QString::mid((int)&local_38,param_3);
  iVar2 = FUN_10078cca0(local_58,0);
  if (iVar2 != 0) {
    uVar4 = 0;
    goto LAB_1004f84c4;
  }
  QString::toUtf8_helper(&local_68);
  QByteArray::QByteArray
            ((QByteArray *)&local_60,
             (char *)(local_68.field0_0x0 + *(long *)(local_68.field0_0x0 + 0x10)),-1);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004f82fc;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,1,8);
  }
LAB_1004f82fc:
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  iVar2 = FUN_10078cd90(local_58,local_60 + *(long *)(local_60 + 0x10),*(uint *)(local_60 + 4),
                        0x2002);
  if (iVar2 == 0) {
    QString::toUtf8_helper(&local_70);
    QByteArray::operator=
              ((QByteArray *)&local_60,
               (char *)(local_70.field0_0x0 + *(long *)(local_70.field0_0x0 + 0x10)));
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004f8395;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,1,8);
    }
LAB_1004f8395:
    if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f)
      ;
    }
    iVar2 = FUN_10078cd90(local_58,local_60 + *(long *)(local_60 + 0x10),*(uint *)(local_60 + 4),
                          0x2007);
    if (iVar2 == 0) {
      pcVar3 = (char *)FUN_10078cc60(local_58);
      iVar2 = FUN_10078cc70(local_58);
      QByteArray::QByteArray((QByteArray *)&local_78,pcVar3,iVar2);
      pQVar1 = (QArrayData *)*param_4;
      *param_4 = local_78;
      local_78 = pQVar1;
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_29 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004f843d;
        }
        QArrayData::deallocate(pQVar1,1,8);
      }
LAB_1004f843d:
      QString::toUtf8_helper(&local_80);
      QByteArray::operator=
                (param_5,(char *)(local_80.field0_0x0 + *(long *)(local_80.field0_0x0 + 0x10)));
      uVar4 = 1;
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_29 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004f848b;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,1,8);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
LAB_1004f848b:
  FUN_10078cf00(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004f84c4;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1004f84c4:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar4;
}

