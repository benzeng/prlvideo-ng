
void FUN_100678780(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  QUrl *pQVar4;
  undefined8 uVar5;
  QUrl local_50 [8];
  QLocale local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  long local_30;
  undefined1 local_21;
  
  FUN_100df99c0("[LICENSE]","prl_client_app",0,"Download select trial page");
  if (((*(long *)(param_1 + 0x188) != 0) && (*(int *)(*(long *)(param_1 + 0x188) + 4) != 0)) &&
     (*(long **)(param_1 + 400) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 400) + 0x20))();
  }
  pQVar1 = operator_new(0x38);
  CAbstractWebView::CAbstractWebView((CAbstractWebView *)pQVar1,0,0,0);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x188);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x188);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x188) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x188));
      }
    }
    *(int **)(param_1 + 0x188) = piVar2;
    *(QObject **)(param_1 + 400) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x188) != 0) &&
     (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x188) + 4) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 400);
  }
  QObject::connect(&local_30,uVar5,"2loadFinished(bool)",param_1,"1onSelectTrialLoadFinished(bool)",
                   0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  local_40 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://parallels.com/products/desktop/pdfm12-trial-@LOCALE@",0x3b);
  QLocale::QLocale(local_48);
  FUN_100d3f730(&local_38,&local_40,local_48);
  QLocale::~QLocale(local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100678920;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100678920:
  CContentModel::setBusy(SUB81(param_1,0));
  pQVar4 = (QUrl *)0x0;
  if ((*(long *)(param_1 + 0x188) != 0) &&
     (pQVar4 = (QUrl *)0x0, *(int *)(*(long *)(param_1 + 0x188) + 4) != 0)) {
    pQVar4 = *(QUrl **)(param_1 + 400);
  }
  QUrl::QUrl(local_50,&local_38,0);
  CAbstractWebView::load(pQVar4);
  QUrl::~QUrl(local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

