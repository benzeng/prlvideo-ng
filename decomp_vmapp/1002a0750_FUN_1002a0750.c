
void FUN_1002a0750(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0xe7) {
    iVar1 = param_2[1];
    (**(code **)(**(long **)(param_1 + 0x38) + 0xd0))(*(long **)(param_1 + 0x38),iVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x0001002a0793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))(*(long **)(param_1 + 0x30),iVar1 != 0);
    return;
  }
  if (*param_2 == 0xe8) {
    uVar2 = param_2[1];
    (**(code **)(**(long **)(param_1 + 0x38) + 0x68))
              (*(long **)(param_1 + 0x38),(uVar2 & 2) >> 1,(uVar2 & 8) >> 3,(uVar2 & 0x20) >> 5,
               (uVar2 & 0x80) >> 7);
                    /* WARNING: Could not recover jumptable at 0x0001002a07fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x68))
              (*(long **)(param_1 + 0x30),uVar2 & 1,(uVar2 & 4) >> 2,(uVar2 & 0x10) >> 4,
               (uVar2 & 0x40) >> 6);
    return;
  }
  FUN_1008e3970("AudioVM","LocalDevices",0,"[CAppSoundAudio] vm_api_request: Unknown request: %d");
  return;
}

