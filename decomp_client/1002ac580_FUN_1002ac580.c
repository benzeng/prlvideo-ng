
void FUN_1002ac580(long *param_1,int param_2,long param_3)

{
  int iVar1;
  QArrayData *local_38;
  QNetworkProxy local_30 [15];
  undefined1 local_21;
  
  if (param_2 < 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: Proxy detection failed for deferred license activation");
                    /* WARNING: Could not recover jumptable at 0x0001002ac67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  QNetworkProxy::QNetworkProxy(local_30,(QNetworkProxy *)(param_3 + 0x18));
  QNetworkProxy::operator=((QNetworkProxy *)(param_1 + 5),local_30);
  QNetworkProxy::~QNetworkProxy(local_30);
  iVar1 = QNetworkProxy::type();
  if (iVar1 != 3) goto LAB_1002ac62d;
  QNetworkProxy::user();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ac60f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ac60f:
  if (iVar1 != 0) {
    CAbstractTask::prependSubTask((int)param_1);
    CAbstractTask::prependSubTask((int)param_1);
  }
LAB_1002ac62d:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

