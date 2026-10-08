
void FUN_10072d200(QObject *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  QObject *param_5)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  QString local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102227360;
  auVar5._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar5._0_8_ = PTR_shared_null_1021e1288;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar5;
  *(undefined4 *)(param_1 + 0x20) = 0;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x28) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  uVar4 = QString::fromAscii_helper("normal",6);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x38) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  puVar2 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e1288;
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x48) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  auVar6._8_4_ = (int)puVar2;
  auVar6._0_8_ = puVar2;
  auVar6._12_4_ = (int)((ulong)puVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar6;
  *(undefined **)(param_1 + 0x60) = puVar2;
  auVar7._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar7._0_8_ = PTR_shared_null_1021e12f0;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar7;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined **)(param_1 + 0x88) = puVar2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  QUuid::createUuid();
  QUuid::toString();
  cVar3 = operator==(&local_40,(QString *)(param_1 + 0x10));
  if (cVar3 == '\0') {
    QString::operator=((QString *)(param_1 + 0x10),&local_40);
    FUN_100855360(param_1,&local_40);
  }
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

