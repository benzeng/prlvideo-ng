
undefined8 FUN_100c4d200(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x78) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c4d232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar2;
  }
  lVar3 = FUN_100c27a20();
  if (lVar3 == 0) {
    return 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_100c26720();
    uVar2 = 0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_100c4d339;
  }
  do {
    iVar1 = FUN_100c2ad60(puVar4,*(undefined8 *)(param_1 + 0x20));
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_100c4d32a;
  } while (*(int *)(puVar4 + 1) == 0);
  lVar5 = *(long *)(param_1 + 0x30);
  if ((lVar5 != 0) || (lVar5 = FUN_100c26720(), lVar5 != 0)) {
    puVar6 = puVar4;
    if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
      FUN_100c26700(&local_48);
      puVar6 = &local_48;
      local_48 = *puVar4;
      local_40 = *(undefined4 *)(puVar4 + 1);
      local_3c = *(undefined4 *)((long)puVar4 + 0xc);
      local_38 = *(undefined4 *)(puVar4 + 2);
      local_34 = *(uint *)((long)puVar4 + 0x14) & 0xfffffff8 | local_34 & 1 | 6;
    }
    iVar1 = FUN_100c239a0(lVar5,*(undefined8 *)(param_1 + 0x28),puVar6,
                          *(undefined8 *)(param_1 + 0x18),lVar3);
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        FUN_100c266b0(lVar5);
        uVar2 = 0;
      }
    }
    else {
      *(undefined8 **)(param_1 + 0x38) = puVar4;
      *(long *)(param_1 + 0x30) = lVar5;
      uVar2 = 1;
    }
  }
LAB_100c4d32a:
  if (*(long *)(param_1 + 0x38) == 0) {
    FUN_100c266b0(puVar4);
  }
LAB_100c4d339:
  FUN_100c27ab0(lVar3);
  return uVar2;
}

