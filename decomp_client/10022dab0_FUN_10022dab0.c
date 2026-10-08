
void FUN_10022dab0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100dddcf0(param_2);
  FUN_100df99c0("","prl_client_app",0,"Finishing relocating an invalid VM with RC = %s",uVar1);
  if ((*(char *)(param_1 + 0x48) != '\0') && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    uVar1 = FUN_100370280();
    FUN_100370780(uVar1,param_1 + 0x18,DAT_100e152b8,0,0);
  }
  FUN_1008137e0(param_1,param_2);
  QObject::deleteLater();
  return;
}

