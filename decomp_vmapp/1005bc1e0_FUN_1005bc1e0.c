
undefined8 FUN_1005bc1e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  QDomElement::QDomElement((QDomElement *)&local_38);
  QMutex::lock();
  iVar1 = FUN_1005bbc10(param_1,param_2,&local_38);
  if (iVar1 < 0) {
    FUN_1007d6a70(&local_48,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"SET: Specified uid [%s] not found in snapshots",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bc30b;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1005bc30b:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005bc35e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1005bc35e:
    uVar3 = 0x80000003;
    QMutex::unlock();
  }
  else {
    switch(param_3) {
    case 0:
      local_50 = (QArrayData *)QString::fromAscii_helper("Operation",9);
      QDomElement::removeAttribute(&local_38);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) break;
        }
        QArrayData::deallocate(local_50,2,8);
      }
      break;
    case 1:
      local_58.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Operation",9);
      local_60 = (QArrayData *)QString::fromAscii_helper("CreateSnapshot",0xe);
      QDomElement::setAttribute(&local_38,&local_58);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005bc3db;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005bc3db:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) break;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
      break;
    default:
      FUN_1008e3970("","vdisk",0,"Invalid operation type specified [%u]",param_3);
      goto LAB_1005bc35e;
    case 4:
      local_68.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Operation",9);
      local_70 = (QArrayData *)QString::fromAscii_helper("DeleteSnaphot",0xd);
      QDomElement::setAttribute(&local_38,&local_68);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005bc483;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1005bc483:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) break;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
      break;
    case 5:
      local_78.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Operation",9);
      pQVar2 = (QArrayData *)QString::fromAscii_helper("DeleteSnapshotFiles",0x13);
      QDomElement::setAttribute(&local_38,&local_78);
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_29 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1005bc52b;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_1005bc52b:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) break;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
    uVar3 = 0;
    QMutex::unlock();
  }
  QDomNode::~QDomNode((QDomNode *)&local_38);
  return uVar3;
}

