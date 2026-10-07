
void FUN_100401e30(long param_1)

{
  ulong uVar1;
  time_t tVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x16c) & 8) != 0) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x68) + 0xf0);
    tVar2 = _time((time_t *)0x0);
    lVar3 = tVar2 - *(long *)(param_1 + 0xd8);
    if (*(long *)(param_1 + 0xd8) == 0) {
      *(long *)(param_1 + 0xd8) = lVar3;
      lVar3 = 0;
    }
    if ((*(ulong *)(param_1 + 0xd0) <= uVar1) || (*(uint *)(param_1 + 200) <= (uint)lVar3)) {
      FUN_1008e3970("","HddUtils",0,"hdd: BRC disabled [%llu, %lu]",uVar1);
      *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) & 0xf7;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x54);
      FUN_1008e3970("","HddUtils",0,"hdd: cmode %d");
                    /* WARNING: Could not recover jumptable at 0x000100401ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x38) + 200))
                (*(long **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x50));
      return;
    }
  }
  return;
}

