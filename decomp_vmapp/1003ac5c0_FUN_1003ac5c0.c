
char * FUN_1003ac5c0(long *param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x18))(param_1);
      if (lVar1 == 0) {
        lVar1 = (**(code **)(*param_1 + 0x28))(param_1);
        if (lVar1 == 0) {
          lVar1 = (**(code **)(*param_1 + 0x30))(param_1);
          if (lVar1 == 0) {
            lVar1 = (**(code **)(*param_1 + 0x38))(param_1);
            pcVar2 = "cs";
            if (lVar1 == 0) {
              pcVar2 = "??";
            }
          }
          else {
            pcVar2 = "ds";
          }
        }
        else {
          pcVar2 = "hs";
        }
      }
      else {
        pcVar2 = "gs";
      }
    }
    else {
      pcVar2 = "vs";
    }
  }
  else {
    pcVar2 = "ps";
  }
  return pcVar2;
}

