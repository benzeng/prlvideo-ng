
undefined8 *
FUN_100c98160(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((param_1 == (long *)0x0) || (puVar2 = (undefined8 *)*param_1, puVar2 == (undefined8 *)0x0))
     && (puVar2 = (undefined8 *)FUN_100c7bc40(), puVar2 == (undefined8 *)0x0)) {
    FUN_100c62ee0(0xb,0x89,0x41,"x509_att.c",0xf7);
  }
  else {
    if ((param_2 != 0) && (puVar2 != (undefined8 *)0x0)) {
      FUN_100c74e10(*puVar2);
      uVar3 = FUN_100bf8640(param_2);
      *puVar2 = uVar3;
      iVar1 = FUN_100c98840(puVar2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        if (param_1 == (long *)0x0) {
          return puVar2;
        }
        if (*param_1 != 0) {
          return puVar2;
        }
        *param_1 = (long)puVar2;
        return puVar2;
      }
    }
    if ((param_1 != (long *)0x0) && (puVar2 == (undefined8 *)*param_1)) {
      return (undefined8 *)0x0;
    }
    FUN_100c7bc60(puVar2);
  }
  return (undefined8 *)0x0;
}

