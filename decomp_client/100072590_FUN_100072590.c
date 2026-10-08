
void FUN_100072590(long param_1)

{
  undefined *puVar1;
  char cVar2;
  size_t sVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long local_48;
  long local_40;
  QString local_38;
  QIcon local_30 [15];
  undefined1 local_21;
  
  puVar1 = PTR_s___pixmaps_AppIcon_PD_AppIcon_tra_102270b50;
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    return;
  }
  iVar7 = -1;
  if (PTR_s___pixmaps_AppIcon_PD_AppIcon_tra_102270b50 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s___pixmaps_AppIcon_PD_AppIcon_tra_102270b50);
    iVar7 = (int)sVar3;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar7);
  QIcon::QIcon(local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100072622;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100072622:
  pQVar4 = operator_new(0x18);
  CSystemStatusBarItem::CSystemStatusBarItem((CSystemStatusBarItem *)pQVar4,3,local_30,param_1);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x18);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_21 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar5;
    *(QObject **)(param_1 + 0x20) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_21 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar5);
    }
  }
  uVar9 = false;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar9 = false, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    uVar9 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  CSystemStatusBarItem::setHideOnDeactivate((bool)uVar9);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_40,uVar8,"2pressed()",param_1,"1onTrayIconActivated()",0);
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  QObject::connect(&local_48,uVar8,"2geometryChanged()",param_1,"2iconGeometryChanged()",0);
  if ((cVar2 != '\0') && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  QIcon::~QIcon(local_30);
  return;
}

