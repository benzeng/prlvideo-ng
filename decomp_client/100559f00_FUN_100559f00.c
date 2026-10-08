
void FUN_100559f00(undefined8 param_1,undefined8 *param_2)

{
  QKeySequence *this;
  
  this = (QKeySequence *)*param_2;
  if (this != (QKeySequence *)0x0) {
    QKeySequence::~QKeySequence(this + 8);
    QKeySequence::~QKeySequence(this);
    operator_delete(this);
    return;
  }
  return;
}

