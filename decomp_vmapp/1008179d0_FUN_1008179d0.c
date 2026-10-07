
undefined8 FUN_1008179d0(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = FUN_1007fe520(0);
  if (iVar2 < 0) {
    FUN_100887ce0(0x14,0xc1,0xf7,"ssl_rsa.c",0xb4);
    return 0;
  }
  lVar3 = (long)iVar2;
  puVar1 = param_1 + lVar3 * 3 + 0xc;
  if (param_1[lVar3 * 3 + 0xc] != 0) {
    lVar4 = FUN_1008b7420();
    if (lVar4 == 0) {
      FUN_100887ce0(0x14,0xc1,0x41,"ssl_rsa.c",0xbc);
      FUN_1008924e0(0);
      return 0;
    }
    FUN_100891de0(lVar4,param_2);
    FUN_1008924e0(lVar4);
    FUN_100888070();
    if (((*param_2 != 6) || (uVar5 = FUN_100870fb0(*(undefined8 *)(param_2 + 8)), (uVar5 & 1) == 0))
       && (iVar2 = FUN_1008b7460(*puVar1,param_2), iVar2 == 0)) {
      FUN_1008a17f0(*puVar1);
      *puVar1 = 0;
      return 0;
    }
  }
  if (param_1[lVar3 * 3 + 0xd] != 0) {
    FUN_1008924e0();
  }
  FUN_10081d580(param_2 + 2,1,10,"ssl_rsa.c",0xda);
  param_1[lVar3 * 3 + 0xd] = param_2;
  *param_1 = puVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  return 1;
}

