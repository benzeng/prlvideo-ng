
undefined8 FUN_100cb25c0(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_100c7ae20();
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0x68;
  }
  else {
    FUN_100c74e10(*puVar2);
    uVar3 = FUN_100bf6fe0(param_2);
    *puVar2 = uVar3;
    if (param_3 < 1) {
LAB_100cb2635:
      FUN_100c604e0(param_1,puVar2);
      return 1;
    }
    lVar4 = FUN_100c83f00();
    puVar2[1] = lVar4;
    if (lVar4 == 0) {
      uVar3 = 0x70;
    }
    else {
      lVar4 = FUN_100c83780();
      if (lVar4 == 0) {
        uVar3 = 0x74;
      }
      else {
        iVar1 = FUN_100c76820(lVar4,(long)param_3);
        if (iVar1 != 0) {
          *(long *)(puVar2[1] + 8) = lVar4;
          *(undefined4 *)puVar2[1] = 2;
          goto LAB_100cb2635;
        }
        uVar3 = 0x78;
      }
    }
  }
  FUN_100c62ee0(0x21,0x77,0x41,"pk7_attr.c",uVar3);
  return 0;
}

