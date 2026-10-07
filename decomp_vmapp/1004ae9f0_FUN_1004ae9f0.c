
void FUN_1004ae9f0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((ushort)(*(short *)(param_2 + 0x14) - 1U) < 0x10) {
    lVar1 = FUN_1002a6010(param_2);
    *(undefined4 *)(lVar1 + 4) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xf0000003;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"error inline data size");
    }
  }
  FUN_1004c07d0(param_1 + 0x10,param_2,uVar2);
  return;
}

