
void FUN_10051ea90(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  undefined8 local_20;
  
  local_28 = param_2 + 0x40;
  local_20 = param_1;
  FUN_1007eaef0();
  lVar1 = *(long *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x38) = param_1;
  }
  else {
    FUN_1007eaf10(&local_28);
    uVar2 = FUN_1002a6120(lVar1,0,1);
    FUN_1002a5a50(uVar2,0,&local_20,8);
    FUN_1004c07d0(param_2 + 0x10,lVar1,0);
  }
  FUN_1007eaf10(&local_28);
  return;
}

