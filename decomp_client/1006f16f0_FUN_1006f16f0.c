
void FUN_1006f16f0(QObject *param_1,char param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  QUrl local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  uint local_4c;
  void *local_48;
  uint *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (param_1[0x154] != (QObject)0x0) {
    param_1[0x154] = (QObject)0x0;
    local_4c = local_4c & 0xffffff00;
    local_48 = (void *)0x0;
    local_40 = &local_4c;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,1,&local_48);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    pcVar3 = "unknown";
  }
  else {
    CAbstractWebView::url();
    QUrl::toString(&local_60,local_68,0);
    QString::toUtf8();
    pcVar3 = (char *)(local_58 + *(long *)(local_58 + 0x10));
  }
  pcVar4 = "ERROR";
  if (param_2 != '\0') {
    pcVar4 = "SUCCESS";
  }
  FUN_100df99c0("","prl_client_app",0,"Page [%s] load has finished with %s",pcVar3,pcVar4);
  if (lVar2 == 0) goto LAB_1006f183b;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_1006f1802;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1006f1802:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_60 != 0);
      if (*(int *)local_60 != 0) goto LAB_1006f1832;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006f1832:
  QUrl::~QUrl(local_68);
LAB_1006f183b:
  if ((*(uint *)(param_1 + 0x150) < 2) &&
     ((*(int *)(*(long *)(param_1 + 0x158) + 0x10) < 0 ||
      (QTimer::stop(), *(int *)(param_1 + 0x150) != 2)))) {
    *(undefined4 *)(param_1 + 0x150) = 2;
    local_4c = 2;
    local_48 = (void *)0x0;
    local_40 = &local_4c;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,0,&local_48);
  }
  if (param_1[0x70] != (QObject)0x0) {
    if (-1 < *(int *)(*(long *)(param_1 + 0x160) + 0x10)) {
      QTimer::stop();
    }
    FUN_1006efe40(param_1);
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

