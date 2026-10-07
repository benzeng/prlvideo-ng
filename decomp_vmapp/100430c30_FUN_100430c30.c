
void FUN_100430c30(long param_1,undefined8 param_2)

{
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  
  local_38[0] = *(undefined4 *)(param_1 + 0x42e0);
  FUN_100434990(param_1,param_2,0x1895e,local_38,4,&DAT_1011ccb98,0);
  local_30[0] = *(undefined4 *)(param_1 + 0x42d8);
  FUN_100434990(param_1,param_2,0x18960,local_30,4,&DAT_1011ccb98,0);
  FUN_100430650(param_1,param_2);
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","IOLocalDesktop",1,"DynRes: sendStatesOnAttach. state=%d",
                  *(undefined4 *)(param_1 + 0x42dc));
  }
  local_28[0] = *(undefined4 *)(param_1 + 0x42dc);
  FUN_100434990(param_1,param_2,0x18968,local_28,4,&DAT_1011ccb98,0);
  FUN_100430d40(param_1,param_2,1,0,0,0);
  return;
}

