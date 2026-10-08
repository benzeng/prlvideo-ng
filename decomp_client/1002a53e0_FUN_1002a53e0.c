
void FUN_1002a53e0(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *local_40;
  QArrayData *local_38;
  undefined *local_30;
  undefined1 local_21;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13d8);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,
                  "Installing HAV finished with exit code [%d] and exit status [%d]",
                  *(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x44));
  }
  puVar1 = PTR_shared_null_1021e15e8;
  if ((param_2 < 0) || (*(int *)(lVar3 + 0x40) != 0)) {
    if (*(int *)(lVar3 + 0x40) == 0x1a) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar4 = 0x80000009;
      goto LAB_1002a54b8;
    }
  }
  else if (*(int *)(lVar3 + 0x44) == 0) {
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    FUN_100061050(2,lVar3);
    uVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    uVar2 = FUN_1002a2ac0(param_1);
    FUN_100173e70(uVar4,uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar4 = 0;
LAB_1002a54b8:
                    /* WARNING: Could not recover jumptable at 0x0001002a54c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
    return;
  }
  local_30 = PTR_shared_null_1021e15e8;
  FUN_1002a0af0(&local_38,param_1);
  FUN_1000341d0(&local_30,&local_38);
  local_40 = puVar1;
  FUN_1002a17d0(param_1,0x80015256,&local_30,&local_40);
  FUN_100039a80(&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a5540;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002a5540:
  FUN_100039a80(&local_30);
  return;
}

