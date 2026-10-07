
bool FUN_100257850(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x15;
  if (param_1 < 7) {
    uVar2 = *(undefined4 *)(&DAT_100b35d60 + (long)(int)param_1 * 4);
  }
  iVar1 = _pthread_set_qos_class_self_np(uVar2,0);
  if (iVar1 != 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to set thread QoS class to %u",uVar2);
  }
  return iVar1 == 0;
}

