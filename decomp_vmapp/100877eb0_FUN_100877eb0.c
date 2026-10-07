
undefined8 * FUN_100877eb0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x30,"ech_lib.c",0x8c);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100887ce0(0x2b,0x65,0x41,"ech_lib.c",0x8e);
LAB_100877f73:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    if (DAT_1011c0860 == 0) {
      DAT_1011c0860 = FUN_100878040();
    }
    puVar1[3] = DAT_1011c0860;
    puVar1[1] = 0;
    lVar2 = FUN_10087bfb0();
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      lVar2 = puVar1[3];
    }
    else {
      lVar2 = FUN_10087bfd0(lVar2);
      puVar1[3] = lVar2;
      if (lVar2 == 0) {
        FUN_100887ce0(0x2b,0x65,0x26,"ech_lib.c",0x9c);
        FUN_10087a5e0(puVar1[1]);
        FUN_10081e1a0(puVar1);
        goto LAB_100877f73;
      }
    }
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar2 + 0x10);
    FUN_10081f930(0xd,puVar1,puVar1 + 4);
  }
  return puVar1;
}

