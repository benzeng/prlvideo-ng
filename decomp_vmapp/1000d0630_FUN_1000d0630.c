
void FUN_1000d0630(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1940);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xd8) = 0;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Error 0x%X occurred when trying to suspend the VM!",param_2);
    FUN_1000d22a0(param_1);
    cVar2 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x2b0));
    if (cVar2 != '\0') {
      FUN_1000d1e80(param_1,0);
      return;
    }
  }
  return;
}

