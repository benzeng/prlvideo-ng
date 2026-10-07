
void FUN_1004a68b0(long param_1,char *param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_68 [2];
  QArrayData *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  QArrayData *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  QMutex::lock();
  bVar2 = true;
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 == 0) {
    local_50[0] = 2;
    QByteArray::QByteArray((QByteArray *)&local_48,param_2,param_3);
    local_40 = param_4;
    FUN_1004a7e90(param_1 + 0x58,local_50);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a6a5d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
    goto LAB_1004a6a5d;
  }
  puVar3 = (undefined4 *)FUN_1002a6010(lVar4);
  *puVar3 = 0x20000;
  puVar3[1] = 2;
  puVar3[2] = param_4;
  puVar3[3] = param_3 & 0xffffff;
  lVar4 = FUN_1002a6120(lVar4,0,1);
  if (*(uint *)(lVar4 + 8) < param_3) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    local_68[0] = 2;
    QByteArray::QByteArray((QByteArray *)&local_60,param_2,param_3);
    local_58 = param_4;
    FUN_1004a7e90(param_1 + 0x58,local_68);
    uVar5 = 0xf0000009;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004a6a28;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
  else {
    uVar5 = 0;
    FUN_1002a5a50(lVar4,0,param_2,param_3);
    *(uint *)(lVar4 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
LAB_1004a6a28:
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  bVar2 = false;
  QMutex::unlock();
  FUN_1004c07d0(param_1 + 0x10,uVar1,uVar5);
LAB_1004a6a5d:
  if (bVar2) {
    QMutex::unlock();
  }
  return;
}

