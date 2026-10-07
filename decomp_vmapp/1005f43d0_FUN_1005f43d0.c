
undefined8 FUN_1005f43d0(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(long **)(param_1 + 0x20) = param_2;
  uVar1 = (**(code **)(*param_2 + 0x328))(param_2);
  lVar2 = FUN_1007dad70(uVar1);
  *(long *)(param_1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    FUN_1008e3970("","vdisk",0,"Error: allocation problems");
    *(undefined1 *)(param_1 + 0x28) = 0;
    uVar3 = 0x80000002;
  }
  else {
    FUN_1007dae30(lVar2);
    uVar3 = 0;
  }
  return uVar3;
}

