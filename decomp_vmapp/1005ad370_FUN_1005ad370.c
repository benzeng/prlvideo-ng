
void FUN_1005ad370(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 != (code *)0x0) {
    QMutex::lock();
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        lVar1 = *(long *)(*(long *)(param_1 + 0x10) + uVar3 * 0x40);
        if (lVar1 == 0) {
          uVar3 = (ulong)((int)uVar3 + 1);
        }
        else {
          lVar4 = uVar3 * *(uint *)(param_1 + 0x1c);
          uVar3 = (ulong)((int)uVar3 + 1);
          (*param_2)(param_3,lVar4 * 0x1000,*(uint *)(param_1 + 0x1c) * uVar3 * 0x1000,lVar1,0x1000)
          ;
          uVar2 = *(uint *)(param_1 + 0x18);
        }
      } while ((uint)uVar3 < uVar2);
    }
    QMutex::unlock();
    return;
  }
  return;
}

