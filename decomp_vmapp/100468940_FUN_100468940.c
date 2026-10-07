
undefined1 FUN_100468940(long param_1,undefined8 param_2,QString *param_3)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 local_88 [8];
  void *local_80;
  void *local_78;
  string local_60 [47];
  undefined1 local_31;
  
  iVar3 = FUN_10046a270(param_2);
  FUN_10046a170(local_88,param_2,1);
  QMutex::lock();
  if (*(char *)(param_1 + 0x58) == '\0') {
    QMutex::unlock();
    if (iVar3 == 2) {
      pQVar1 = (QArrayData *)param_3->field0_0x0;
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      FUN_100468be0();
      if (*(int *)pQVar1 == -1) {
        uVar4 = 0;
      }
      else {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_31 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_31) {
            uVar4 = 0;
            goto LAB_100468a6a;
          }
        }
        QArrayData::deallocate(pQVar1,2,8);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    if (iVar3 == 2) {
      FUN_10000c490(param_1 + 0x60,param_3);
    }
    QMutex::unlock();
    if (iVar3 == 6) {
      QMutex::lock();
      QString::operator=((QString *)(param_1 + 0x70),param_3);
      QMutex::unlock();
    }
    uVar4 = 1;
    FUN_100468da0(param_1,local_88);
  }
LAB_100468a6a:
  puVar2 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100468aa0;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
  }
LAB_100468aa0:
  std::string::~string(local_60);
  if (local_80 != (void *)0x0) {
    if (local_78 != local_80) {
      local_78 = local_80;
    }
    operator_delete(local_80);
  }
  return uVar4;
}

