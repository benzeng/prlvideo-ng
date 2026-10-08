
undefined8 FUN_100552110(long param_1,int *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((-1 < *param_2) && (-1 < param_2[1])) && (*(long *)(param_2 + 4) != 0)) {
    lVar1 = FUN_100552190(param_1,param_2);
    uVar3 = 0x21;
    if (((param_2[1] == 0) && (uVar3 = 1, lVar1 != 0)) &&
       ((*(char *)(param_1 + 0x28) == '\0' &&
        ((uVar2 = FUN_100714bb0(lVar1), (uVar2 & 8) == 0 && (uVar3 = 0x31, param_2[1] != 0)))))) {
      uVar3 = 0x21;
    }
  }
  return uVar3;
}

