
void FUN_1000879c0(QObject *param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  void *pvVar3;
  QObject *pQVar4;
  QVariant *pQVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100785b00(pvVar3);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar3;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
  }
  pQVar4 = (QObject *)FUN_100785c90(DAT_1023109d8,uVar6,9);
  QObject::disconnect(pQVar4,"2valueFetchFinished(PRL_RESULT)",param_1,
                      "1onVmSizeFetched(PRL_RESULT)");
  if (param_2 < 0) {
    return;
  }
  FUN_1007864c0(&local_48,pQVar4);
  QVariant::toMap();
  QVariant::~QVariant(&local_48);
  FUN_1007868d0(&local_60,5);
  pQVar5 = (QVariant *)FUN_10008c590(&local_38,&local_60);
  QVariant::QVariant(&local_58,pQVar5);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100087ac9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100087ac9:
  puVar1 = PTR__OBJC_CLASS___NSNumber_10226a848;
  if ((local_58.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    uVar6 = QVariant::toLongLong((bool *)&local_58);
    lVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar1,PTR_s_numberWithLongLong__10226a010,uVar6)
    ;
    if (lVar7 != 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (*(undefined8 *)(param_1 + 0x18),PTR_s_vmSize_10226a018);
      cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_isEqual__10226a020,uVar6);
      if (cVar2 == '\0') {
        (*(code *)PTR__objc_msgSend_1021e1c68)
                  (*(undefined8 *)(param_1 + 0x18),PTR_s_setVmSize__10226a028,lVar7);
        FUN_100867880(*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  QVariant::~QVariant(&local_58);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
  return;
}

