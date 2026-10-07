
void FUN_1002a34b0(long *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (3 < DAT_1011b55f8) {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_1008e3970("AudioDS","LocalDevices",4,"%s: commit buffer: %u",uVar2,param_2);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((long)param_1 + 0x10c) = 0;
  lVar1 = param_1[0x1c];
  *(uint *)(lVar1 + 0xc) = param_2 + *(int *)(lVar1 + 0xc) & *(uint *)(lVar1 + 0x14);
  return;
}

