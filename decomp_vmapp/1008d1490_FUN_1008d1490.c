
bool FUN_1008d1490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (DAT_1011c2a20 == 0) {
    DAT_1011c2a20 = FUN_100884e10();
    puVar4 = (undefined8 *)0x0;
    if (DAT_1011c2a20 == 0) goto LAB_1008d1523;
  }
  puVar2 = (undefined8 *)FUN_10081ddd0(0x30,"conf_mod.c",0x11d);
  puVar4 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    uVar3 = FUN_10087d050(param_1);
    puVar2[1] = uVar3;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    *(undefined4 *)(puVar2 + 4) = 0;
    iVar1 = FUN_1008852e0(DAT_1011c2a20,puVar2);
    puVar4 = puVar2;
    if (iVar1 == 0) {
      FUN_10081e1a0(puVar2);
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_1008d1523:
  return puVar4 != (undefined8 *)0x0;
}

