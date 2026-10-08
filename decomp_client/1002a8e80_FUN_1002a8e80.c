
void FUN_1002a8e80(long *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined *local_40;
  QArrayData *local_38;
  undefined *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e15e8;
  iVar4 = -0x7ffffff7;
  if (param_4 == 0) {
    iVar4 = param_2;
  }
  if (iVar4 < 0) {
    if (iVar4 != -0x7ffffd8b) {
      local_30 = PTR_shared_null_1021e15e8;
      FUN_1002a0af0(&local_38,param_1);
      FUN_1000341d0(&local_30,&local_38);
      local_40 = puVar1;
      FUN_1002a17d0(param_1,0x80015258,&local_30,&local_40);
      FUN_100039a80(&local_40);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1002a8f81;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1002a8f81:
      FUN_100039a80(&local_30);
      return;
    }
  }
  else {
    lVar5 = 0;
    if ((param_1[3] != 0) && (lVar5 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar5 = param_1[4];
    }
    FUN_100061050(2,lVar5);
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    uVar2 = FUN_1002a2ac0(param_1);
    FUN_100173e70(uVar3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a8f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,iVar4);
  return;
}

