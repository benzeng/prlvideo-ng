
int FUN_10010f490(long param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x38))();
  if (iVar1 < 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_1008e3970("","vm",0,"Failed to init monitor");
  }
  return iVar1;
}

