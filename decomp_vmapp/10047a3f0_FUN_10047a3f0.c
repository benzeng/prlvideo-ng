
void FUN_10047a3f0(long param_1,long *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_34;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar2 = *param_3;
  if ((uVar2 & 2) != 0) {
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10047a465;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10047a465:
    FUN_10047a190(param_1 + 8,local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),
                  0x20ca);
    uVar2 = *param_3;
  }
  if ((uVar2 & 4) != 0) {
    FUN_10047a190(param_1 + 8,*param_2 + 0x18,0x28,0x20cb);
    uVar2 = *param_3;
  }
  if ((uVar2 & 8) != 0) {
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10047a4f6;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10047a4f6:
    FUN_10047a190(param_1 + 8,local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),
                  0x20cc);
    uVar2 = *param_3;
  }
  if ((uVar2 & 0x10) != 0) {
    lVar1 = *(long *)(*param_2 + 0x48);
    FUN_10047a190(param_1 + 8,*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),0x20cd);
    uVar2 = *param_3;
  }
  if ((uVar2 & 0x40) != 0) {
    QDateTime::toString(&local_58,*param_2 + 0x50,1);
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10047a5a2;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10047a5a2:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10047a5d2;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10047a5d2:
    FUN_10047a190(param_1 + 8,local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),
                  0x20ce);
    uVar2 = *param_3;
  }
  if ((uVar2 & 0x20) != 0) {
    local_34 = *(undefined4 *)(*param_2 + 0x58);
    FUN_10047a190(param_1 + 8,&local_34,4,0x20cf);
    uVar2 = *param_3;
  }
  if ((uVar2 & 0x100) != 0) {
    local_34 = *(undefined4 *)(*param_2 + 0x68);
    FUN_10047a190(param_1 + 8,&local_34,4,0x20d0);
  }
  QString::toUtf8();
  QByteArray::operator=((QByteArray *)&local_30,(QByteArray *)&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10047a68a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10047a68a:
  FUN_10047a190(param_1 + 8,local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),
                0x2191);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

