
int FUN_10081fd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_1008203f0();
  iVar2 = -1;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_10081ddd0(0x28,"ex_data.c",0x162);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100887ce0(0xf,0x68,0x41,"ex_data.c",0x164);
    }
    else {
      *puVar4 = param_2;
      puVar4[1] = param_3;
      puVar4[2] = param_4;
      puVar4[4] = param_5;
      puVar4[3] = param_6;
      FUN_10081d010(9,2,"ex_data.c",0x16c);
      do {
        iVar1 = FUN_100885600(*(undefined8 *)(lVar3 + 8));
        iVar2 = *(int *)(lVar3 + 0x10);
        if (iVar2 < iVar1) {
          *(int *)(lVar3 + 0x10) = iVar2 + 1;
          FUN_100885650(*(undefined8 *)(lVar3 + 8),iVar2,puVar4);
          goto LAB_10081fe38;
        }
        iVar2 = FUN_1008852e0(*(undefined8 *)(lVar3 + 8),0);
      } while (iVar2 != 0);
      FUN_100887ce0(0xf,0x68,0x41,"ex_data.c",0x16f);
      FUN_10081e1a0(puVar4);
      iVar2 = -1;
LAB_10081fe38:
      FUN_10081d010(10,2,"ex_data.c",0x177);
    }
  }
  return iVar2;
}

