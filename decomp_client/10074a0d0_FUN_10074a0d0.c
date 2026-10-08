
void FUN_10074a0d0(long param_1,char param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  QUrl local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (DAT_10230ffd0 < 2) goto LAB_10074a1f7;
  pcVar2 = "unknown";
  if (*(long *)(param_1 + 0x58) == 0) {
    bVar1 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0) {
    bVar1 = false;
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    bVar1 = false;
  }
  else {
    CAbstractWebView::url();
    QUrl::toString(&local_38,local_40,0);
    QString::toUtf8();
    pcVar2 = (char *)(local_30 + *(long *)(local_30 + 0x10));
    bVar1 = true;
  }
  pcVar3 = "ERROR";
  if (param_2 != '\0') {
    pcVar3 = "SUCCESS";
  }
  FUN_100df99c0("","prl_client_app",2,"Page [%s] load has finished with %s",pcVar2,pcVar3);
  if (!bVar1) goto LAB_10074a1f7;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10074a1be;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10074a1be:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10074a1ee;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10074a1ee:
  QUrl::~QUrl(local_40);
LAB_10074a1f7:
  FUN_100858d50(*(undefined8 *)(param_1 + 0x10),0);
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (-1 < *(int *)(*(long *)(param_1 + 0x50) + 0x10)) {
      QTimer::stop();
    }
    FUN_100749010(param_1);
  }
  return;
}

