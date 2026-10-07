
void FUN_100756a50(undefined8 param_1,undefined4 *param_2)

{
  ___bzero(param_2,0x90);
  *param_2 = 5;
  param_2[1] = 0x7c;
  param_2[2] = 3;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[3] = 0x45524f43;
  param_2[8] = 1;
  param_2[9] = 0;
  param_2[10] = 1;
  param_2[0xb] = 1;
  qstrncpy((char *)(param_2 + 0xc),"ELF DBGDUMP",0x10);
  return;
}

