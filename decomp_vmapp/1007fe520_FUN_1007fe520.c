
undefined8 FUN_1007fe520(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_1008b7420();
    uVar4 = 0xffffffff;
    piVar3 = (int *)0x0;
    if (piVar2 == (int *)0x0) goto LAB_1007fe5a0;
  }
  iVar1 = *piVar2;
  uVar4 = 0;
  if (iVar1 != 6) {
    if (iVar1 == 0x198) {
      uVar4 = 5;
    }
    else if (iVar1 == 0x74) {
      uVar4 = 2;
    }
    else {
      uVar4 = 6;
      if (((iVar1 != 0x32c) && (iVar1 != 0x352)) &&
         ((iVar1 == 0x32b || (uVar4 = 0xffffffff, iVar1 == 0x353)))) {
        uVar4 = 7;
      }
    }
  }
  piVar3 = piVar2;
  if (param_2 != (int *)0x0) {
    return uVar4;
  }
LAB_1007fe5a0:
  FUN_1008924e0(piVar3);
  return uVar4;
}

