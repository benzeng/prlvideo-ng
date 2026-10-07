
uint FUN_1003ac660(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  uVar1 = 0;
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar1 = 1;
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar1 = 2;
      if (lVar2 == 0) {
        lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
        uVar1 = 3;
        if (lVar2 == 0) {
          lVar2 = (**(code **)(*param_1 + 0x30))(param_1);
          uVar1 = 4;
          if (lVar2 == 0) {
            lVar2 = (**(code **)(*param_1 + 0x38))(param_1);
            uVar1 = -(uint)(lVar2 == 0) | 5;
          }
        }
      }
    }
  }
  return uVar1;
}

