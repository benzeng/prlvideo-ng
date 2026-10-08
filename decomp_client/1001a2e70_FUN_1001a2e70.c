
undefined1 FUN_1001a2e70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0xe0) == 0) {
    return 0;
  }
  uVar2 = FUN_100152280();
  FUN_100188480(&local_30,*(undefined8 *)(param_1 + 0xe0));
  lVar3 = FUN_1001547d0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2ee7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001a2ee7:
  if (lVar3 == 0) {
    return 0;
  }
  FUN_10018d980(&local_50,*(undefined8 *)(param_1 + 0xe0));
  QFileInfo::QFileInfo(local_48,&local_50);
  QFileInfo::absolutePath();
  QString::normalized(&local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2f60;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001a2f60:
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a2f99;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1001a2f99:
  uVar2 = QApplication::activeModalWidget();
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100109c10(&local_70,lVar3);
  QFileDialog::getExistingDirectory(&local_60,uVar2,&local_68,&local_70,1);
  QString::normalized(&local_58,&local_60,1,0);
  QString::operator=((QString *)(param_1 + 0xe8),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a3029;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1001a3029:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a3059;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001a3059:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a3089;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001a3089:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a30b9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001a30b9:
  QString::trimmed();
  iVar1 = *(int *)(local_78 + 4);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a30f8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1001a30f8:
  if (iVar1 == 0) {
    uVar4 = 0;
    goto LAB_1001a3229;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_80) || (*(long *)(local_80 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_80,*(uint *)(local_80 + 4) + 1,*(uint *)(local_80 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"[VM import] VM source path = <%s>",
                local_80 + *(long *)(local_80 + 0x10));
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a318a;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1001a318a:
  QString::toUtf8();
  if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"[VM import] VM target path = <%s>",
                local_88 + *(long *)(local_88 + 0x10));
  uVar4 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001a3229;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1001a3229:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar4;
}

