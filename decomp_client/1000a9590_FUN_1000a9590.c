
void FUN_1000a9590(long param_1,undefined4 param_2,long *param_3)

{
  QArrayData *local_38;
  undefined1 local_28 [8];
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAD","prl_client_app",2,"Registering vmUuid=\"%s\", result=%i",
                  local_38 + *(long *)(local_38 + 0x10),param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1000a961a;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1000a961a:
  if (*(int *)(*param_3 + 4) != 0) {
    FUN_100062d00(param_1 + 0x20,param_3,local_28);
  }
  return;
}

