
int FUN_100595ea0(long param_1)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (int)*(undefined8 *)(param_1 + 0x60) - 1;
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                               ((ulong)uVar3 + *(long *)(param_1 + 0x58) >> 9) * 8) +
                     ((ulong)((int)*(long *)(param_1 + 0x58) + uVar3) & 0x1ff) * 8);
  if (*(int *)(param_1 + 0x55c) != 0) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == m_MoveReqCount",
                  "Storage.cpp",0x1170,"InitiateBlocksMove");
  }
  QMutex::lock();
  while ((cVar2 = (**(code **)(*plVar1 + 0x100))(plVar1), cVar2 != '\0' &&
         (*(uint *)(param_1 + 0x55c) < *(uint *)(param_1 + 0x558)))) {
    iVar4 = FUN_100595fd0(param_1,param_1 + 0x158 + (ulong)*(uint *)(param_1 + 0x55c) * 0x40);
    if (iVar4 < 0) {
      FUN_100596660(param_1);
      QMutex::unlock();
      *(undefined4 *)(param_1 + 0x55c) = 0;
      return iVar4;
    }
    *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + 1;
  }
  QMutex::unlock();
  FUN_10056d000(*(undefined8 *)(param_1 + 0x70),param_1 + 0x560);
  return 0;
}

