
undefined8 FUN_10029a730(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QString *this;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)
             QString::fromAscii_helper
                       ("*.pvs;*.pvsz;*.xml;*.vbox;*.vmx;*.vmc;*.vpc7;*.vpc6;*.vmwarevm;*.pvm;*.pvmz;*.vmdk;*.vhd;*.vdi"
                        ,0x5e);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100109c10(&local_38,uVar2);
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    cVar1 = SandboxFileAccessHelpers::checkAvailability(&local_38,&local_40,false,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10029a7ea;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10029a7ea:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10029a81a;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_10029a81a:
    if (cVar1 == '\0') {
      FUN_100d898d0(&local_58);
      local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_19 = *(int *)local_58 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_28,0x1de2dfd);
      QString::append(&local_50);
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          local_19 = *(int *)local_28 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10029a896;
        }
        QArrayData::deallocate(local_28,2,8);
      }
LAB_10029a896:
      QString::operator=(&local_38,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_19 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10029a8d3;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_10029a8d3:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_19 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10029a903;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
  }
LAB_10029a903:
  FileUtils::browseForFile(&local_60,&local_38,SUB81(&local_30,0),(QWidget *)0x1,false);
  this = (QString *)(param_1 + 0x50);
  QString::operator=(this,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029a95f;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10029a95f:
  uVar2 = 0x80000009;
  if (*(int *)(this->field0_0x0 + 4) != 0) {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMS]",5);
    SandboxFileAccessHelpers::saveBookmark(this,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_19 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10029a9c2;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10029a9c2:
    QString::toUtf8();
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"VM path: [%s]",local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_19 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10029aa26;
      }
      QArrayData::deallocate(local_70,1,8);
    }
  }
LAB_10029aa26:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10029aa56;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10029aa56:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

