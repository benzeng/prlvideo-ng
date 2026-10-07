
void FUN_1000c3c90(undefined8 *param_1,long param_2,string *param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_100ba8cc0;
  std::string::string((string *)(param_1 + 3),param_3);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)(param_2 + 4);
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 6) = 0;
  ___bzero(param_1 + 7,0x108);
  return;
}

