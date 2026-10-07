
undefined1 FUN_1000388c0(undefined8 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_4c;
  undefined1 local_48 [32];
  QArrayData *local_28;
  undefined1 local_19;
  
  QString::toUtf8();
  local_4c = 1;
  iVar1 = FUN_10078cca0(local_48,0x50);
  if (iVar1 == 0) {
    iVar1 = FUN_10078cd90(local_48,&local_4c,4,0x200d);
    if (iVar1 == 0) {
      iVar1 = FUN_10078cd90(local_48,local_28 + *(long *)(local_28 + 0x10),
                            *(undefined4 *)(local_28 + 4),0x200a);
      if (iVar1 == 0) {
        uVar2 = 1;
        FUN_100038080(param_1,local_48,0);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
    FUN_10078cf00(local_48);
  }
  else {
    uVar2 = 0;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar2;
}

