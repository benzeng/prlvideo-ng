
void FUN_100cd5d30(long *param_1,int param_2)

{
  char *pcVar1;
  
  QMutex::lock();
  if (0 < DAT_10230ffd0) {
    if (param_2 == 0) {
      pcVar1 = "Standard";
    }
    else {
      pcVar1 = "For accesibility";
      if (param_2 == 1) {
        pcVar1 = "For games";
      }
    }
    FUN_100df99c0("","hid",1,"[CHIDHostHook] %s game mode (modifiers: 0x%x)",pcVar1,
                  *(undefined4 *)((long)param_1 + 0x2c));
  }
  *(int *)((long)param_1 + 0x34) = param_2;
  (**(code **)(*param_1 + 0x168))(param_1);
  QMutex::unlock();
  return;
}

