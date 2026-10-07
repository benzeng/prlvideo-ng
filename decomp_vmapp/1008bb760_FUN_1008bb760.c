
int FUN_1008bb760(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = -1;
  if (param_1 != (undefined8 *)0x0) {
    iVar5 = param_3;
    if (param_3 < -1) {
      iVar5 = -1;
    }
    uVar1 = *param_1;
    iVar2 = FUN_100885600(uVar1);
    do {
      iVar5 = iVar5 + 1;
      if (iVar2 <= iVar5) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_100885620(uVar1,iVar5);
      iVar3 = FUN_1008230a0(*puVar4,param_2);
    } while (iVar3 != 0);
  }
  return iVar5;
}

