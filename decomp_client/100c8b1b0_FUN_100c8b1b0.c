
undefined8 * FUN_100c8b1b0(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined8 *)FUN_100bf3540(0x18,"asn1_lib.c",0x19c);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100c62ee0(0xd,0x82,0x41,"asn1_lib.c",0x19e);
    }
    else {
      *puVar2 = 0x400000000;
      puVar2[2] = 0;
      puVar2[1] = 0;
      *(undefined4 *)((long)puVar2 + 4) = param_1[1];
      iVar1 = FUN_100c8b0b0(puVar2,*(undefined8 *)(param_1 + 2),*param_1);
      if (iVar1 != 0) {
        puVar2[2] = *(undefined8 *)(param_1 + 4);
        return puVar2;
      }
      if ((puVar2[1] != 0) && ((*(byte *)(puVar2 + 2) & 0x10) == 0)) {
        FUN_100bf3910();
      }
      FUN_100bf3910(puVar2);
    }
  }
  return (undefined8 *)0x0;
}

