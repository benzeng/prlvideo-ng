
undefined1 FUN_100561aa0(QModelIndex *param_1,QModelIndex *param_2,bool *param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(int *)param_2 < 0) {
    uVar6 = 0;
  }
  else if (*(int *)(param_2 + 4) < 0) {
    uVar6 = 0;
  }
  else if (*(long *)(param_2 + 0x10) == 0) {
    uVar6 = 0;
  }
  else if (*(int *)(param_2 + 4) == 0) {
    if (param_4 == 10) {
      local_38 = *(undefined4 *)(param_2 + 8);
      uVar5 = FUN_100565d60(param_1 + 0x10,&local_38);
      uVar3 = FUN_100708300(uVar5);
      iVar4 = QVariant::toInt(param_3);
      uVar1 = uVar3 | 2;
      if (iVar4 != 2) {
        uVar1 = uVar3 & 0xfffffffd;
      }
      FUN_100708310(uVar5,uVar1);
      puVar2 = PTR_shared_null_1021e1288;
      QAbstractItemModel::dataChanged(param_1,param_2,(QVector *)param_2);
      uVar6 = 1;
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 != 0) {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (*(int *)puVar2 != 0) {
            return 1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)puVar2,4,8);
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
    FUN_100df99c0("","prl_client_app",0,"setData: invalid edit column value %d");
  }
  return uVar6;
}

