
int FUN_100c96de0(undefined8 *param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  lVar4 = FUN_100bf6fe0(param_2);
  iVar6 = -2;
  if ((lVar4 != 0) && (iVar6 = -1, param_1 != (undefined8 *)0x0)) {
    iVar6 = param_3;
    if (param_3 < -1) {
      iVar6 = -1;
    }
    uVar1 = *param_1;
    iVar2 = FUN_100c60800(uVar1);
    do {
      iVar6 = iVar6 + 1;
      if (iVar2 <= iVar6) {
        return -1;
      }
      puVar5 = (undefined8 *)FUN_100c60820(uVar1,iVar6);
      iVar3 = FUN_100bf8810(*puVar5,lVar4);
    } while (iVar3 != 0);
  }
  return iVar6;
}

