
void FUN_1004c6170(QMutexData *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  QMutex *pQVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  FUN_1004c0650();
  *(undefined ***)param_1 = &PTR_FUN_100bc2fb8;
  uVar3 = FUN_100502d90();
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  pvVar4 = operator_new(0x28);
  FUN_1004edbb0(pvVar4);
  *(void **)(param_1 + 0x30) = pvVar4;
  puVar5 = operator_new(0x20);
  *puVar5 = param_1;
  QMutex::QMutex((QMutex *)(puVar5 + 1),0);
  auVar8._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar8._0_8_ = PTR_shared_null_100ba2188;
  auVar8._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(puVar5 + 2) = auVar8;
  *(undefined8 **)(param_1 + 0x38) = puVar5;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1004cfda0(param_1 + 0x48,param_1);
  *(QMutexData **)&param_1[0x80].field_0x0 = param_1;
  QThreadStorageData::QThreadStorageData((QThreadStorageData *)(param_1 + 0x88),FUN_1004d6750);
  puVar5 = operator_new(0xb0);
  FUN_100041050(puVar5);
  *puVar5 = &PTR_FUN_100bc3000;
  puVar5[0x15] = param_1;
  *(undefined8 **)(param_1 + 0x90) = puVar5;
  pvVar4 = operator_new(8);
  FUN_1004e65f0(pvVar4,param_1);
  *(void **)(param_1 + 0x98) = pvVar4;
  pvVar4 = operator_new(0x50);
  FUN_1004ec350(pvVar4,param_2,param_1);
  *(void **)(param_1 + 0xa0) = pvVar4;
  pvVar4 = operator_new(0x18);
  FUN_1004c7980(pvVar4,param_1);
  *(void **)(param_1 + 0xa8) = pvVar4;
  pQVar6 = operator_new(0x18);
  QMutex::QMutex(pQVar6,0);
  pQVar6[1].field0_0x0.field0_0x0 = (QMutexData *)PTR_shared_null_100ba2188;
  pQVar6[2].field0_0x0.field0_0x0 = param_1;
  *(QMutex **)(param_1 + 0xb0) = pQVar6;
  pvVar4 = operator_new(0x10);
  FUN_1004f91d0(pvVar4,param_1);
  *(void **)(param_1 + 0xb8) = pvVar4;
  FUN_1004f5ba0();
  FUN_1004f5ff0();
  DAT_10111cc78 = FUN_1002a4d90(&DAT_1011c3e48,0x15,0);
  lVar1 = *(long *)(param_1 + 0x90);
  uVar7 = lVar1 + 0x80;
  if ((uVar7 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar7 = uVar7 | 1;
  }
  *(undefined1 *)(lVar1 + 0x94) = 1;
  if ((uVar7 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  FUN_1004c0790(param_1,0x200,0x23f);
  FUN_1004c0790(param_1,0x8040,0x8044);
  FUN_1004c6010();
  FUN_1004c66a0(param_1 + 0x48);
  DAT_1011bc074 = FUN_1007da300("tools.prl_fs.cachelevel",0);
  if ((DAT_1011bc074 != 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","SharedFoldersHost",1,"prl_fs cache level overridden by %u",DAT_1011bc074);
  }
  iVar2 = FUN_1007da300("tools.prl_fs.dirnotify.enable",1);
  DAT_10111cc70 = (uint)(iVar2 != 0);
  if ((iVar2 == 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","SharedFoldersHost",1,
                  "directory change notifications disabled in prl_fs by the system flag");
  }
  FUN_1004d4870(&DAT_1011cc818,param_1);
  return;
}

