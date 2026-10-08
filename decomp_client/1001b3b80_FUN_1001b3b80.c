
undefined1 FUN_1001b3b80(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  (**(code **)(*param_1 + 0xb8))(&local_30,param_1);
  cVar1 = FUN_1001b35f0(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001b3be1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001b3be1:
  if (cVar1 == '\0') {
    iVar3 = (**(code **)(*param_1 + 0xd8))(param_1);
    if ((iVar3 != 1) && (iVar3 = (**(code **)(*param_1 + 0xd8))(param_1), iVar3 != 3)) {
      return 0;
    }
    (**(code **)(*param_1 + 200))(local_40,param_1);
    uVar2 = QtPrivate::QStringList_contains(local_40,param_2,1);
    puVar4 = local_40;
  }
  else {
    (**(code **)(*param_1 + 200))(local_38,param_1);
    uVar2 = QtPrivate::QStringList_contains(local_38,param_2,1);
    puVar4 = local_38;
  }
  FUN_100039a80(puVar4);
  return uVar2;
}

