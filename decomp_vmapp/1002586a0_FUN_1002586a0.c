
void FUN_1002586a0(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = FUN_1007d74c0(DAT_1011c37b8[0xe] + 0x10,param_1,param_2);
  if (uVar2 < param_2) {
    LOCK();
    *(int *)(DAT_1011c37b8[0xe] + 4) = *(int *)(DAT_1011c37b8[0xe] + 4) + 1;
    UNLOCK();
  }
  lVar1 = DAT_1011c37b8[0xe];
  if (*(int *)(lVar1 + 0x28) -
      (*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10) & *(uint *)(lVar1 + 0x24)) < 0x10000) {
    (**(code **)(*DAT_1011c37b8 + 0x10))();
    if (*(int *)(DAT_1011c37b8[0xe] + 8) != 0) {
      FUN_100258820();
      return;
    }
  }
  return;
}

