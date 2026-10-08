
undefined8 * FUN_100c530b0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x30,"ech_lib.c",0x8c);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100c62ee0(0x2b,0x65,0x41,"ech_lib.c",0x8e);
LAB_100c53173:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    if (DAT_1023162a0 == 0) {
      DAT_1023162a0 = FUN_100c53240();
    }
    puVar1[3] = DAT_1023162a0;
    puVar1[1] = 0;
    lVar2 = FUN_100c571b0();
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      lVar2 = puVar1[3];
    }
    else {
      lVar2 = FUN_100c571d0(lVar2);
      puVar1[3] = lVar2;
      if (lVar2 == 0) {
        FUN_100c62ee0(0x2b,0x65,0x26,"ech_lib.c",0x9c);
        FUN_100c557e0(puVar1[1]);
        FUN_100bf3910(puVar1);
        goto LAB_100c53173;
      }
    }
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar2 + 0x10);
    FUN_100bf50a0(0xd,puVar1,puVar1 + 4);
  }
  return puVar1;
}

