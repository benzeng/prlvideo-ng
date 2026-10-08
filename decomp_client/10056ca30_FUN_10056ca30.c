
void FUN_10056ca30(long param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10056ad10(param_1);
      return;
    case 1:
      FUN_10056b4a0(param_1);
      return;
    case 2:
      FUN_10056b6b0(param_1);
      return;
    case 4:
      FUN_10056c370(param_1);
      return;
    case 5:
      FUN_10056c540(param_1);
      return;
    case 6:
      uVar2 = 0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x50);
      }
      uVar1 = FUN_1005a5f40(uVar2);
      QAbstractItemModel::beginResetModel();
      *(undefined1 *)(param_1 + 0x38) = uVar1;
      QAbstractItemModel::endResetModel();
    case 3:
      FUN_10056aa80(param_1);
      return;
    case 7:
      FUN_10056c040(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}

