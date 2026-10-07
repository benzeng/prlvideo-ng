
void FUN_1002ef490(code *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar1 = (uint *)FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x25b,0);
  if (puVar1 != (uint *)0x0) {
    QMutex::lock();
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      puVar4 = puVar1 + 2;
      uVar3 = 0;
      do {
        if ((*(long **)puVar4 != (long *)0x0) && ((*(byte *)(**(long **)puVar4 + 0x10) & 1) == 0)) {
          (*param_1)();
          uVar2 = *puVar1;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 6;
      } while (uVar3 < uVar2);
    }
    QMutex::unlock();
    return;
  }
  return;
}

