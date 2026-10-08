
void FUN_10038ac80(QModelIndex *param_1,QString *param_2,QIcon *param_3)

{
  undefined *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  QModelIndex local_50 [31];
  undefined1 local_31;
  
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
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (uint *)*puVar4;
        if (1 < *puVar3) {
          FUN_10038b820(puVar4,puVar3[1]);
          puVar3 = (uint *)*puVar4;
        }
        QIcon::operator=((QIcon *)(*(long *)(puVar3 + ((long)(int)puVar3[2] + uVar5) * 2 + 4) + 0x18
                                  ),param_3);
        local_68 = 0xffffffff;
        local_64 = 0xffffffff;
        local_58 = 0;
        local_60 = 0;
        (**(code **)(*(long *)param_1 + 0x60))(local_50,param_1,uVar5 & 0xffffffff,0,&local_68);
        puVar1 = PTR_shared_null_1021e1288;
        QAbstractItemModel::dataChanged(param_1,local_50,(QVector *)local_50);
        if (*(int *)puVar1 != -1) {
          if (*(int *)puVar1 != 0) {
            LOCK();
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if (*(int *)puVar1 != 0) {
              return;
            }
            local_31 = 0;
          }
          QArrayData::deallocate((QArrayData *)puVar1,4,8);
          return;
        }
        return;
      }
      uVar5 = uVar5 + 1;
      puVar4 = *(undefined8 **)(param_1 + 0x10);
      puVar3 = (uint *)*puVar4;
    } while ((long)uVar5 < (long)(int)puVar3[3] - (long)(int)puVar3[2]);
  }
  return;
}

