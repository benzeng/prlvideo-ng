
void FUN_100104ee0(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar3 = *(uint **)(param_1 + 0x20);
  if (1 < *puVar3) {
    FUN_100105f60(puVar1,puVar3[1]);
    puVar3 = (uint *)*puVar1;
  }
  FUN_100104850(&local_30,*(undefined8 *)(puVar3 + (long)(int)puVar3[2] * 2 + 4));
  QString::toUtf8();
  FUN_1008e3970("","vm",0,"Guest command %s timout",local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100104f82;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100104f82:
  FUN_100105390(puVar1);
  FUN_100104b30(param_1);
  uVar2 = FUN_1001040f0(param_1);
  uVar4 = FUN_1007dd120(uVar2);
  FUN_1008e3970("","vm",0,"vm problem report data collection completed with result %s",uVar4);
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QTimer::stop();
  }
  QObject::deleteLater();
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

