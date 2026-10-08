
undefined4 FUN_100246010(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_10061b500(uVar3,2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = 0x80011000;
  }
  return uVar2;
}

