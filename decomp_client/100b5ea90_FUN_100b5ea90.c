
void FUN_100b5ea90(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined1 local_24 [4];
  
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x10);
  if ((*(int *)((long)plVar1 + 0x14) != 0) && (*(uint *)(plVar1 + 4) != 0)) {
    uVar3 = *(uint *)((long)plVar1 + 0x24) ^ param_2;
    plVar2 = *(long **)(plVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(plVar1 + 4)) * 8);
    if (plVar2 != plVar1) {
      do {
        if ((*(uint *)(plVar2 + 1) == uVar3) && (*(uint *)((long)plVar2 + 0xc) == param_2)) {
          if ((plVar2 != plVar1) && ((long *)plVar2[2] != (long *)0x0)) {
            (**(code **)(*(long *)plVar2[2] + 0x20))();
            FUN_100b5efb0(param_1 + 0x10,local_24);
          }
          break;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar1);
    }
  }
  QMutex::unlock();
  return;
}

