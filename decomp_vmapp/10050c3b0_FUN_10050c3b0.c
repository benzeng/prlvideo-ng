
void FUN_10050c3b0(undefined8 param_1,undefined8 *param_2)

{
  string *this;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_10050c3b0(param_1,*param_2);
    FUN_10050c3b0(param_1,param_2[1]);
    this = (string *)param_2[4];
    param_2[4] = 0;
    if (this != (string *)0x0) {
      FUN_10050c420(this + 0x18,*(undefined8 *)(this + 0x20));
      std::string::~string(this);
      operator_delete(this);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

