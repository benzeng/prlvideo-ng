
void FUN_1006331a0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  cVar1 = FUN_100632fc0();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001006331f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))(param_1);
    return;
  }
  uVar2 = FUN_1006915d0();
  lVar3 = FUN_100691620(uVar2,0x14,*(undefined8 *)PTR_self_1021e1388);
  if (lVar3 != 0) {
    QAction::activate(lVar3,0);
    return;
  }
  FUN_1006946e0(&local_28,0x14);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Can\'t find action %s.",local_20 + *(long *)(local_20 + 0x10)
               );
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10063326b;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_10063326b:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

