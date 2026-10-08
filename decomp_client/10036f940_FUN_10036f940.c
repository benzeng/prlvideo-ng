
void FUN_10036f940(long param_1,undefined8 param_2,int param_3)

{
  CTaskGenericId *pCVar1;
  long lVar2;
  CTaskGenericId local_48 [24];
  QArrayData *local_30;
  QUrl local_28 [15];
  undefined1 local_19;
  
  if (param_3 != 1) {
    return;
  }
  QVariant::toString();
  QUrl::QUrl(local_28,&local_30,0);
  QDesktopServices::openUrl(local_28);
  QUrl::~QUrl(local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036f9b6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10036f9b6:
  FUN_1002450f0(local_48,param_1 + 0x40);
  pCVar1 = (CTaskGenericId *)CTaskManager::instance();
  lVar2 = CTaskManager::getTaskById(pCVar1);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to enter manual upgrade mode. Can\'t get VM upgrade task.");
  }
  else {
    FUN_100244790(lVar2);
  }
  CTaskGenericId::~CTaskGenericId(local_48);
  return;
}

