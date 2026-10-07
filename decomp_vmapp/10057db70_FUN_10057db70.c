
void FUN_10057db70(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x20) == 0) {
    if (((uVar1 & 0xfc) != 0) && (-1 < *(int *)(lVar2 + 0x28))) {
      *(uint *)(lVar2 + 0x28) = (~(uVar1 * 2) & 2) + 0x80021027;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 0x28) = 0;
  }
  FUN_10070aec0();
  QMutex::lock();
  if (*(int *)(lVar2 + 0x2c) != 0) {
    iVar3 = *(int *)(lVar2 + 0x2c) + -1;
    *(int *)(lVar2 + 0x2c) = iVar3;
    if (iVar3 == 0) {
      QWaitCondition::wakeOne();
    }
    QMutex::unlock();
    return;
  }
  FUN_1008e3970("","vdisk",0,"Error: dio count is zero!");
  QMutex::unlock();
  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",0x61b,
                "sync_complete_dio");
  return;
}

