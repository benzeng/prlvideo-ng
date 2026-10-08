
void FUN_1009d3bb0(string *param_1)

{
  FUN_1009d3c60();
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xe8));
  }
  std::string::~string(param_1 + 0x30);
  std::string::~string(param_1 + 0x18);
  std::string::~string(param_1);
  return;
}

