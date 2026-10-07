
undefined8 * FUN_100874b10(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x30,"ecs_lib.c",0x77);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100887ce0(0x2a,100,0x41,"ecs_lib.c",0x79);
LAB_100874bd3:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    if (DAT_1011c0850 == 0) {
      DAT_1011c0850 = FUN_100874dd0();
    }
    puVar1[3] = DAT_1011c0850;
    puVar1[1] = 0;
    lVar2 = FUN_10087bcd0();
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      lVar2 = puVar1[3];
    }
    else {
      lVar2 = FUN_10087bcf0(lVar2);
      puVar1[3] = lVar2;
      if (lVar2 == 0) {
        FUN_100887ce0(0x2a,100,0x26,"ecs_lib.c",0x87);
        FUN_10087a5e0(puVar1[1]);
        FUN_10081e1a0(puVar1);
        goto LAB_100874bd3;
      }
    }
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar2 + 0x20);
    FUN_10081f930(0xc,puVar1,puVar1 + 4);
  }
  return puVar1;
}

