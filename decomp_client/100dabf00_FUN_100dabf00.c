
undefined8 FUN_100dabf00(long *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffff;
  if (param_1 != (long *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      do {
        iVar1 = (*param_2)(*puVar2,param_3);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        puVar2 = (undefined8 *)puVar2[1];
      } while (puVar2 != (undefined8 *)0x0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

