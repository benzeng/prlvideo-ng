
long FUN_100360b60(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  Data *pDVar6;
  long lVar7;
  int iVar8;
  int *local_98;
  long *local_90;
  long *local_88;
  undefined4 local_80;
  int *local_78;
  QArrayData *local_70;
  Data *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar3 = QApplication::activeWindow();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_100060bb0();
  lVar5 = FUN_1000609c0(uVar4);
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = FUN_100152280();
  QObject::property((char *)&local_48);
  QVariant::toString();
  QObject::property((char *)&local_60);
  QVariant::toString();
  lVar5 = FUN_100154930(uVar4,&local_38,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100360c2c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100360c2c:
  QVariant::~QVariant(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100360c65;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100360c65:
  QVariant::~QVariant(&local_48);
  lVar7 = 0;
  if (lVar5 == 0) {
    return 0;
  }
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  local_68 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(lVar3,&local_70,PTR_staticMetaObject_1021e1540,&local_68,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100360cdd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100360cdd:
  uVar4 = FUN_10018c280(lVar5);
  uVar4 = FUN_100319d40(uVar4);
  FUN_10035ba90(&local_78,uVar4);
  FUN_10006b440(&local_98,&local_78);
  local_90 = (long *)(local_98 + (long)local_98[2] * 2 + 4);
  local_88 = (long *)(local_98 + (long)local_98[3] * 2 + 4);
  if (local_98[2] != local_98[3]) {
    iVar8 = 1;
    do {
      lVar3 = *(long *)*local_90;
      lVar7 = 0;
      if ((lVar3 != 0) && (lVar7 = 0, *(int *)(lVar3 + 4) != 0)) {
        lVar7 = ((long *)*local_90)[1];
      }
      iVar1 = *(int *)(local_68 + 8);
      pDVar6 = local_68 + (long)iVar1 * 8 + 0x10;
      iVar2 = *(int *)(local_68 + 0xc);
      if (iVar1 == iVar2) {
LAB_100360dc0:
        if (pDVar6 != local_68 + (long)iVar2 * 8 + 0x10) goto LAB_100360deb;
      }
      else {
        lVar3 = (long)iVar2 * 8 + (long)iVar1 * -8;
        do {
          if (*(long *)pDVar6 == lVar7) goto LAB_100360dc0;
          pDVar6 = pDVar6 + 8;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      local_90 = local_90 + 1;
    } while (local_90 != local_88);
  }
  iVar8 = 2;
LAB_100360deb:
  local_80 = 1;
  if (*local_98 != -1) {
    if (*local_98 != 0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_29 = *local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100360e17;
    }
    FUN_10006b5d0(&local_98,local_98);
  }
LAB_100360e17:
  if (iVar8 == 2) {
    lVar7 = 0;
  }
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_29 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100360e4b;
    }
    FUN_10006b5d0(&local_78,local_78);
  }
LAB_100360e4b:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return lVar7;
      }
      local_29 = 0;
    }
    QListData::dispose(local_68);
  }
  return lVar7;
}

