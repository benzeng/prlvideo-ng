
undefined8 FUN_00410930(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  
  while( true ) {
    uVar2 = *param_2;
    if (uVar2 < 0x30) {
      *param_2 = uVar2 + 8;
      pcVar4 = *(char **)((ulong)uVar2 + *(long *)(param_2 + 4));
    }
    else {
      puVar3 = *(undefined8 **)(param_2 + 2);
      *(undefined8 **)(param_2 + 2) = puVar3 + 1;
      pcVar4 = (char *)*puVar3;
    }
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
      return param_1;
    }
    uVar2 = *param_2;
    if (uVar2 < 0x30) {
      piVar6 = (int *)((ulong)uVar2 + *(long *)(param_2 + 4));
      *param_2 = uVar2 + 8;
    }
    else {
      piVar6 = *(int **)(param_2 + 2);
      *(int **)(param_2 + 2) = piVar6 + 2;
    }
    iVar1 = *piVar6;
    uVar5 = FUN_004108e0();
    if (iVar1 < 0) break;
    param_1 = FUN_004104b0(uVar5,iVar1);
  }
  return uVar5;
}

