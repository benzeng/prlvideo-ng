
void FUN_10036c3f0(undefined8 param_1,uint param_2)

{
  FUN_10038e8e0(param_1,".");
  if ((param_2 & 1) != 0) {
    FUN_10038e8e0(param_1,"x");
  }
  if ((param_2 & 2) != 0) {
    FUN_10038e8e0(param_1,"y");
  }
  if ((param_2 & 4) != 0) {
    FUN_10038e8e0(param_1,"z");
  }
  if ((param_2 & 8) == 0) {
    return;
  }
  FUN_10038e8e0(param_1,"w");
  return;
}

