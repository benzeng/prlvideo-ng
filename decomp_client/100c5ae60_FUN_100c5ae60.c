
bool FUN_100c5ae60(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
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
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return puVar2 != (undefined4 *)0x0;
}

