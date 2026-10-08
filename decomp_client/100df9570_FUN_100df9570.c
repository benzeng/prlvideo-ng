
undefined8 *
FUN_100df9570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  QString QVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  QString local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  lVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_length_102269050);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (lVar4 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_length_102269050);
    QString::QString(&local_40,uVar3,0);
    QVar2.field0_0x0 = local_40.field0_0x0;
    lVar4 = *(long *)(local_40.field0_0x0 + 0x10);
    uVar5 = (*(code *)puVar1)(param_4,PTR_s_length_102269050);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (param_4,PTR_s_getCharacters_range__10226a778,(QArrayData *)(QVar2.field0_0x0 + lVar4)
               ,0,uVar5);
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return param_1;
}

