
void FUN_1006f3420(QObject *param_1,undefined8 param_2,undefined8 *param_3,QObject *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined1 local_22;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f5980;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar2 = PTR_shared_null_1021e1288;
  local_30 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1 + 0x48,&local_30);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_22 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return;
}

