
undefined8 * FUN_100c4fd10(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x30,"ecs_lib.c",0x77);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100c62ee0(0x2a,100,0x41,"ecs_lib.c",0x79);
LAB_100c4fdd3:
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    if (DAT_102316290 == 0) {
      DAT_102316290 = FUN_100c4ffd0();
    }
    puVar1[3] = DAT_102316290;
    puVar1[1] = 0;
    lVar2 = FUN_100c56ed0();
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      lVar2 = puVar1[3];
    }
    else {
      lVar2 = FUN_100c56ef0(lVar2);
      puVar1[3] = lVar2;
      if (lVar2 == 0) {
        FUN_100c62ee0(0x2a,100,0x26,"ecs_lib.c",0x87);
        FUN_100c557e0(puVar1[1]);
        FUN_100bf3910(puVar1);
        goto LAB_100c4fdd3;
      }
    }
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar2 + 0x20);
    FUN_100bf50a0(0xc,puVar1,puVar1 + 4);
  }
  return puVar1;
}

