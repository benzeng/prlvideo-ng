
undefined8 FUN_100345d20(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  cVar1 = FUN_100345d70(param_1,&local_28,2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    *param_2 = local_28;
    param_2[1] = uStack_24;
    param_2[2] = uStack_20;
    param_2[3] = uStack_1c;
    uVar2 = CONCAT71((uint7)(CONCAT44(uStack_1c,uStack_20) >> 0x28),1);
  }
  return uVar2;
}

