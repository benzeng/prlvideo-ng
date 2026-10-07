
void FUN_100104520(long param_1,undefined4 param_2,int param_3,undefined8 param_4,QString *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  QString *pQVar6;
  undefined8 uVar7;
  QArrayData *local_60;
  undefined1 local_58 [16];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  FUN_1007d6a90(&local_40,uVar7);
  cVar2 = operator==(param_5,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100104598;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100104598:
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 0xc) == *(int *)(*(long *)(param_1 + 0x20) + 8)) {
    return;
  }
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QTimer::stop();
  }
  QMutex::lock();
  if (1 < param_3 - 3U) {
    QMutex::unlock();
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar5 = (uint *)*puVar1;
  if (1 < *puVar5) {
    FUN_100105f60(puVar1,puVar5[1]);
    puVar5 = (uint *)*puVar1;
  }
  FUN_100104850(&local_48,*(undefined8 *)(puVar5 + (long)(int)puVar5[2] * 2 + 4));
  pQVar6 = (QString *)FUN_100037140(param_1 + 0x28,&local_48);
  QString::append(pQVar6);
  iVar3 = 1;
  if (param_3 == 4) {
    uVar7 = FUN_1007dd120(param_2);
    FUN_1008e3970("","vm",0,"Guest command completed with result %s",uVar7);
    FUN_1001050a0(&local_60,puVar1);
    FUN_100013180(local_58);
    iVar3 = 2;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001046ae;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1001046ae:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001046de;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001046de:
  QMutex::unlock();
  if ((iVar3 == 2) && (iVar3 = FUN_100103800(param_1), iVar3 != -0x7fffffed)) {
    FUN_100104b30(param_1);
    uVar4 = FUN_1001040f0(param_1);
    uVar7 = FUN_1007dd120(uVar4);
    FUN_1008e3970("","vm",0,"vm problem report data collection completed with result %s",uVar7);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       ((*(int *)(*(long *)(param_1 + 0x38) + 4) != 0 && (*(long *)(param_1 + 0x40) != 0)))) {
      QTimer::stop();
    }
    QObject::deleteLater();
  }
  return;
}

