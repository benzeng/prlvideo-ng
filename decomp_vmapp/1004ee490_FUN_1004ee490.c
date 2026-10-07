
void FUN_1004ee490(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  string *this;
  
  FUN_1004ef7f0(param_1 + 0xb);
  if (param_1[10] != 0) {
    lVar1 = param_1[8];
    plVar2 = (long *)param_1[9];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[10] = 0;
    while (plVar2 != param_1 + 8) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  QMutex::~QMutex((QMutex *)(param_1 + 6));
  FUN_1004ef7b0(param_1 + 3,param_1[4]);
  this = (string *)*param_1;
  *param_1 = 0;
  if (this != (string *)0x0) {
    std::string::~string(this);
    operator_delete(this);
    return;
  }
  return;
}

