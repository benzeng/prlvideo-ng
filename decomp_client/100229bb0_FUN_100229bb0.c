
undefined8 FUN_100229bb0(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  QString *pQVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  Connection local_50 [8];
  undefined1 local_48 [31];
  undefined1 local_29;
  
  pQVar1 = operator_new(0x40);
  local_48._8_4_ = (int)PTR_shared_null_1021e1288;
  local_48._0_8_ = PTR_shared_null_1021e1288;
  local_48._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  FUN_100729e60(pQVar1,local_48);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x68);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x68);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x68));
      }
    }
    *(int **)(param_1 + 0x68) = piVar2;
    *(QObject **)(param_1 + 0x70) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  if (*(int *)local_48._8_8_ != -1) {
    if (*(int *)local_48._8_8_ != 0) {
      LOCK();
      *(int *)local_48._8_8_ = *(int *)local_48._8_8_ + -1;
      local_29 = *(int *)local_48._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100229c8c;
    }
    QArrayData::deallocate((QArrayData *)local_48._8_8_,2,8);
  }
LAB_100229c8c:
  if (*(int *)local_48._0_8_ != -1) {
    if (*(int *)local_48._0_8_ != 0) {
      LOCK();
      *(int *)local_48._0_8_ = *(int *)local_48._0_8_ + -1;
      local_29 = *(int *)local_48._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100229cbc;
    }
    QArrayData::deallocate((QArrayData *)local_48._0_8_,2,8);
  }
LAB_100229cbc:
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
  }
  QObject::connect(local_50,uVar6,"2startFinished(bool)",param_1,"1terminate()",0);
  QMetaObject::Connection::~Connection(local_50);
  FUN_10072a420();
  lVar7 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    lVar7 = *(long *)(param_1 + 0x70);
  }
  QString::operator=((QString *)(lVar7 + 0x38),(QString *)(param_1 + 0x28));
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
  }
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Registering____1022708d8);
  pQVar4 = (QString *)CSearchParentHelper::instance();
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar5 = CSearchParentHelper::getParentForMessage(pQVar4,SUB81(&local_60,0),(QWidget *)0x0);
  FUN_10072a200(uVar6,&local_58,uVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100229df0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100229df0:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return 0;
}

