
void FUN_1004a66e0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  bool bVar5;
  undefined4 local_50 [2];
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_3;
  *(undefined4 *)(param_1 + 0x68) = param_4;
  *(undefined4 *)(param_1 + 0x78) = param_5;
  *(undefined4 *)(param_1 + 0x7c) = param_5;
  *(undefined4 *)(param_1 + 0x80) = param_6;
  *(undefined4 *)(param_1 + 0x84) = param_7;
  QMutex::unlock();
  QMutex::lock();
  puVar2 = PTR_shared_null_100ba20d0;
  bVar5 = true;
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    local_50[0] = 4;
    local_48 = PTR_shared_null_100ba20d0;
    local_40 = 0;
    FUN_1004a7e90(param_1 + 0x58,local_50);
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a6828;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_1002a6010(lVar4);
    *puVar3 = 0x20000;
    puVar3[1] = 4;
    puVar3[2] = 0;
    puVar3[3] = 0;
    lVar4 = FUN_1002a6120(lVar4,0,1);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    QMutex::unlock();
    bVar5 = false;
    FUN_1004c07d0(param_1 + 0x10,uVar1,0);
  }
LAB_1004a6828:
  if (bVar5) {
    QMutex::unlock();
  }
  return;
}

