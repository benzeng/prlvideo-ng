
void FUN_100516c40(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_100bc47d0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_100bc47f8;
  std::string::~string((string *)(param_1 + 0x48));
  std::string::~string((string *)(param_1 + 0x30));
  FUN_1005167e0(param_1 + 8);
  std::exception::~exception(param_1);
  return;
}

