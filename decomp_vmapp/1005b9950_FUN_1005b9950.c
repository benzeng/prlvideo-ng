
undefined8 FUN_1005b9950(undefined8 param_1,QString *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    FUN_1008e3970("","vdisk",0,"Empty param name passed");
    return 0x80021011;
  }
  local_30.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("StorageData",0xb);
  cVar1 = operator==(param_2,&local_30);
  cVar2 = '\x01';
  if (cVar1 == '\0') {
    local_38.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Snapshots",9);
    cVar1 = operator==(param_2,&local_38);
    cVar2 = '\x01';
    if (cVar1 == '\0') {
      local_40.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Miscellaneous",0xd);
      cVar1 = operator==(param_2,&local_40);
      cVar2 = '\x01';
      if (cVar1 == '\0') {
        local_48.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Disk_Parameters",0xf);
        cVar2 = operator==(param_2,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_21 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1005b9a44;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
      }
LAB_1005b9a44:
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_21 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1005b9a74;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_1005b9a74:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005b9aa4;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1005b9aa4:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b9ad4;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005b9ad4:
  if (cVar2 == '\0') {
    cVar1 = QDomNode::isNull();
    uVar3 = 0;
    if (cVar1 != '\0') {
      FUN_1008e3970("","vdisk",0,"Descriptor not opened");
      uVar3 = 0x80021021;
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Reserved value used \'%s\' as name of user param",
                  local_50 + *(long *)(local_50 + 0x10));
    uVar3 = 0x80023001;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return 0x80023001;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  return uVar3;
}

