
undefined1 FUN_10002cc40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  QArrayData *pQVar6;
  undefined4 uVar7;
  QArrayData *pQVar8;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x24) != 2) {
    return 0;
  }
  QMutex::lock();
  QMutex::lock();
  lVar2 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
  }
  QMutex::unlock();
  if (lVar2 == 0) {
    uVar4 = 0;
    goto LAB_10002d240;
  }
  lVar1 = *(long *)(lVar2 + 0x20);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    local_60 = (QArrayData *)QString::fromAscii_helper("parallels:kaspersky",0x13);
    cVar3 = QString::startsWith(param_2,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002cd1b;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10002cd1b:
    if (cVar3 == '\0') {
      local_68 = (QArrayData *)QString::fromAscii_helper("parallels:norton",0x10);
      cVar3 = QString::startsWith(param_2,&local_68,1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002cda7;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10002cda7:
      if (cVar3 == '\0') {
        local_70 = (QArrayData *)QString::fromAscii_helper("parallels:drweb",0xf);
        cVar3 = QString::startsWith(param_2,&local_70,1);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002ce1e;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10002ce1e:
        if (cVar3 == '\0') {
          pQVar6 = (QArrayData *)QString::fromAscii_helper("",0);
        }
        else {
          pQVar6 = (QArrayData *)QString::fromAscii_helper("parallels:drweb",0xf);
        }
      }
      else {
        pQVar6 = (QArrayData *)QString::fromAscii_helper("parallels:norton",0x10);
      }
    }
    else {
      pQVar6 = (QArrayData *)QString::fromAscii_helper("parallels:kaspersky",0x13);
    }
    if (*(int *)(pQVar6 + 4) == 0) {
      local_88 = (QArrayData *)QString::fromAscii_helper("parallels:app_packages",0x16);
      iVar5 = QString::indexOf(param_2,&local_88,0,1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002cfd2;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10002cfd2:
      if (iVar5 == -1) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_10002d570(param_1,param_2);
      }
    }
    else {
      iVar5 = *(int *)pQVar6;
      if (1 < iVar5 + 1U) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + 1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        iVar5 = *(int *)pQVar6;
      }
      if (1 < iVar5 + 1U) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + 1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
      }
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar6;
      QString::fromUtf8_helper((char *)&local_50,0xa10328);
      QString::append(&local_58);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002ced2;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10002ced2:
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002ceff;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
LAB_10002ceff:
      cVar3 = QString::startsWith(param_2,&local_58,1);
      if (cVar3 == '\0') {
        local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
      }
      else {
        QString::right((int)&local_78);
      }
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002d029;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_10002d029:
      QString::toUtf8();
      iVar5 = QString::compare_helper
                        (pQVar6 + *(long *)(pQVar6 + 0x10),*(undefined4 *)(pQVar6 + 4),
                         "parallels:kaspersky",0xffffffff,1);
      uVar7 = 2;
      if (iVar5 == 0) {
LAB_10002d0c0:
        local_3c = *(undefined4 *)(local_80 + 4);
        local_40 = uVar7;
        QByteArray::QByteArray((QByteArray *)&local_48,(char *)&local_40,8);
        QByteArray::append((QByteArray *)&local_48);
        if (1 < *(int *)local_48 + 1U) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + 1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
        }
        pQVar8 = local_48;
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002d138;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
      else {
        iVar5 = QString::compare_helper
                          (pQVar6 + *(long *)(pQVar6 + 0x10),*(undefined4 *)(pQVar6 + 4),
                           "parallels:norton",0xffffffff,1);
        uVar7 = 3;
        if (iVar5 == 0) goto LAB_10002d0c0;
        iVar5 = QString::compare_helper
                          (pQVar6 + *(long *)(pQVar6 + 0x10),*(undefined4 *)(pQVar6 + 4),
                           "parallels:drweb",0xffffffff,1);
        uVar7 = 4;
        pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
        if (iVar5 == 0) goto LAB_10002d0c0;
      }
LAB_10002d138:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002d168;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_10002d168:
      uVar4 = FUN_1004c2f50(lVar1,0xe,pQVar8 + *(long *)(pQVar8 + 0x10),*(undefined4 *)(pQVar8 + 4),
                            1,0);
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002d1ba;
        }
        QArrayData::deallocate(pQVar8,1,8);
      }
LAB_10002d1ba:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10002d1f6;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
LAB_10002d1f6:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002d223;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_10002d223:
    if (lVar2 == 0) goto LAB_10002d240;
  }
  FUN_100026030(&DAT_1011cc7f8);
LAB_10002d240:
  QMutex::unlock();
  return uVar4;
}

