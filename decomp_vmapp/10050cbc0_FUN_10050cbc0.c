
long * FUN_10050cbc0(long *param_1,long *param_2)

{
  string *this;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar2 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar3 = (long *)plVar2[2];
      bVar4 = (long *)*plVar3 != plVar2;
      plVar2 = plVar3;
    } while (bVar4);
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_1000e86c0(param_1[1],param_2);
  this = (string *)param_2[4];
  param_2[4] = 0;
  if (this != (string *)0x0) {
    if (*(long *)(this + 0x38) != 0) {
      _CFRelease();
    }
    FUN_10050c4f0(this + 0x18,*(undefined8 *)(this + 0x20));
    std::string::~string(this);
    operator_delete(this);
  }
  operator_delete(param_2);
  return plVar3;
}

