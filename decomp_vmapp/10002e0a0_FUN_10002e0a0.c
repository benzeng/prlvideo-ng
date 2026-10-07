
undefined8 FUN_10002e0a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint *puVar3;
  QDateTime local_30 [8];
  QDateTime local_28 [8];
  
  QByteArray::resize((int)param_3);
  puVar3 = (uint *)*param_3;
  if ((1 < *puVar3) || (*(long *)(puVar3 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar3[1] + 1,puVar3[2] >> 0x1f);
    puVar3 = (uint *)*param_3;
  }
  lVar1 = *(long *)(puVar3 + 4);
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(local_28,local_30,1);
  QDateTime::~QDateTime(local_30);
  QDateTime::date();
  QDateTime::time();
  uVar2 = QDate::year();
  *(undefined4 *)((long)puVar3 + lVar1) = uVar2;
  uVar2 = QDate::month();
  *(undefined4 *)(lVar1 + 4 + (long)puVar3) = uVar2;
  uVar2 = QDate::day();
  *(undefined4 *)(lVar1 + 8 + (long)puVar3) = uVar2;
  uVar2 = QTime::hour();
  *(undefined4 *)(lVar1 + 0xc + (long)puVar3) = uVar2;
  uVar2 = QTime::minute();
  *(undefined4 *)(lVar1 + 0x10 + (long)puVar3) = uVar2;
  uVar2 = QTime::second();
  *(undefined4 *)(lVar1 + 0x14 + (long)puVar3) = uVar2;
  uVar2 = QTime::msec();
  *(undefined4 *)(lVar1 + 0x18 + (long)puVar3) = uVar2;
  QDateTime::~QDateTime(local_28);
  return 0;
}

