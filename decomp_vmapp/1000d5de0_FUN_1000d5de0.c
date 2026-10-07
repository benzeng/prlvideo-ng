
undefined1 FUN_1000d5de0(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_1008e3970("","vm",0,"Copying swap pages...");
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
                    (*(long **)(param_1 + 0x30),param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = 0;
    FUN_1008e3970("","vm",0,"Failed to copy swap pages");
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x80020000;
      uVar2 = 0;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"Copying swap pages... done");
    uVar2 = 1;
  }
  return uVar2;
}

