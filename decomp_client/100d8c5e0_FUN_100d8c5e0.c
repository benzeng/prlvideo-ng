
undefined8 * FUN_100d8c5e0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_19;
  
  FUN_100d806d0(&local_28);
  iVar1 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1b = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1b) goto LAB_100d8c626;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d8c626:
  if (iVar1 == 0) {
    uVar3 = QString::fromAscii_helper("/Library/Parallels/Parallels Service.app/",0x29);
    *param_1 = uVar3;
  }
  else {
    FUN_100d806d0(param_1);
  }
  puVar2 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_19 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_19) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

