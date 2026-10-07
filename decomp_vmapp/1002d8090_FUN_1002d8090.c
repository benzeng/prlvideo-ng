
void FUN_1002d8090(long param_1,long param_2)

{
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ControlSetup",param_1 + 0xcf);
  }
  *(undefined8 *)(param_1 + 0xf7) = *(undefined8 *)(param_2 + 0x4d8);
  FUN_1002d81f0(param_1,param_2,0);
  *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
  return;
}

