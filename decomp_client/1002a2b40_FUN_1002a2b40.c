
void FUN_1002a2b40(long *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_30;
  undefined *local_28;
  
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  FUN_100061050(2,lVar2);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
  if ((param_2 < 0) || (lVar2 == 0)) {
    if (param_2 != -0x7ffffd8b) {
      local_28 = PTR_shared_null_1021e15e8;
      local_30 = PTR_shared_null_1021e15e8;
      FUN_1002a17d0(param_1,param_2 == -0x7ffeabdc | 0x80015408,&local_28,&local_30);
      FUN_100039a80(&local_30);
      FUN_100039a80(&local_28);
      return;
    }
  }
  else {
    DLCItemInfo::load();
    if ((char)param_1[0x17] == '\0') {
      lVar2 = 0;
      if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar2 = param_1[4];
      }
      FUN_100061050(2,lVar2);
      uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
      uVar1 = FUN_1002a2ac0(param_1);
      FUN_100173e70(uVar3,uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002a2c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

