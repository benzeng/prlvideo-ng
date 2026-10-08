
undefined8 * FUN_100c97970(long *param_1,long param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (((param_1 == (long *)0x0) || (puVar2 = (undefined8 *)*param_1, puVar2 == (undefined8 *)0x0))
     && (puVar2 = (undefined8 *)FUN_100c863e0(), puVar2 == (undefined8 *)0x0)) {
    FUN_100c62ee0(0xb,0x6d,0x41,"x509_v3.c",0xd4);
  }
  else {
    if ((param_2 != 0) && (puVar2 != (undefined8 *)0x0)) {
      FUN_100c74e10(*puVar2);
      uVar3 = FUN_100bf8640(param_2);
      *puVar2 = uVar3;
      *(uint *)(puVar2 + 1) = -(uint)(param_3 == 0) | 0xff;
      iVar1 = FUN_100c8b0b0(puVar2[2],*(undefined8 *)(param_4 + 2),*param_4);
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
    FUN_100c86400(puVar2);
  }
  return (undefined8 *)0x0;
}

