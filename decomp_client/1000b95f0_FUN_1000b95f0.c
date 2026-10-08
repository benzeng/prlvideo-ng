
undefined8 * FUN_1000b95f0(undefined8 *param_1,long *param_2,char param_3)

{
  long lVar1;
  undefined *puVar2;
  QString *pQVar3;
  undefined1 auVar4 [16];
  QArrayData *pQStack_60;
  QString local_58;
  QString aQStack_50 [3];
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  puVar2 = PTR_shared_null_1021e1288;
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
    pQVar3 = (QString *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
    auVar4._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar4._0_8_ = PTR_shared_null_1021e1288;
    auVar4._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      pQStack_60 = auVar4._8_8_;
      local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      aQStack_50[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_60;
      if (param_3 == '\0') {
        QString::operator=(aQStack_50,pQVar3);
      }
      else {
        QString::operator=(&local_58,pQVar3);
      }
      FUN_100094c90(param_1,&local_58);
      if (*(int *)aQStack_50[0].field0_0x0 != -1) {
        if (*(int *)aQStack_50[0].field0_0x0 != 0) {
          LOCK();
          *(int *)aQStack_50[0].field0_0x0 = *(int *)aQStack_50[0].field0_0x0 + -1;
          local_31 = *(int *)aQStack_50[0].field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b96a7;
        }
        QArrayData::deallocate((QArrayData *)aQStack_50[0].field0_0x0,2,8);
      }
LAB_1000b96a7:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b96d7;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1000b96d7:
      pQVar3 = pQVar3 + 1;
    } while (pQVar3 != (QString *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
  }
  return param_1;
}

