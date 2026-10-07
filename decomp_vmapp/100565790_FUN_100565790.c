
undefined1 FUN_100565790(void)

{
  int iVar1;
  uint uVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  Data *pDVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *local_90;
  QArrayData *local_88;
  Data *local_80;
  QDir local_78 [8];
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_48 = (Data *)PTR_shared_null_100ba2188;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("*ntfs-3g*",9);
  local_50 = pQVar3;
  FUN_10000c490(&local_48,&local_50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005657fa;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005657fa:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("*paragon*ntfs*",0xe);
  local_58 = pQVar3;
  FUN_10000c490(&local_48,&local_58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10056584a;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10056584a:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("*tuxera*ntfs*",0xd);
  local_60 = pQVar3;
  FUN_10000c490(&local_48,&local_60);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10056589a;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10056589a:
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar2 = FUN_1007109e0();
  if (uVar2 < 0xa0600) {
    QString::fromUtf8_helper((char *)&local_40,0xa43158);
    QString::operator=(&local_68,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100565957;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_38,0xa4316a);
    QString::operator=(&local_68,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100565957;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100565957:
  if (1 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("","StatesUtils",2,"Looking for receipts in \'%s\'",
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005659c9;
      }
      QArrayData::deallocate(local_70,1,8);
    }
  }
LAB_1005659c9:
  QDir::QDir(local_78,&local_68);
  QDir::entryList(&local_80,local_78,&local_48,3,0xffffffff);
  if (*(int *)(local_80 + 0xc) == *(int *)(local_80 + 8)) {
    if (DAT_1011b55f8 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      FUN_1008e3970("","StatesUtils",2,"No NTFS modification software detected");
    }
  }
  else {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("\n\t",2);
    QtPrivate::QStringList_join
              ((QStringList *)&local_90,(QChar *)&local_80,
               (int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
    QString::toUtf8();
    FUN_1008e3970("","StatesUtils",0,"NTFS modification software detected :\n\t%s",
                  local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100565aa3;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100565aa3:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100565ad9;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100565ad9:
    uVar7 = 1;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100565b2d;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
LAB_100565b2d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100565bc1;
    }
    iVar1 = *(int *)(local_80 + 0xc);
    if (iVar1 != *(int *)(local_80 + 8)) {
      lVar6 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_80 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_100565ba0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_100565ba0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_80);
  }
LAB_100565bc1:
  QDir::~QDir(local_78);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100565bfa;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100565bfa:
  pDVar4 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar7;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar3 == 0) {
LAB_100565c60:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar5;
            goto LAB_100565c60;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar4);
  }
  return uVar7;
}

