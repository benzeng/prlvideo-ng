
ulong FUN_100c59b30(long param_1,int param_2,undefined4 param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = *(ulong **)(param_1 + 0x30);
  uVar2 = 0;
  if (0x71 < param_2) {
    if (param_2 == 0x72) {
      if (((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
         (puVar1 != (ulong *)0x0)) {
        if ((*(byte *)(param_1 + 0x21) & 2) != 0) {
          puVar1[1] = 0;
        }
        FUN_100c57f20(puVar1);
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x1c) = param_3;
      *(ulong **)(param_1 + 0x30) = param_4;
    }
    else if (param_2 == 0x73) {
      if (param_4 == (ulong *)0x0) {
        return 1;
      }
      *param_4 = (ulong)puVar1;
    }
    else {
      if (param_2 != 0x82) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x28) = param_3;
    }
    goto switchD_100c59b68_caseD_b;
  }
  switch(param_2) {
  case 1:
    if (puVar1[1] == 0) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0x21) & 2) == 0) {
      ___bzero();
      *puVar1 = 0;
    }
    else {
      puVar1[1] = puVar1[1] + (*puVar1 - puVar1[2]);
      *puVar1 = puVar1[2];
    }
  case 0xb:
  case 0xc:
switchD_100c59b68_caseD_b:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = (ulong)(*puVar1 == 0);
    break;
  case 3:
    uVar2 = *puVar1;
    if (param_4 != (ulong *)0x0) {
      *param_4 = puVar1[1];
    }
    break;
  case 8:
    uVar2 = (ulong)*(int *)(param_1 + 0x1c);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    goto switchD_100c59b68_caseD_b;
  case 10:
    uVar2 = *puVar1;
  }
  return uVar2;
}

