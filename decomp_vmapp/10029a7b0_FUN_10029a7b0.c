
void FUN_10029a7b0(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_e0 [184];
  
  if (param_1[0x23] != 0) {
    FUN_10029da40(param_1 + 0x25);
    FUN_10029c770(local_e0,1,2,48000);
    FUN_10029a930(&local_198,param_1);
    iVar1 = (**(code **)(*(long *)param_1[0x23] + 0x48))((long *)param_1[0x23],&local_198,local_e0);
    if (iVar1 < 0) {
      if (DAT_1011b55f8 < 1) {
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
      uVar4 = (undefined4)((ulong)local_198 >> 0x20);
      pcVar5 = "[CSoundDevice] [%s]Slave set_format() failed: %u/%u/%u";
    }
    else {
      lVar2 = FUN_10029ca60(&local_198,local_e0);
      param_1[0x25] = lVar2;
      if (lVar2 != 0) {
        return;
      }
      if (DAT_1011b55f8 < 1) {
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
      uVar4 = (undefined4)((ulong)local_198 >> 0x20);
      pcVar5 = "[CSoundDevice] [%s]Slave set_format() transform not supported: %u/%u/%u -> %u/%u/%u"
      ;
    }
    FUN_1008e3970("AudioAS","LocalDevices",1,pcVar5,uVar3,local_198,local_190,uVar4);
  }
  return;
}

