
undefined4 * FUN_100c5a890(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_100bf3540(0x40,"bss_conn.c",0x128);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
    *(undefined8 *)(puVar1 + 9) = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}

