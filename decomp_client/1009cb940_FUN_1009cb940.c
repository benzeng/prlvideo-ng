
void FUN_1009cb940(long param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","PTProblemReporting",2,"Start the problem report collecting");
  }
  uVar1 = FUN_1009cb9c0(param_1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (DAT_10230ffd0 < 2) {
    return;
  }
  FUN_100df99c0("","PTProblemReporting",2,"Problem report collecting result, 0x%X");
  return;
}

