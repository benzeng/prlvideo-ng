
undefined1 FUN_100304a90(CMessageInfo *param_1,QWidget *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar4 = CMessageInfo::data();
  if (((*(int *)(lVar4 + 0x10) != 3) ||
      (lVar4 = CMessageInfo::data(), *(char *)(lVar4 + 0x30) != '\0')) ||
     (lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220dfb0), lVar4 == 0)) {
    uVar2 = CMessageBoxBuilder::isNeedBlockSheet(param_1,param_2);
    return uVar2;
  }
  FUN_10036bf70(&local_40,lVar4);
  uVar5 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar5,&local_40);
  if (lVar4 == 0) {
    uVar2 = CMessageBoxBuilder::isNeedBlockSheet(param_1,param_2);
  }
  else {
    uVar5 = FUN_10018c280(lVar4);
    uVar5 = FUN_100319c50(uVar5);
    cVar1 = FUN_100330be0(uVar5);
    uVar2 = 1;
    if (cVar1 == '\0') {
      iVar3 = FUN_10018a9d0(lVar4);
      if (iVar3 == 0x30000010) {
        uVar5 = FUN_100370280();
        iVar3 = FUN_100375450(uVar5,&local_40,0);
        if (iVar3 == 3) goto LAB_100304bd7;
      }
      uVar5 = FUN_10018c280(lVar4);
      uVar5 = FUN_100319c50(uVar5);
      cVar1 = FUN_100330b70(uVar5);
      if (((cVar1 == '\0') && (iVar3 = FUN_10018a9d0(lVar4), iVar3 != 0x30000003)) &&
         (cVar1 = FUN_10018ff50(lVar4), cVar1 == '\0')) {
        uVar2 = CMessageBoxBuilder::isNeedBlockSheet(param_1,param_2);
      }
    }
  }
LAB_100304bd7:
  if (*(int *)local_40 == -1) {
    return uVar2;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return uVar2;
    }
    local_31 = 0;
  }
  QArrayData::deallocate(local_40,2,8);
  return uVar2;
}

