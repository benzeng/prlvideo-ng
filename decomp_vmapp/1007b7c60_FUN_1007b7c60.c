
ulong FUN_1007b7c60(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar2;
  uVar4 = *(ulong *)(param_1 + 0xc);
  *(undefined8 *)((long)param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(ulong *)((long)param_2 + 0xc) = uVar4;
  lVar3 = *(long *)(param_1 + 0x20);
  param_2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar4 = (ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return uVar4;
}

