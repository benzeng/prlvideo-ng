
void FUN_100767ef0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
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
  
  FUN_100769ff0(&local_40,*(undefined8 *)(param_1 + 0x48));
  iVar1 = *(int *)(local_40 + 0xc);
  iVar2 = *(int *)(local_40 + 8);
  iVar7 = iVar1 - iVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100767f49;
    }
    QListData::dispose(local_40);
  }
LAB_100767f49:
  lVar6 = 0;
  if (iVar7 == 1) {
    FUN_100769ff0(&local_48,*(undefined8 *)(param_1 + 0x48));
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
        if ((bool)local_31) goto LAB_100767f95;
      }
      QListData::dispose(local_48);
    }
  }
LAB_100767f95:
  lVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x60))();
  uVar4 = FUN_1007637b0(*(undefined8 *)(param_1 + 0x38),0);
  if (lVar6 == 0) {
    lVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      lVar6 = *(long *)(param_1 + 0x20);
    }
  }
  FUN_100763140(uVar4,lVar6);
  FUN_100763120(uVar4,0 < iVar7);
  if (iVar7 < 2) {
    iVar5 = 0x1e156bc;
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
      if ((bool)local_31) goto LAB_10076805b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10076805b:
  if (lVar3 < 1) {
    QMetaObject::tr((char *)&local_68,"",0x1df5b8d);
    FUN_100763030(uVar4,&local_68);
    if (*(int *)local_68 == -1) goto LAB_100768158;
    local_60 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      iVar5 = *(int *)local_68;
      UNLOCK();
      goto joined_r0x000100768143;
    }
  }
  else {
    QMetaObject::tr((char *)&local_60,"",0x1e156cd);
    QString::arg(&local_58,&local_60,lVar3,0,10,0x20);
    FUN_100763030(uVar4,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007680df;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1007680df:
    if (*(int *)local_60 == -1) goto LAB_100768158;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar5 = *(int *)local_60;
      UNLOCK();
joined_r0x000100768143:
      local_31 = iVar5 != 0;
      if ((bool)local_31) goto LAB_100768158;
    }
  }
  QArrayData::deallocate(local_60,2,8);
LAB_100768158:
  if (iVar1 == iVar2) {
    QMetaObject::tr((char *)&local_70,"",0x1e156e5);
    FUN_100763080(uVar4,&local_70);
    if (*(int *)local_70 == -1) {
      return;
    }
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
  }
  else if (iVar7 == 1) {
    QMetaObject::tr((char *)&local_78,"",0x1e156f8);
    FUN_100763080(uVar4,&local_78);
    if (*(int *)local_78 == -1) {
      return;
    }
    local_70 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
  }
  else {
    QMetaObject::tr((char *)&local_80,"",0x1e15709);
    FUN_100763080(uVar4,&local_80);
    if (*(int *)local_80 == -1) {
      return;
    }
    local_70 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return;
      }
      local_31 = 0;
    }
  }
  QArrayData::deallocate(local_70,2,8);
  return;
}

