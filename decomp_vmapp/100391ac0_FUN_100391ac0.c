
void FUN_100391ac0(undefined8 *param_1)

{
  FUN_10039f9f0();
  *param_1 = &PTR_FUN_100bbd280;
  *(undefined1 *)((long)param_1 + 0xfd) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  ___bzero(param_1 + 0x21,0x96);
  return;
}

