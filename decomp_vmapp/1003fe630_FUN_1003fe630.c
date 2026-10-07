
void FUN_1003fe630(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = 0xf0000002;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  uVar3 = *(uint *)(param_2 + 0x20);
  do {
    LOCK();
    uVar1 = *(uint *)(param_2 + 0x20);
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *(uint *)(param_2 + 0x20) = uVar3 & 0xfffffffa;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar4);
                    /* WARNING: Could not recover jumptable at 0x0001003fe666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x838) + 0x18))(*(long **)(param_1 + 0x838),4);
  return;
}

