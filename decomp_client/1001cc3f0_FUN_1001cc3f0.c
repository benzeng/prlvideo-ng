
void FUN_1001cc3f0(QObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021eeef0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("localhost",9);
  local_40 = pQVar3;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("127.0.0.1",9);
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = PTR_shared_null_1021e1288;
  local_58 = PTR_shared_null_1021e1288;
  local_60 = PTR_shared_null_1021e1288;
  local_48 = pQVar4;
  FUN_1001cf340(param_1 + 0x18,&local_40,&local_48,&local_50,&local_58,&local_60);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 == 0) {
LAB_1001cc49f:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1001cc49f;
    }
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 == 0) {
LAB_1001cc4ce:
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
      else {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1001cc4ce;
      }
      if (*(int *)puVar1 != -1) {
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          local_31 = *(int *)puVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001cc513;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
      }
    }
  }
LAB_1001cc513:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cc540;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1001cc540:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001cc56d;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1001cc56d:
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x78] = (QObject)0x0;
  uVar2 = FUN_1001cc6e0();
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}

