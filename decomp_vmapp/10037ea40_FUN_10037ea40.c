
undefined8 FUN_10037ea40(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x82c8);
  if (iVar1 == 3) {
    (*DAT_1011c5c78)(0xb44);
    puVar2 = &DAT_1011c5b08;
    uVar3 = 0x405;
  }
  else if (iVar1 == 2) {
    (*DAT_1011c5c78)(0xb44);
    puVar2 = &DAT_1011c5b08;
    uVar3 = 0x404;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    puVar2 = &DAT_1011c5bc0;
    uVar3 = 0xb44;
  }
  (*(code *)*puVar2)(uVar3);
  return 0;
}

