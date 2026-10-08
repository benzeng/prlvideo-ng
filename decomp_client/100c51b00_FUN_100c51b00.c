
undefined8 * FUN_100c51b00(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_100bf3540(0x90,"dh_lib.c",0x7e);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100c62ee0(5,0x69,0x41,"dh_lib.c",0x80);
    return (undefined8 *)0x0;
  }
  if (DAT_102316298 == 0) {
    DAT_102316298 = FUN_100c51620();
  }
  puVar2[0x10] = DAT_102316298;
  if (param_1 == 0) {
    param_1 = FUN_100c57040();
    puVar2[0x11] = param_1;
    if (param_1 != 0) goto LAB_100c51bb4;
    lVar3 = puVar2[0x10];
  }
  else {
    iVar1 = FUN_100c55720(param_1);
    if (iVar1 == 0) {
      FUN_100c62ee0(5,0x69,0x26,"dh_lib.c",0x88);
      goto LAB_100c51ce2;
    }
    puVar2[0x11] = param_1;
LAB_100c51bb4:
    lVar3 = FUN_100c57060(param_1);
    puVar2[0x10] = lVar3;
    if (lVar3 == 0) {
      FUN_100c62ee0(5,0x69,0x26,"dh_lib.c",0x92);
      FUN_100c557e0(puVar2[0x11]);
      goto LAB_100c51ce2;
    }
  }
  puVar2[0xc] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 1;
  *(uint *)(puVar2 + 6) = *(uint *)(lVar3 + 0x30) & 0xfffffbff;
  FUN_100bf50a0(8,puVar2,puVar2 + 0xe);
  if (*(code **)(puVar2[0x10] + 0x20) == (code *)0x0) {
    return puVar2;
  }
  iVar1 = (**(code **)(puVar2[0x10] + 0x20))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
  if (puVar2[0x11] != 0) {
    FUN_100c557e0();
  }
  FUN_100bf51c0(8,puVar2,puVar2 + 0xe);
LAB_100c51ce2:
  FUN_100bf3910(puVar2);
  return (undefined8 *)0x0;
}

