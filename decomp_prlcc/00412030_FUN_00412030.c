
undefined8 FUN_00412030(long param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar1 != (undefined8 *)0x0) && ((char *)*puVar1 != (char *)0x0)) {
    iVar2 = strcmp(param_2,(char *)*puVar1);
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x50) = puVar1[8];
      return 0;
    }
  }
  uVar3 = FUN_00411f20(param_1,param_3,"unexpected closing tag </%s>",param_2);
  return uVar3;
}

