
void FUN_100517af0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 == 4) {
    QMutex::lock();
    lVar2 = *(long *)(param_1 + 0x68);
    lVar1 = *(long *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    if (lVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x38) = 1;
    }
    QMutex::unlock();
    if (lVar1 != 0) {
      local_38 = DAT_100b46408;
      local_40 = DAT_100b46400;
      lVar2 = FUN_1002a6120(lVar1,0,1);
      if (*(uint *)(lVar2 + 8) < 8) {
        uVar4 = 0xf0000009;
        FUN_1002a5a50(lVar2,0,(long)&local_40 + 4,4);
        uVar3 = 4;
      }
      else {
        uVar4 = 0;
        FUN_1002a5a50(lVar2,0,&local_40,8);
        uVar3 = local_40._4_4_;
      }
      *(undefined4 *)(lVar2 + 0x10) = uVar3;
      FUN_1004c07d0(param_1,lVar1,uVar4);
    }
  }
  else if (param_2 == 3) {
    QMutex::lock();
    lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x28);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x28) = 0;
    QMutex::unlock();
    if (lVar2 != 0) {
      FUN_1004c07d0(param_1,lVar2,0xf0000020);
    }
  }
  return;
}

