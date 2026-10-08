
void FUN_10038aad0(QModelIndex *param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  QVector local_78 [24];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  QModelIndex local_48 [31];
  undefined1 local_29;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (uint *)*puVar4;
  uVar5 = 0;
  if ((int)puVar3[2] < (int)puVar3[3]) {
    do {
      if (1 < *puVar3) {
        FUN_10038b820(puVar4,puVar3[1]);
        puVar3 = (uint *)*puVar4;
      }
      cVar2 = operator==(*(QString **)(puVar3 + ((long)(int)puVar3[2] + uVar5) * 2 + 4),param_2);
      if (cVar2 != '\0') {
        *(int *)(*(long *)(param_1 + 0x10) + 8) = (int)uVar5;
        local_60 = 0xffffffff;
        local_5c = 0xffffffff;
        local_50 = 0;
        local_58 = 0;
        (**(code **)(*(long *)param_1 + 0x60))(local_48,param_1,uVar5 & 0xffffffff,0,&local_60);
        local_90 = 0xffffffff;
        local_8c = 0xffffffff;
        local_80 = 0;
        local_88 = 0;
        (**(code **)(*(long *)param_1 + 0x60))(local_78,param_1,uVar5 & 0xffffffff,0,&local_90);
        puVar1 = PTR_shared_null_1021e1288;
        QAbstractItemModel::dataChanged(param_1,local_48,local_78);
        if (*(int *)puVar1 == -1) {
          return;
        }
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (*(int *)puVar1 != 0) {
            return;
          }
          local_29 = 0;
        }
        QArrayData::deallocate((QArrayData *)puVar1,4,8);
        return;
      }
      uVar5 = uVar5 + 1;
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      puVar3 = (uint *)*puVar4;
    } while ((long)uVar5 < (long)(int)puVar3[3] - (long)(int)puVar3[2]);
  }
  return;
}

