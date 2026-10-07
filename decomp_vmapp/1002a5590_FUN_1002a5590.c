
void FUN_1002a5590(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar2 = (uint)((ulong)*param_2 >> 0x20) ^ (uint)*param_2;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar4 = (ulong)((uVar2 >> 8 ^ uVar2) & 0xff);
  QMutex::lock();
  puVar1 = (undefined8 *)param_1[uVar4 + 8];
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = param_1 + uVar4 + 8;
    do {
      if (puVar1 == param_2) {
        *plVar3 = param_2[4];
        QMutex::unlock();
        FUN_1002a69c0(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001002a5641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x18))(param_1,1);
        return;
      }
      plVar3 = puVar1 + 4;
      puVar1 = (undefined8 *)*plVar3;
    } while (puVar1 != (undefined8 *)0x0);
  }
  QMutex::unlock();
  return;
}

