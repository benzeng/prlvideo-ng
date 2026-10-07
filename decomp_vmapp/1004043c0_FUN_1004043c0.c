
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004043c0(void)

{
  undefined8 *puVar1;
  
  _DAT_1011bbcc8 = 0;
  _DAT_1011bbcc0 = 0;
  _DAT_1011bbcb8 = 0;
  _DAT_1011bbcb0 = 0;
  _DAT_1011bbca8 = 0;
  _DAT_1011bbcd0 = 0xffffffff;
  QMutex::QMutex((QMutex *)&DAT_1011bbcd8,0);
  ___cxa_atexit(PTR__QMutex_100ba2138,&DAT_1011bbcd8,0x100000000);
  puVar1 = &DAT_1011c84a0;
  do {
    *puVar1 = puVar1;
    puVar1[1] = puVar1;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    FUN_1007d9f60(puVar1 + 5,FUN_1003feda0);
    puVar1 = puVar1 + 0xb;
  } while (puVar1 != (undefined8 *)&DAT_1011cc6a0);
  ___cxa_atexit(FUN_100404330,0,0x100000000);
  return;
}

