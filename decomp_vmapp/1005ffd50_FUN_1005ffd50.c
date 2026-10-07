
/* WARNING: Removing unreachable block (ram,0x0001005ffe5a) */
/* WARNING: Removing unreachable block (ram,0x0001005ffeb7) */

undefined4 FUN_1005ffd50(undefined8 param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  QString *pQVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  QTypedArrayData<unsigned_short> *pQStack_90;
  QString local_70;
  QString local_68;
  QString QStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_100ba20d0;
  lVar3 = *param_2;
  uVar4 = (ulong)*(uint *)(lVar3 + 8);
  if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
    lVar5 = 0;
    auVar6._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar6._0_8_ = PTR_shared_null_100ba20d0;
    auVar6._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    do {
      QFileInfo::QFileInfo(local_40,(QString *)(lVar3 + 0x10 + ((int)uVar4 + lVar5) * 8));
      pQStack_90 = auVar6._8_8_;
      local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      QStack_60.field0_0x0 = pQStack_90;
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = PTR_shared_null_100ba2188;
      QFileInfo::absoluteFilePath();
      pQVar2 = (QString *)QString::operator=(&QStack_60,&local_70);
      QString::operator=(&local_68,pQVar2);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ffe32;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1005ffe32:
      local_58 = QFileInfo::size();
      local_4c = 0;
      local_50 = param_3;
      FUN_100602b40(param_4,&local_68);
      FUN_100603280(&local_68);
      QFileInfo::~QFileInfo(local_40);
      lVar5 = lVar5 + 1;
      lVar3 = *param_2;
      uVar4 = (ulong)*(int *)(lVar3 + 8);
    } while (lVar5 < (long)((long)*(int *)(lVar3 + 0xc) - uVar4));
  }
  return 0;
}

