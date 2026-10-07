
void FUN_100371b50(long param_1,undefined4 param_2,int param_3,void *param_4,long param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  void *pvVar5;
  
  pvVar5 = param_4;
  if (*(long *)(param_5 + 0x38) != *(long *)(param_5 + 0x40)) {
    pvVar5 = (void *)(param_1 + 0x12cc);
    _memcpy(pvVar5,param_4,(ulong)(uint)(param_3 << 4));
    puVar2 = *(uint **)(param_5 + 0x40);
    for (puVar4 = *(uint **)(param_5 + 0x38); puVar4 != puVar2; puVar4 = puVar4 + 5) {
      uVar1 = *puVar4;
      uVar3 = *(undefined8 *)(puVar4 + 1);
      *(undefined8 *)(param_1 + 0x12d4 + (ulong)uVar1 * 0x10) = *(undefined8 *)(puVar4 + 3);
      *(undefined8 *)((long)pvVar5 + (ulong)uVar1 * 0x10) = uVar3;
    }
  }
  (*DAT_1011c5708)(0x8a11,*(undefined4 *)(param_1 + 0x13cc));
  (*DAT_1011c57d8)(0x8a11,(ulong)(uint)(param_3 << 4),pvVar5,0x88e0);
                    /* WARNING: Could not recover jumptable at 0x000100371c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c74b0)(0x8a11,param_2,*(undefined4 *)(param_1 + 0x13cc));
  return;
}

