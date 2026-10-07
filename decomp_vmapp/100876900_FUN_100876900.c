
undefined8 * FUN_100876900(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_10081ddd0(0x90,"dh_lib.c",0x7e);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100887ce0(5,0x69,0x41,"dh_lib.c",0x80);
    return (undefined8 *)0x0;
  }
  if (DAT_1011c0858 == 0) {
    DAT_1011c0858 = FUN_100876420();
  }
  puVar2[0x10] = DAT_1011c0858;
  if (param_1 == 0) {
    param_1 = FUN_10087be40();
    puVar2[0x11] = param_1;
    if (param_1 != 0) goto LAB_1008769b4;
    lVar3 = puVar2[0x10];
  }
  else {
    iVar1 = FUN_10087a520(param_1);
    if (iVar1 == 0) {
      FUN_100887ce0(5,0x69,0x26,"dh_lib.c",0x88);
      goto LAB_100876ae2;
    }
    puVar2[0x11] = param_1;
LAB_1008769b4:
    lVar3 = FUN_10087be60(param_1);
    puVar2[0x10] = lVar3;
    if (lVar3 == 0) {
      FUN_100887ce0(5,0x69,0x26,"dh_lib.c",0x92);
      FUN_10087a5e0(puVar2[0x11]);
      goto LAB_100876ae2;
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
  FUN_10081f930(8,puVar2,puVar2 + 0xe);
  if (*(code **)(puVar2[0x10] + 0x20) == (code *)0x0) {
    return puVar2;
  }
  iVar1 = (**(code **)(puVar2[0x10] + 0x20))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
  if (puVar2[0x11] != 0) {
    FUN_10087a5e0();
  }
  FUN_10081fa50(8,puVar2,puVar2 + 0xe);
LAB_100876ae2:
  FUN_10081e1a0(puVar2);
  return (undefined8 *)0x0;
}

