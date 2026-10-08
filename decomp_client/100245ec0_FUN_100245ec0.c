
void FUN_100245ec0(long *param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QString local_30;
  undefined1 local_22;
  
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  lVar2 = FUN_10061b510(lVar2);
  if (lVar2 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Invalid server instance is null.");
    }
                    /* WARNING: Could not recover jumptable at 0x000100245fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  uVar3 = FUN_10061b510(lVar2);
  FUN_10015a2b0(&local_30,uVar3);
  cVar1 = operator==(&local_30,param_3);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100245f61;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100245f61:
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

