
undefined8 FUN_100024b90(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_2 + 8) == 0x8501) {
    uVar5 = 0xf0000003;
    if (7 < *(ushort *)(param_2 + 0x14)) {
      piVar3 = (int *)FUN_1002a6010(param_2);
      iVar1 = *piVar3;
      *(int *)(param_1 + 0x9c) = iVar1;
      iVar2 = piVar3[1];
      *(int *)(param_1 + 0xa0) = iVar2;
      uVar5 = 0;
      if ((iVar2 != 0) && (iVar1 != 0)) {
        FUN_1000a1a10(DAT_1011c3698);
      }
    }
  }
  else {
    uVar5 = 0xf0000002;
    if (((*(int *)(param_2 + 8) == 0x8500) && (uVar5 = 0xf0000003, 7 < *(ushort *)(param_2 + 0x14)))
       && (uVar5 = 0, *(char *)(param_1 + 0x71) != '\0')) {
      puVar4 = (undefined4 *)FUN_1002a6010(param_2);
      FUN_1000a19d0(DAT_1011c3698,*puVar4,puVar4[1]);
    }
  }
  return uVar5;
}

