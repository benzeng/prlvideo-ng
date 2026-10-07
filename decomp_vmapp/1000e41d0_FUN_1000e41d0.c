
void FUN_1000e41d0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (((*(uint *)(param_1 + 0x480) & 0xffffff00) == 0x700) ||
     ((*(uint *)(param_1 + 0xa1c) & 0x10) != 0 || *(int *)(param_1 + 0xa20) != 0)) {
    QTime::start();
    FUN_1000e4250();
    uVar1 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] %s creation time is %u msecs","NVRAM",uVar1,uVar2);
  }
  return;
}

