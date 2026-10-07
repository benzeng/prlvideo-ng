
void FUN_100051620(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  FUN_1004c0650();
  *param_1 = &PTR_FUN_100ba84c8;
  QMutex::QMutex((QMutex *)(param_1 + 5),0);
  puVar2 = PTR_shared_null_100ba20d0;
  param_1[8] = PTR_shared_null_100ba20d0;
  puVar3 = PTR_shared_null_100ba2188;
  param_1[10] = PTR_shared_null_100ba2188;
  puVar6 = operator_new(0xa8);
  ___bzero(puVar6,0xa8);
  FUN_100041050(puVar6);
  *puVar6 = &PTR_FUN_100bef3d8;
  param_1[0xb] = puVar6;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  param_1[0xe] = puVar2;
  param_1[0xf] = puVar3;
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_1004c0790(param_1,0x8304,0x8304);
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getDragAndDrop();
    cVar4 = DragAndDrop::isEnabled();
    if (cVar4 == '\0') {
      bVar5 = 0;
    }
    else {
      bVar5 = CVmTools::isIsolatedVm();
      bVar5 = bVar5 ^ 1;
    }
    *(byte *)((long)param_1 + 0x69) = bVar5;
    lVar1 = param_1[0xb];
    uVar7 = lVar1 + 0x80;
    if ((uVar7 & 1) == 0) {
      QReadWriteLock::lockForWrite();
      uVar7 = uVar7 | 1;
    }
    *(undefined1 *)(lVar1 + 0x94) = 1;
    if ((uVar7 & 1) != 0) {
      QReadWriteLock::unlock();
    }
  }
  return;
}

