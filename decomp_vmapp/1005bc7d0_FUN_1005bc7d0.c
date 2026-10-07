
undefined4 FUN_1005bc7d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  QArrayData *pQVar3;
  undefined4 uVar4;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  QDomElement::QDomElement((QDomElement *)&local_38);
  puVar1 = PTR_shared_null_100ba20d0;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  iVar2 = FUN_1005bbc10(param_1,param_2,&local_38);
  if (iVar2 < 0) {
    FUN_1007d6a70(&local_50,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"GET: Specified uid [%s] not found in snapshots",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bca07;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1005bca07:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bca37;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1005bca37:
    QMutex::unlock();
    uVar4 = 0x11;
  }
  else {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("Operation",9);
    QDomElement::attribute(&local_58,&local_38);
    QString::operator=(&local_40,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bc887;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1005bc887:
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bc8b7;
      }
      QArrayData::deallocate((QArrayData *)puVar1,2,8);
    }
LAB_1005bc8b7:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bc8e7;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1005bc8e7:
    QMutex::unlock();
    uVar4 = 0;
    if (*(int *)(local_40.field0_0x0 + 4) != 0) {
      iVar2 = QString::compare_helper
                        ((QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10))
                         ,*(undefined4 *)(local_40.field0_0x0 + 4),"CreateSnapshot",0xffffffff,1);
      uVar4 = 1;
      if (iVar2 != 0) {
        iVar2 = QString::compare_helper
                          ((QArrayData *)
                           (local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),
                           *(undefined4 *)(local_40.field0_0x0 + 4),"DeleteSnaphot",0xffffffff,1);
        uVar4 = 4;
        if (iVar2 != 0) {
          iVar2 = QString::compare_helper
                            ((QArrayData *)
                             (local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)),
                             *(undefined4 *)(local_40.field0_0x0 + 4),"DeleteSnapshotFiles",
                             0xffffffff,1);
          uVar4 = 0x11;
          if (iVar2 == 0) {
            uVar4 = 5;
          }
        }
      }
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005bca74;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005bca74:
  QDomNode::~QDomNode((QDomNode *)&local_38);
  return uVar4;
}

