
void FUN_1000afab0(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  QDir local_50 [8];
  QDir local_48 [8];
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100188480(&local_38);
  uVar2 = FUN_10018f860(param_2);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = (**(code **)(*param_1 + 0x60))(param_1,&local_38,&local_40);
  if (iVar3 == 0) {
    FUN_1000afcc0();
    FUN_1000b7bd0(&local_38,&local_40,0);
  }
  iVar3 = (**(code **)(*param_1 + 0x68))(param_1,&local_38,&local_40);
  if (iVar3 == 0) {
    QDir::QDir(local_48,&local_40);
    cVar1 = QDir::exists();
    QDir::~QDir(local_48);
    if (cVar1 != '\0') {
      FUN_1000af8c0(param_1,&local_40,uVar2);
    }
  }
  iVar3 = FUN_1000af090();
  if (iVar3 == 0) {
    QDir::QDir(local_50,&local_40);
    cVar1 = QDir::exists();
    QDir::~QDir(local_50);
    if (cVar1 != '\0') {
      FUN_1000af8c0(param_1,&local_40,uVar2);
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000afbe0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000afbe0:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

