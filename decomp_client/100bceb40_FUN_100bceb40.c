
ulong FUN_100bceb40(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong *puVar1;
  int *piVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  piVar2 = ___error();
  *piVar2 = 0;
  pbVar4 = *(byte **)(param_1 + 0x80);
  if (((*(int *)(pbVar4 + 0x1dc) != 0) && (*(int *)(pbVar4 + 0x104) == 0)) &&
     (*(int *)(pbVar4 + 0x11c) == 0)) {
    uVar3 = FUN_100be45f0(param_1);
    if ((uVar3 & 0x3000) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0x3004;
      pbVar4 = *(byte **)(param_1 + 0x80);
      pbVar4[0x1dc] = 0;
      pbVar4[0x1dd] = 0;
      pbVar4[0x1de] = 0;
      pbVar4[0x1df] = 0;
      *(int *)(pbVar4 + 0x1e4) = *(int *)(pbVar4 + 0x1e4) + 1;
      *(int *)(pbVar4 + 0x1e0) = *(int *)(pbVar4 + 0x1e0) + 1;
    }
    else {
      pbVar4 = *(byte **)(param_1 + 0x80);
    }
  }
  if (((*pbVar4 & 4) != 0) &&
     (lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_1 + 0x20))) {
    if (*(int *)(pbVar4 + 8) == 0) {
      uVar3 = FUN_100bd10c0(param_1,0x17,param_2,param_3);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      *(int *)(*(long *)(param_1 + 0x80) + 8) = (int)uVar3;
      lVar5 = *(long *)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x28) = 2;
    uVar3 = FUN_100c58d60(lVar5,0xb,0,0);
    if (0 < (int)uVar3) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      FUN_100be6ca0(param_1);
      puVar1 = *(ulong **)(param_1 + 0x80);
      *puVar1 = *puVar1 & 0xfffffffffffffffb;
      uVar3 = (ulong)(uint)puVar1[1];
      *(undefined4 *)(puVar1 + 1) = 0;
    }
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100bcebe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x70))(param_1,0x17,param_2,param_3);
  return uVar3;
}

