
void FUN_1001bff00(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  QNetworkProxy::QNetworkProxy((QNetworkProxy *)(param_2 + 2),(QNetworkProxy *)(param_1 + 0x10));
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}

