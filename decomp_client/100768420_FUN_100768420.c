
void FUN_100768420(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100769ff0(&local_40,*(undefined8 *)(param_1 + 0x50));
  iVar2 = *(int *)(local_40 + 0xc);
  iVar1 = *(int *)(local_40 + 8);
  iVar8 = iVar2 - iVar1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100768477;
    }
    QListData::dispose(local_40);
  }
LAB_100768477:
  lVar6 = 0;
  if (iVar8 == 1) {
    FUN_100769ff0(&local_48,*(undefined8 *)(param_1 + 0x50));
    lVar6 = 0;
    if (*(int *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
      lVar6 = *(long *)(local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10);
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007684cf;
      }
      QListData::dispose(local_48);
    }
  }
LAB_1007684cf:
  lVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x60))();
  uVar4 = FUN_1007637b0(*(undefined8 *)(param_1 + 0x38),2);
  lVar7 = lVar6;
  if (lVar6 == 0) {
    lVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      lVar7 = *(long *)(param_1 + 0x20);
    }
  }
  FUN_100763140(uVar4,lVar7);
  FUN_100763120(uVar4,0 < iVar8);
  if (iVar8 < 2) {
    iVar5 = 0x1e157e5;
  }
  else {
    iVar5 = 0x1e15413;
  }
  QMetaObject::tr((char *)&local_50,"",iVar5);
  FUN_1007630d0(uVar4,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100768594;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100768594:
  if (lVar3 < 1) {
    QMetaObject::tr((char *)&local_70,"",0x1e1545e);
    FUN_100763030(uVar4,&local_70);
    if (*(int *)local_70 != -1) {
      local_60 = local_70;
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        iVar5 = *(int *)local_70;
        UNLOCK();
        goto joined_r0x0001007686d3;
      }
      goto LAB_1007686d9;
    }
  }
  else {
    QMetaObject::tr((char *)&local_60,"",0x1e157ed);
    FUN_100def650(&local_68,lVar3,1);
    QString::arg(&local_58,&local_60,&local_68,0,0x20);
    FUN_100763030(uVar4,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100768625;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100768625:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100768655;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100768655:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar5 = *(int *)local_60;
        UNLOCK();
joined_r0x0001007686d3:
        local_31 = iVar5 != 0;
        if ((bool)local_31) goto LAB_1007686e8;
      }
LAB_1007686d9:
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1007686e8:
  if (iVar2 == iVar1) {
    QMetaObject::tr((char *)&local_78,"",0x1e1580a);
    FUN_100763080(uVar4,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100768896;
      }
LAB_100768887:
      QArrayData::deallocate(local_78,2,8);
    }
  }
  else {
    if (iVar8 == 1) {
      QMetaObject::tr((char *)&local_88,"",0x1e1582a);
      FUN_10018d830(&local_90,lVar6);
      QString::arg(&local_80,&local_88,&local_90,0,0x20);
      FUN_100763080(uVar4,&local_80);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007687db;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1007687db:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100768811;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100768811:
      if (*(int *)local_88 == -1) goto LAB_100768896;
      local_78 = local_88;
      if (*(int *)local_88 == 0) goto LAB_100768887;
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      iVar2 = *(int *)local_88;
      UNLOCK();
    }
    else {
      QMetaObject::tr((char *)&local_98,"",0x1e1583a);
      FUN_100763080(uVar4,&local_98);
      if (*(int *)local_98 == -1) goto LAB_100768896;
      local_78 = local_98;
      if (*(int *)local_98 == 0) goto LAB_100768887;
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      iVar2 = *(int *)local_98;
      UNLOCK();
    }
    local_31 = iVar2 != 0;
    if (!(bool)local_31) goto LAB_100768887;
  }
LAB_100768896:
  if (lVar6 == 0) {
    return;
  }
  iVar2 = FUN_10018a9d0(lVar6);
  if (iVar2 != 0x30000009) {
    return;
  }
  QMetaObject::tr((char *)&local_a8,"",0x1e15860);
  FUN_10018d830(&local_b0,lVar6);
  QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
  FUN_100763080(uVar4,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076894a;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10076894a:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100768980;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100768980:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007689b6;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007689b6:
  FUN_100763120(uVar4,0);
  return;
}

