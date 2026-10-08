
void FUN_1007677f0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
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
  
  FUN_100769ff0(&local_40,*(undefined8 *)(param_1 + 0x40));
  iVar1 = *(int *)(local_40 + 0xc);
  iVar2 = *(int *)(local_40 + 8);
  iVar8 = iVar1 - iVar2;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100767844;
    }
    QListData::dispose(local_40);
  }
LAB_100767844:
  lVar6 = 0;
  if (iVar8 == 1) {
    FUN_100769ff0(&local_48,*(undefined8 *)(param_1 + 0x40));
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
        if ((bool)local_31) goto LAB_10076789c;
      }
      QListData::dispose(local_48);
    }
  }
LAB_10076789c:
  lVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x60))();
  uVar4 = FUN_1007637b0(*(undefined8 *)(param_1 + 0x38),1);
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
    iVar5 = 0x1dc5141;
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
      if ((bool)local_31) goto LAB_100767961;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100767961:
  if (lVar3 < 1) {
    QMetaObject::tr((char *)&local_70,"",0x1e15427);
    FUN_100763030(uVar4,&local_70);
    if (*(int *)local_70 != -1) {
      local_60 = local_70;
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        iVar5 = *(int *)local_70;
        UNLOCK();
        goto joined_r0x000100767ab6;
      }
      goto LAB_100767abc;
    }
  }
  else {
    QMetaObject::tr((char *)&local_60,"",0x1e15741);
    FUN_100def650(&local_68,lVar3,1);
    QString::arg(&local_58,&local_60,&local_68,0,0x20);
    FUN_100763030(uVar4,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007679f6;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1007679f6:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100767a26;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100767a26:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar5 = *(int *)local_60;
        UNLOCK();
joined_r0x000100767ab6:
        local_31 = iVar5 != 0;
        if ((bool)local_31) goto LAB_100767acb;
      }
LAB_100767abc:
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100767acb:
  if (iVar1 == iVar2) {
    QMetaObject::tr((char *)&local_78,"",0x1e1575d);
    FUN_100763080(uVar4,&local_78);
    if (*(int *)local_78 == -1) {
      return;
    }
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100767c65;
  }
  if (iVar8 != 1) {
    QMetaObject::tr((char *)&local_98,"",0x1e15799);
    FUN_100763080(uVar4,&local_98);
    if (*(int *)local_98 == -1) {
      return;
    }
    local_78 = local_98;
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100767c65;
  }
  QMetaObject::tr((char *)&local_88,"",0x1e15781);
  FUN_10018d830(&local_90,lVar6);
  QString::arg(&local_80,&local_88,&local_90,0,0x20);
  FUN_100763080(uVar4,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100767bbc;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100767bbc:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100767bf2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100767bf2:
  if (*(int *)local_88 == -1) {
    return;
  }
  local_78 = local_88;
  if (*(int *)local_88 != 0) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + -1;
    UNLOCK();
    if (*(int *)local_88 != 0) {
      return;
    }
    local_31 = 0;
  }
LAB_100767c65:
  QArrayData::deallocate(local_78,2,8);
  return;
}

