
ulong FUN_1008a4b40(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001008a4b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar1;
  }
  iVar4 = -1;
  if (*param_2 != '\x05') {
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 < 5) {
      if (iVar4 == -4) {
        puVar2 = (undefined4 *)FUN_10081ddd0(0x10,"tasn_new.c",0x156);
        if (puVar2 == (undefined4 *)0x0) {
          return 0;
        }
        *(undefined8 *)(puVar2 + 2) = 0;
        *puVar2 = 0xffffffff;
        goto LAB_1008a4c19;
      }
      if (iVar4 == 1) {
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x28);
        return 1;
      }
    }
    else {
      if (iVar4 == 5) {
        *param_1 = 1;
        return 1;
      }
      if (iVar4 == 6) {
        uVar3 = FUN_100821870(0);
        *param_1 = uVar3;
        return 1;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_1008afdf0(iVar4);
  if ((puVar2 != (undefined4 *)0x0) && (*param_2 == '\x05')) {
    *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) | 0x40;
  }
LAB_1008a4c19:
  *param_1 = puVar2;
  return (ulong)(puVar2 != (undefined4 *)0x0);
}

