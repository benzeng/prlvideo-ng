
undefined8 FUN_100884b70(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    if ((plVar1 != (long *)0x0) && (lVar2 = *plVar1, lVar2 != 0)) {
      puVar3 = *(undefined8 **)(lVar2 + 0x30);
      *puVar3 = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
    }
    if (plVar1[5] != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(plVar1);
    uVar4 = 1;
  }
  return uVar4;
}

