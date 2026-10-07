
undefined8 FUN_1008d5d80(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_10089f8a0();
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0x68;
  }
  else {
    FUN_100899890(*puVar2);
    uVar3 = FUN_100821870(param_2);
    *puVar2 = uVar3;
    if (param_3 < 1) {
LAB_1008d5df5:
      FUN_1008852e0(param_1,puVar2);
      return 1;
    }
    lVar4 = FUN_1008a8980();
    puVar2[1] = lVar4;
    if (lVar4 == 0) {
      uVar3 = 0x70;
    }
    else {
      lVar4 = FUN_1008a8200();
      if (lVar4 == 0) {
        uVar3 = 0x74;
      }
      else {
        iVar1 = FUN_10089b2a0(lVar4,(long)param_3);
        if (iVar1 != 0) {
          *(long *)(puVar2[1] + 8) = lVar4;
          *(undefined4 *)puVar2[1] = 2;
          goto LAB_1008d5df5;
        }
        uVar3 = 0x78;
      }
    }
  }
  FUN_100887ce0(0x21,0x77,0x41,"pk7_attr.c",uVar3);
  return 0;
}

