
bool FUN_100caca10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (DAT_102318460 == 0) {
    DAT_102318460 = FUN_100c60010();
    puVar4 = (undefined8 *)0x0;
    if (DAT_102318460 == 0) goto LAB_100cacaa3;
  }
  puVar2 = (undefined8 *)FUN_100bf3540(0x30,"conf_mod.c",0x11d);
  puVar4 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    uVar3 = FUN_100c58250(param_1);
    puVar2[1] = uVar3;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    *(undefined4 *)(puVar2 + 4) = 0;
    iVar1 = FUN_100c604e0(DAT_102318460,puVar2);
    puVar4 = puVar2;
    if (iVar1 == 0) {
      FUN_100bf3910(puVar2);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_100cacaa3:
  return puVar4 != (undefined8 *)0x0;
}

