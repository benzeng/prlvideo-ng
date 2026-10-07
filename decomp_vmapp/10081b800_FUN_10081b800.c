
bool FUN_10081b800(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x30,"bio_ssl.c",0x6a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100887ce0(0x20,0x76,0x41,"bio_ssl.c",0x6c);
  }
  else {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 **)(param_1 + 0x30) = puVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}

