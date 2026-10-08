
undefined1 FUN_100201520(long param_1,QString *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100152280();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_30);
  }
  lVar3 = FUN_1001547d0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002015af;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002015af:
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = QApplication::activeModalWidget();
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100109c10(&local_50,lVar3);
  QFileDialog::getExistingDirectory(&local_40,uVar2,&local_48,&local_50,1);
  QString::normalized(&local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100201635;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100201635:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100201665;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100201665:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100201695;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100201695:
  QString::trimmed();
  iVar1 = *(int *)(local_58 + 4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002016d5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002016d5:
  if (iVar1 == 0) {
    uVar4 = 0;
    goto LAB_1002017bd;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"[VM conversion] search path = <%s>",
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100201767;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100201767:
  uVar4 = 1;
  QString::operator=(param_2,&local_38);
LAB_1002017bd:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar4;
}

