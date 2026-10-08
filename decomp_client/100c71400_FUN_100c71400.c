
undefined4 * FUN_100c71400(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0xd0,"pmeth_lib.c",0xc4);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    ___bzero(puVar1,0xd0);
    *puVar1 = param_1;
    puVar1[1] = param_2 | 1;
    ___bzero(puVar1 + 2,200);
    puVar2 = puVar1;
  }
  return puVar2;
}

