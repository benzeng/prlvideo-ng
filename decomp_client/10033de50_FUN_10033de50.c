
void FUN_10033de50(long param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar1 = FUN_10031bab0(uVar3);
  if (cVar1 != '\0') {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar2 = FUN_100319ae0(uVar3);
    if (iVar2 == 3) {
      if ((param_2 == 0x3000000b) && (param_3 == 0x30000004)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        goto code_r0x00010033dede;
      }
      if ((param_2 == 0x30000004) && (param_3 == 0x3000000b)) goto code_r0x00010033dede;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
code_r0x00010033dede:
  switch(param_2) {
  case 0x30000001:
    uVar3 = FUN_1001d50a0();
    cVar1 = FUN_1001d5120(uVar3);
    if (cVar1 == '\0') {
      FUN_10033f1e0(param_1,1);
      return;
    }
    break;
  case 0x30000003:
    FUN_10033e090(param_1);
    return;
  case 0x30000004:
    FUN_10033ea40(param_1);
    return;
  case 0x30000005:
    FUN_10033dfe0(param_1);
    return;
  case 0x30000006:
    FUN_10033e1a0(param_1);
    return;
  case 0x30000007:
    FUN_10033e650(param_1);
    return;
  case 0x30000009:
    FUN_10033e5c0(param_1);
    return;
  case 0x3000000b:
    FUN_10033e340(param_1);
    return;
  }
  return;
}

