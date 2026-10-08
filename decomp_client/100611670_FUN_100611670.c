
void FUN_100611670(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  QArrayData *pQVar3;
  char *pcVar4;
  long local_98;
  QVariant local_90;
  QArrayData *local_80;
  undefined4 local_78 [2];
  QArrayData *local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  QObject::sender();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)(local_40.field0_0x0 + 4) == 0) goto LAB_100611844;
  cVar2 = FUN_100611280(param_1,&local_40);
  if (cVar2 == '\0') {
    FUN_100609af0(param_1,&local_40,1);
    goto LAB_100611844;
  }
  local_78[0] = 0x65;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  local_68._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_68._0_8_ = PTR_shared_null_1021e15e8;
  local_68._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_58 = 0;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Coupon",6);
  local_80 = pQVar3;
  FUN_1000341d0(local_68 + 8,&local_80);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100611755;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100611755:
  pcVar4 = operator_new(0x30);
  FUN_1002dce60(pcVar4,local_78);
  puVar1 = PTR_s_serverID_102274838;
  QVariant::QVariant(&local_90,&local_40);
  QObject::setProperty(pcVar4,(QVariant *)puVar1);
  QVariant::~QVariant(&local_90);
  QObject::connect(&local_98,pcVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onPromoTaskFinished(PRL_RESULT)",0);
  if (local_98 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  CAbstractTask::execute();
  FUN_100039a80(local_68 + 8);
  FUN_1001e3400(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100611844;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100611844:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

