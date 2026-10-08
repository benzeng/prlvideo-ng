
undefined1 FUN_1006afc70(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  Data *local_30;
  undefined1 local_21;
  
  uVar3 = FUN_10018d490(*(undefined8 *)(param_1 + 0x20));
  FUN_100188480(&local_38,*(undefined8 *)(param_1 + 0x20));
  FUN_10015ccc0(&local_30,uVar3,&local_38);
  if (*(int *)(local_30 + 0xc) == *(int *)(local_30 + 8)) {
    FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getLinkedVmUuid();
    if (*(int *)(local_40 + 4) == 0) {
      uVar3 = FUN_10018c2b0(*(undefined8 *)(param_1 + 0x20));
      bVar1 = FUN_100112cc0(uVar3);
      bVar1 = bVar1 ^ 1;
    }
    else {
      bVar1 = 0;
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006afd30;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  else {
    bVar1 = 0;
  }
LAB_1006afd30:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006afd56;
    }
    QListData::dispose(local_30);
  }
LAB_1006afd56:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006afd86;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006afd86:
  if (bVar1 != 0) {
    cVar2 = FUN_100124f90();
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_10018ed10(*(undefined8 *)(param_1 + 0x20));
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

