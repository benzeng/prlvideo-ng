
void FUN_100330c70(long param_1,char param_2,char param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  *(char *)(param_1 + 0x28) = param_2;
  if (param_2 != '\0') {
    if (2 < DAT_10230ffd0) {
      uVar1 = FUN_100330ac0(param_1);
      FUN_100df99c0("","prl_client_app",3,"CoherenceToolAvailable = %d.\n",uVar1);
    }
    cVar2 = FUN_100330ac0(param_1);
    if ((cVar2 != '\0') && (param_3 != '\0')) {
      uVar3 = 0;
      FUN_100df99c0("","prl_client_app",0,"Initiate Coherence starting...\n");
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      local_30 = 3;
      local_28 = 0;
      local_2c = 0;
      local_24 = 0xffff;
      local_20 = 0;
      local_1c = 0;
      FUN_10031bef0(uVar3,3,&local_30);
    }
  }
  return;
}

