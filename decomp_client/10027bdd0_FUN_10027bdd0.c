
void FUN_10027bdd0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  QArrayData *local_38;
  
  if (DAT_10230ffd0 < 2) goto LAB_10027be8a;
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",2,"Downloade load finished. File path = [%s]",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10027be5c;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10027be5c:
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Process exit code = [%d]. Process exit status = [%d]",
                  param_3,param_4);
  }
LAB_10027be8a:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

