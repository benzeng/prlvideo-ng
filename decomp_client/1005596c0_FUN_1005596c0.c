
void FUN_1005596c0(undefined8 param_1,long param_2,long param_3)

{
  QKeySequence *this;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    this = *(QKeySequence **)(param_3 + -8);
    if (this != (QKeySequence *)0x0) {
      QKeySequence::~QKeySequence(this + 8);
      QKeySequence::~QKeySequence(this);
      operator_delete(this);
    }
  }
  return;
}

