
undefined1 FUN_1006825d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  long local_38;
  long lStack_30;
  long local_28;
  long lStack_20;
  
  uVar3 = 1;
  if (*param_1 == -1) {
    uVar3 = 0;
    iVar1 = FUN_1006823b0(param_1,param_2,0);
    *param_1 = iVar1;
    if (iVar1 != -1) {
      local_28 = 0;
      lStack_20 = 0;
      local_38 = 0;
      lStack_30 = 0;
      lVar2 = FUN_1006829d0();
      if (lVar2 + 1U < 2) {
        FUN_1008e3970("","ioctl",0,"Failed to find \'%s\' kernel symbol!","_IOLog");
        lVar2 = local_38;
      }
      local_38 = lVar2;
      lVar2 = FUN_1006829d0();
      if (lVar2 + 1U < 2) {
        FUN_1008e3970("","ioctl",0,"Failed to find \'%s\' kernel symbol!","_thread_bind");
        lVar2 = lStack_30;
      }
      lStack_30 = lVar2;
      lVar2 = FUN_1006829d0();
      if (lVar2 + 1U < 2) {
        FUN_1008e3970("","ioctl",0,"Failed to find \'%s\' kernel symbol!","_vm_page_wire_count");
        lVar2 = local_28;
      }
      local_28 = lVar2;
      lVar2 = FUN_1006829d0();
      if (lVar2 + 1U < 2) {
        FUN_1008e3970("","ioctl",0,"Failed to find \'%s\' kernel symbol!","_compressor_bytes_used");
        lVar2 = lStack_20;
      }
      lStack_20 = lVar2;
      FUN_100683330(param_1,0x6020780e,&local_38,0x20,0);
      uVar3 = 1;
    }
  }
  return uVar3;
}

