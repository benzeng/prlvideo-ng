
undefined8 FUN_1008c9a10(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    lVar1 = FUN_1008c23d0(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_1008c40d0(param_2);
  }
  if (lVar1 == 0) {
    FUN_100887ce0(0x22,0x9c,0x96,"v3_crld.c",0x66);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1008c5fb0(0,param_1,lVar1);
    if (*param_2 == '@') {
      FUN_1008c2440(param_1,lVar1);
    }
    else {
      FUN_100885590(lVar1,FUN_1008c3b40);
    }
  }
  return uVar2;
}

