
undefined8 FUN_100c86d50(undefined8 param_1,long *param_2,int *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long local_30;
  
  uVar3 = 0;
  if (param_4 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_4;
    uVar3 = 0;
    uVar2 = FUN_100c80780(*puVar1,0,puVar1[1]);
    local_30 = FUN_100bf3540(uVar2,"bio_ndef.c",0xa4);
    if (local_30 != 0) {
      puVar1[5] = local_30;
      *param_2 = local_30;
      FUN_100c80780(*puVar1,&local_30,puVar1[1]);
      if (*(long *)puVar1[4] != 0) {
        *param_3 = (int)*(long *)puVar1[4] - (int)*param_2;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

