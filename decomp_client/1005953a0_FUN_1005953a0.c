
void FUN_1005953a0(CDataProvider *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_10221d710;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  CDataProvider::~CDataProvider(param_1);
  return;
}

