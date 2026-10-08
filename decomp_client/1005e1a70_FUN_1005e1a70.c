
void FUN_1005e1a70(long param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_1005e1310();
      return;
    }
    if (param_3 == 1) {
      CProgressIndicator::toggleAnimation
                (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
      return;
    }
    if (param_3 == 0) {
      CProgressIndicator::toggleAnimation
                (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
      return;
    }
  }
  return;
}

