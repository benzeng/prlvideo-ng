
void FUN_100238360(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100df99c0("","prl_client_app",0,"Sending shutdown confirmation request to VM");
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_100a4d8c0(uVar1,param_2);
  return;
}

