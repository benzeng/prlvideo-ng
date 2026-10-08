
undefined8 FUN_1002d8e20(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  QArrayData *pQVar9;
  char *pcVar10;
  QUrl *pQVar11;
  QString local_d8;
  QLocale local_d0 [8];
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [56];
  QUrl local_58 [8];
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x28);
  if (lVar5 == 0) {
    return 0x80000009;
  }
  pQVar6 = operator_new(0x38);
  CAbstractWebView::CAbstractWebView((CAbstractWebView *)pQVar6,0,0x40001,0);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  piVar8 = *(int **)(param_1 + 0x18);
  if (piVar8 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + 0x18);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar7;
    *(QObject **)(param_1 + 0x20) = pQVar6;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_29 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar7);
    }
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QWidget::setAttribute(uVar4,0x37,1);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_38,uVar4,"2mainFrameloadFinished(bool)",param_1,"1onLoadFinished(bool)",0)
  ;
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_40,uVar4,"2destroyed()",param_1,"1onWebViewClosed()",0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_48,uVar4,"2linkClicked(QUrl)",param_1,"1onLinkClicked(QUrl)",0);
  if (cVar2 != '\0') {
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_50,uVar4,"2aboutToClose()",param_1,"1onWebViewClosed()",0);
  if ((cVar1 != '\0') && (local_50 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar4 = FUN_100748240();
  local_a0 = (QArrayData *)QString::fromAscii_helper("win10.upgrade.advisor",0x15);
  uVar4 = FUN_100748290(uVar4,&local_a0);
  FUN_100746ae0(local_98,uVar4);
  QUrl::QUrl(local_58,local_90,0);
  FUN_10012ac30(local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d9110;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002d9110:
  QUrlQuery::QUrlQuery((QUrlQuery *)&local_a8,local_58);
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("host_ram",8);
  FUN_10018c2b0(lVar5);
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  iVar3 = CVmMemory::getRamSize();
  QString::number((uint)&local_b8,iVar3);
  QUrlQuery::addQueryItem(&local_a8,&local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d91bb;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002d91bb:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d91f1;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1002d91f1:
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("locale",6);
  QLocale::QLocale(local_d0);
  QLocale::name();
  QUrlQuery::addQueryItem(&local_a8,&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d9278;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1002d9278:
  QLocale::~QLocale(local_d0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d92ba;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1002d92ba:
  local_d8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("architecture",0xc);
  if (*(int *)(param_1 + 0x38) == 0) {
    pcVar10 = "x32";
  }
  else {
    pcVar10 = "x64";
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper(pcVar10,3);
  QUrlQuery::addQueryItem(&local_a8,&local_d8);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_29 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d934a;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_1002d934a:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d9380;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1002d9380:
  QUrl::setQuery((QUrlQuery *)local_58);
  pQVar11 = (QUrl *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar11 = (QUrl *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar11 = *(QUrl **)(param_1 + 0x20);
  }
  CAbstractWebView::load(pQVar11);
  CAbstractTask::setWaitForSubTaskCompletion();
  QUrlQuery::~QUrlQuery((QUrlQuery *)&local_a8);
  QUrl::~QUrl(local_58);
  return 0;
}

