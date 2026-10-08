
void FUN_1000e9820(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  QArrayData *local_50;
  undefined1 local_48 [39];
  undefined1 local_21;
  
  iVar1 = FUN_100a67f70(local_48,0);
  if (iVar1 == 0) {
    QString::toUtf8();
    iVar1 = FUN_100a68060(local_48,local_50 + *(long *)(local_50 + 0x10),
                          *(undefined4 *)(local_50 + 4),0x200b);
    if (iVar1 == 0) {
      uVar3 = FUN_100a67f30(local_48);
      uVar2 = FUN_100a67f40(local_48);
      FUN_100a68060(param_1,uVar3,uVar2,0x200a);
    }
    FUN_100a681d0(local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  return;
}

