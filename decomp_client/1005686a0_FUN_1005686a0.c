
undefined1 FUN_1005686a0(QModelIndex *param_1,QModelIndex *param_2,bool *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  undefined1 uVar5;
  
  if (*(int *)param_2 < 0) {
    uVar5 = 0;
  }
  else if (*(int *)(param_2 + 4) < 0) {
    uVar5 = 0;
  }
  else if (*(long *)(param_2 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (((param_4 == 10) && (param_1[0x18] == (QModelIndex)0x0)) && (*(int *)(param_2 + 4) == 0)) {
      iVar3 = QVariant::toInt(param_3);
      iVar1 = *(int *)param_2;
      puVar4 = *(uint **)(param_1 + 0x10);
      if (1 < *puVar4) {
        FUN_10056ea70(param_1 + 0x10,puVar4[1]);
        puVar4 = *(uint **)(param_1 + 0x10);
      }
      *(bool *)*(undefined8 *)(puVar4 + ((long)(int)puVar4[2] + (long)iVar1) * 2 + 4) = iVar3 == 2;
      puVar2 = PTR_shared_null_1021e1288;
      QAbstractItemModel::dataChanged(param_1,param_2,(QVector *)param_2);
      uVar5 = 1;
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 != 0) {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (*(int *)puVar2 != 0) {
            return 1;
          }
        }
        QArrayData::deallocate((QArrayData *)puVar2,4,8);
      }
    }
  }
  return uVar5;
}

