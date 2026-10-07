
undefined4 FUN_100047930(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*param_2 + *(long *)(*param_2 + 0x10));
  uVar3 = 0x9043;
  if (iVar1 != 2) {
    uVar3 = 0;
  }
  uVar2 = 0x9041;
  if (iVar1 != 1) {
    uVar2 = uVar3;
  }
  return uVar2;
}

